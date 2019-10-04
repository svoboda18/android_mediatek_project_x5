#!/bin/bash

force_clone() {
	[ -d "$2" ] && rm -rf $2
	git clone --depth=1 $1 $2 $(echo $3)
}
echo " "
echo '========================================================='
echo '=        Welcome to opengapps packages installer        ='
echo '========================================================='
sleep 1

echo " "
echo '========================================================='
echo '=  Do you want to shallow clone all needed gapps files? =' 
echo '========================================================='
read answer

case $answer in
	y|Y|Yes|Yup|yup) {
						echo " "
						echo '========================================================='
						echo '=           Whats your target arch? (arm/arm64)         =' 
						echo '========================================================='
						read arch

						case $arch in
							    arm)
									force_clone https://github.com/svoboda18/aosp_build vendor/opengapps/build
									force_clone https://gitlab.opengapps.org/opengapps/all.git vendor/opengapps/sources/all
									force_clone https://gitlab.opengapps.org/opengapps/arm.git vendor/opengapps/sources/arm
									;;
								arm64)
									force_clone https://github.com/opengapps/aosp_build vendor/opengapps/build
									force_clone https://gitlab.nezorfla.me/opengapps/all vendor/opengapps/sources/all
									force_clone https://gitlab.nezorfla.me/opengapps/arm vendor/opengapps/sources/arm
									force_clone https://gitlab.nezorfla.me/opengapps/arm64 vendor/opengapps/sources/arm64
									;;
								 *) echo "Wrong arch" ; exit ;;
						esac
						
												echo " "
						echo '========================================================='
						echo '=           GOOD BYE BOSS | Happy ROM Building          =' 
						echo '========================================================='
						echo " "
};;
esac
