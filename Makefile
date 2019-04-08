ARCHS = arm64
FINALPACKAGE = 1

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Magma
$(TWEAK_NAME)_FILES = include/UIColor.m Magma.xm
$(TWEAK_NAME)_CFLAGS += -fobjc-arc
$(TWEAK_NAME)_LIBRARIES = colorpicker

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += preferences

include $(THEOS_MAKE_PATH)/aggregate.mk

after-install::
	install.exec "killall -9 SpringBoard"
