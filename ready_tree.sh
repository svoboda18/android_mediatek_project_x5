#!/bin/bash
echo "run me on top of the alps source, okay?"
read

[ ! -d build/envsetup.sh ] && exit

echo "placing trees.."
[ ! -d device/DOOGEE/X5 ] && {
	perl vendor/mediatek/prop*/scripts/project_clone/project_clone.pl -p "$(pwd)" -o "mediateksample/k80_bsp" -n "DOOGEE/X5"
}
cp -r "$(dirname "$0")"/* .

echo "done!"

bash ready_gapps.sh
exit
