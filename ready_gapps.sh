#!/bin/bash

echo 'Welcome to opengapps packages adder!'
sleep 1

read -p 'Do you want to clone all needed gapps files? (y) ' gapps
[ $gapps = 'y' ] && {

fclone() {
	[ -d $2 ] && rm -rf $2
	git clone --depth=4 $1 $2 $(echo $3)
}

fclone https://github.com/opengapps/aosp_build vendor/opengapps/build
fclone https://gitlab.nezorfla.me/opengapps/all vendor/opengapps/sources/all
fclone https://gitlab.nezorfla.me/opengapps/arm vendor/opengapps/sources/arm
#fclone https://gitlab.nezorfla.me/opengapps/arm64 vendor/opengapps/sources/arm64

}
