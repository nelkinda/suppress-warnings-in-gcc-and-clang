CPPFLAGS:=-std=c11 -W -Wall -pedantic -Werror
CFLAGS:=-O2 -save-temps

puts.o: CPPFLAGS+=-Wno-unused-parameter

.PHONY: all
all: puts

.PHONY: clean
clean::
	$(RM) *.[adios] puts
