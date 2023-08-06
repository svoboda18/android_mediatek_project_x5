#!/bin/bash
function print {
	echo "$@"
	sleep 0.4
}

print -e "\n[READY TREE] Ready Tree Started\n" ; sleep 0.2
print "[NOTE] Must be run on top of alps directory!"
sleep 1.5

[ ! -f build/envsetup.sh ] && exit
[ ! -d device/mediateksample ] && exit

[ "$(dirname `realpath "$0"`)" = "$(pwd)"  ] && {
	print -e "\n[ERROR] Calling from the inside of alps directory?"
	exit 1
}

[ ! -f device/DOOGEE/X5/AndroidProducts.mk ] && {
	print "[TREE] [PATCH] Applying soong patch (one-time)"
	patch -b -p1 -i $(dirname "$0")/patches/soong.patch

	print "[TREE] [GEN] Cloning project for X5 target"
	perl vendor/mediatek/prop*/scripts/project_clone/project_clone.pl -p "$(pwd)" -o "mediateksample/k80_bsp" -n "DOOGEE/X5"
}

print "[TREE] [DEVICE] Overriding project files for X5 target"
cp -r "$(dirname "$0")"/* .

# gen release keys and switch to release-keys
[ ! -d device/DOOGEE/X5/security ] && {
    print "[TREE] [DEVICE] Generating release-keys..."
	mkdir device/DOOGEE/X5/security
	CERTS="releasekey platform shared media networkstack testkey verity verity_key"
	CERTS_HEADER='/C=DZ/ST=SETIF/L=BA/O=svoboda18/OU=ALPS/CN=ALPS/emailAddress=dev.svoboda18@gmail.com' 

	for KEY in $CERTS; do
		print "[TREE] [DEVICE] [KEYS] Generating \"$KEY\" certs.."
		echo -e "\n" | ./development/tools/make_key \
			device/DOOGEE/X5/security/$KEY \
			"$CERTS_HEADER" rsa \
			>/dev/null 2>&1
	done

	mkdir -p device/mediatek/security/X5
	ln -s $(pwd)/device/DOOGEE/X5/security/* device/mediatek/security/X5/

	sed "s@PRODUCT_VERITY_SIGNING_KEY :=.*@PRODUCT_VERITY_SIGNING_KEY := device/DOOGEE/X5/security/verity@" \
		-i build/make/target/product/verity.mk
	sed "/BUILD_VERSION_TAGS += \$(BUILD_KEYS)/iBUILD_KEYS := release-keys" \
		-i build/make/core/Makefile
}

print "[READY TREE] Task completed"
exit
