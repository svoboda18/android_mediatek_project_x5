#!/bin/bash
echo "> [TREE][GEN] Ready Tree Started" ; sleep 0.2
echo "> [TOOL] Must be run on top of alps directory"
read

[ ! -f build/envsetup.sh ] && exit

[ ! -f device/DOOGEE/X5/AndroidProducts.mk ] && {
	echo "> [TREE][GEN] Cloning project for X5 target"
	perl vendor/mediatek/prop*/scripts/project_clone/project_clone.pl -p "$(pwd)" -o "mediateksample/k80_bsp" -n "DOOGEE/X5"
}

echo "> [TREE][GEN] Overriding project files for X5 target"
cp -r "$(dirname "$0")"/* .

echo "> [TREE][GEN] Task completed"
exit
