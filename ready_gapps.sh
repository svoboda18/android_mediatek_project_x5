#!/bin/bash

force_clone() {
	[ -d "$2" ] && rm -rf $2
	git clone --depth=1 $1 $2 $(echo $3)
}

echo "> [GAPPS] Ready G-Apps Started" ; sleep 0.2
echo "> [TOOL] Must be run on top of android directory"
read

[ ! -f build/envsetup.sh ] && exit

echo "> [TOOL] Whats your target arch? (arm/arm64)" 
read arch
case $arch in
	arm)
		force_clone https://github.com/opengapps/aosp_build vendor/opengapps/build
		force_clone https://gitlab.opengapps.org/opengapps/all.git vendor/opengapps/sources/all
		force_clone https://gitlab.opengapps.org/opengapps/arm.git vendor/opengapps/sources/arm
	;;
	arm64)
		force_clone https://github.com/opengapps/aosp_build vendor/opengapps/build
	    force_clonehttps://gitlab.opengapps.org/opengapps/all vendor/opengapps/sources/all
		force_clonehttps://gitlab.opengapps.org/opengapps/arm vendor/opengapps/sources/arm
	    force_clonehttps://gitlab.opengapps.org/opengapps/arm64 vendor/opengapps/sources/arm64
	;;
	*) echo "Wrong arch" ; exit ;;
esac

echo "> [GAPPS][GEN] Task completed"
# END
