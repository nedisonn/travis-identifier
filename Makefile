# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

C_COMPILER=gcc
ifeq ($(shell uname -s), Darwin)
C_COMPILER=clang
endif

GCCFLAGS = -g -Wall -Wfatal-errors 
ALL = identifier
GCC = gcc

UNITY_ROOT=Unity

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  identifier_without_main.c \
  test/identifier_test.c \
  test/test_runners/identifier_test_Runner.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src 
SYMBOLS=

all: clean identifier compile run

compile:
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1) -v

run:
	- ./$(TARGET1)

clean:
	$(CLEANUP) $(TARGET1)
	sudo rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov

identifier: identifier.c
	$(GCC) $(GCCFLAGS) -o $@ $@.c

cov: identifier.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifier.c

test/test_runners/identifier_test_Runner.c: test/identifier_test.c
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/identifier_test.c  test/test_runners/identifier_test_Runner.c

ci: CFLAGS += -Werror
ci: compile