# ==========================================
#   Template Project
#   Copyright (c) 2014 Chase Johnson
# ========================================== 

PROJECT_DIR = ../
TARGET_BASE = Strategy

#COMPILIER = gcc
COMPILER = g++
OUTPUT_DIRECTORY = -o $(PROJECT_DIR)/bin/

ifeq ($(OS),Windows_NT)
	TARGET_EXTENSION=.exe
else
	TARGET_EXTENSION=.out
endif
TARGET = $(TARGET_BASE)$(TARGET_EXTENSION)


#INCLUDE FILES


#SYMBOLS



#SOURCE FILES
SOURCE_FILES=$(PROJECT_DIR)src/main/main.cpp


CLEANUP = rm -f $(PROJECT_DIR)/build/* ; rm -f $(TARGET) ; mkdir -p $(PROJECT_DIR)/build

#Check for windows otherwise assume OSX (Darwin) or posix
#ifeq ($(OS),Windows_NT)
#else
#	CLEANUP = rm -f build/* ; rm -f $(TARGET) ; mkdir -p build

#endif

all: clean default

default:
	$(info *** Default Action - Building Project ***)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES) $(OUTPUT_DIRECTORY)$(TARGET)
	$(PROJECT_DIR)/bin/$(TARGET)
	

clean:
	$(CLEANUP)