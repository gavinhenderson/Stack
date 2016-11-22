#Gavin Henderson
#150010848

CFLAGS= -Wall -Wextra -pedantic

clean:
	rm -f StackExe
	
all:
	cc frame_manager.c stack.c stack_tester.c -o StackExe
	
run:
	./StackExe
	