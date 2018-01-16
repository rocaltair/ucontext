LIB = libucontext.a
CC = gcc
AR = ar

SRC = asm.S context.c

OBJS = asm.o context.o
HEADERS = 386-ucontext.h \
	  amd64-ucontext.h \
	  arm-ucontext.h \
	  mips-ucontext.h \
	  power-ucontext.h

$(LIB) : $(OBJS)
	$(AR) crs $@ $^

asm.o : asm.S
	$(CC) -c -o $@ $<

context.o : context.c | $(HEADERS)
	$(CC) -c -o $@ $<

clean:
	rm -f $(OBJS) $(LIB)

.PHONY: clean
