CUSTOM_MATRIX = lite
EEPROM_DRIVER = spi
QUANTUM_PAINTER_DRIVERS = ssd1351_spi
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

DEFAULT_FOLDER = tzarc/ghoul/rev1/stm32

SRC += analog.c
