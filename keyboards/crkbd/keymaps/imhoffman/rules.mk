SPLIT_KEYBOARD = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes

OLED_ENABLE     = yes
OLED_DRIVER     = SSD1306

#BOOTLOADER = qmk-dfu
#BOOTLOADER = lufa-dfu
BOOTLOADER = atmel-dfu

##  space savings as per https://docs.qmk.fm/#/squeezing_avr
#EXTRAFLAGS += -flto
#LTO_ENABLE = yes
#CONSOLE_ENABLE = no
#COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
MUSIC_ENABLE = no
##  This disables some of the functionality that you may not need. But note that extrakeys disables stuff like the media keys and system volume control.
#EXTRAKEY_ENABLE = no

#SPACE_CADET_ENABLE = no
#GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
