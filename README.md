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
| GPU | `Mali-400 MP2` | Yes | Yes |
| Camera #1 | `s5k5e2y_mipi_raw` | Yes | Yes |
| Camera #2 | `gc2355_mipi_raw` | Yes | Yes |
| Sensors | `MT6516` | Yes | Yes |
| Flash | `Samsung FNX2MB` | Yes | Yes |
| Lens | `DW9714AF` | Yes | Yes |
| Sound | `mtsndcard` | Yes | Yes |
| Accdet | `mt6580-accdet` | - | Yes |

## Whats working:
- Boots.
- Cameras (8/5 MP), Video Capture, Auto-focus, Flashlight (all modes)
- HW Composer/ Graphics.
- WiFi, Bluetooth And GPS.
- Touch screen/HW buttons, Rotation, Proximity/Light sensors.
- Audio, Microphone.
- Sim Cards, FM Radio.
- System is smooth and reliable
- Gapps (GO), Anything else.

## Build process:
* Clone this repo, by running:
`git clone https://github.com/svoboda18/android_mediatek_project_x5 -b pie ~/project_x5`
* Navigate to alps 9.0 directory, and then execute:
`bash ~/project_x5/ready_tree.sh`
* You may now extract your GMSExpress in `vendor/google`, to have gapps included.
* Make sure to have Blackghost kernel cloned in `kernel-4.9-lc` folder.
* Setup the android build env., lunch X5 target and finnaly start the build by:
`make`
  - When building process is done, `out/*/*/X5` will contain all required files for a firmware release.

## Whats not working:
- N/A

## Credits:
* All credits goes to the author (@svoboda18), most thanks for Andrey and other great 4pda people for references.
