# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no         # Mouse keys
EXTRAKEY_ENABLE = no         # Audio control and System control
CONSOLE_ENABLE = no          # Console for debug
COMMAND_ENABLE = yes          # Commands for debug and configuration
NKRO_ENABLE = yes            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no        # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = yes
AUDIO_ENABLE = no            # Audio output
CUSTOM_MATRIX = lite

SRC += matrix.c
