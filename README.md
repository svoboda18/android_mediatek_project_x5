Mediatek ALPS
=================
- This repo, contains files that are need to be used in order to correctly collect the mediatek alps
  for **DOOGEE X5** device.

## X5 Speces:
- MT6580 Chipset
- Shipped With Lollipop 5.1
- 5,0" 1280x720 display
- 2400MAh battery capacity
- 1GB RAM / 8GB ROM

## Known information:
| Subsystem | Driver name | Availability | Working | 
|-----------|-------------|--------------|---------|
| GPU | `Mali-400 MP2` | Yes | -- |
| Camera #1 | `s5k5e2y_mipi_raw` | Yes | -- |
| Camera #2 | `gc2355_mipi_raw` | Yes | -- |
| Sensors | `MT6516` | Yes | Yes |
| Flash | `Samsung FNX2MB` | Yes | -- |
| Lens | `DW9714AF` | Yes | Yes |
| Sound | `mtsndcard` | Yes | Yes |
| Accdet | `mt6580-accdet` | Yes | -- |

## Whats working:
- N/A

## Build process:
* Clone this repo, by running:
`git clone https://github.com/svoboda18/android_mediatek_project_x5 -b quack ~/project_x5`
* Navigate to alps 10.0 directory, and then execute:
`bash ~/project_x5/ready_tree.sh`
* You may now extract your GMSExpress in `vendor/google`, to have gapps included.
* Make sure to have Blackghost kernel cloned in `kernel-4.9-lc` folder.
* Setup the android build environment start the build.
* For split build: (note: make commend will take time depends on your machine)
   - `export OUT_DIR=out_sys && lunch sys_mssi_32_ww_armv7-user && make sys_images`
   - `export OUT_DIR=out && lunch vnd_X5-user && make vnd_images krn_images`
   - Finnaly, we merge all files/folders into one, `out/*/*/X5/merged` will contain all required files for a firmware release.

```sh
python out_sys/target/product/mssi_32_ww_armv7/images/split_build.py \
       --system-dir out_sys/target/product/mssi_32_ww_armv7/images \
       --vendor-dir out/target/product/X5/images \
       --kernel-dir out/target/product/X5/images \
       --output-dir out/target/product/X5/merged
```
* For full build:
   - Execute: `lunch full_X5-user && make`
   - When building process is done, `out/*/*/X5` will contain all required files for a firmware release.

* You can use this commend to get a zipped firmware release files:
    - Exexute:

```bash
zip -r9 ALPS_X5_Q_$([ -f dtbo.img ] && echo "DTBO_")$([ -f vbmeta.img ] && echo "VBMETA_")$([ -f super.img ] && echo "SUPER_")$(date +'%d%m%Y')_RELEASE.zip \
       $([ -f vbmeta.img ] && echo $(ls *sign*) || echo $(ls *sign* | sed "s@-sign@@")) \
       $([ -f vbmeta.img ] && echo vbmeta.img) \
       $([ -f super.img ] || echo product.img) \
       preloader_X5.bin MT*
```

## Whats not working:
- N/A

## Credits:
* All credits goes to the author (@svoboda18), most thanks for Andrey and other great 4pda people for references.
