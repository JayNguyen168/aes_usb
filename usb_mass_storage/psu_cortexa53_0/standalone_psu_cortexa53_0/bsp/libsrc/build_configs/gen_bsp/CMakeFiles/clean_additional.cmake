# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "C:\\Users\\asus\\Desktop\\USBToken\\USB_CDC_Ultra96v2\\usb_mass_storage\\psu_cortexa53_0\\standalone_psu_cortexa53_0\\bsp\\include\\sleep.h"
  "C:\\Users\\asus\\Desktop\\USBToken\\USB_CDC_Ultra96v2\\usb_mass_storage\\psu_cortexa53_0\\standalone_psu_cortexa53_0\\bsp\\include\\xiltimer.h"
  "C:\\Users\\asus\\Desktop\\USBToken\\USB_CDC_Ultra96v2\\usb_mass_storage\\psu_cortexa53_0\\standalone_psu_cortexa53_0\\bsp\\include\\xtimer_config.h"
  "C:\\Users\\asus\\Desktop\\USBToken\\USB_CDC_Ultra96v2\\usb_mass_storage\\psu_cortexa53_0\\standalone_psu_cortexa53_0\\bsp\\lib\\libxiltimer.a"
  )
endif()
