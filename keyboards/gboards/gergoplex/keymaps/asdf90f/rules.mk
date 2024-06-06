#----------------------------------------------------------------------------
# make gboards/gergoplex:default:flash
# Make sure you have dfu-programmer installed!
#----------------------------------------------------------------------------

#Debug options
VERBOSE                = no
DEBUG_MATRIX_SCAN_RATE = no
DEBUG_MATRIX           = no
CONSOLE_ENABLE         = no
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes

#Combos!
COMBO_ENABLE = no
VPATH                  +=  keyboards/gboards/

ifeq ($(strip $(DEBUG_MATRIX)), yes)
    OPT_DEFS += -DDEBUG_MATRIX
endif
