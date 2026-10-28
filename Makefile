a.out : main.o priority.o push.o pop.o stack.o
        gcc main.o priority.o push.o pop.o stack.o
main.o : main.c
        gcc -c main.c
priority.o : priority.c
        gcc -c priority.c
push.o : push.c
        gcc -c push.c
pop.o : pop.c
        gcc -c pop.c
stack.o : stack.c
        gcc -c stack.c
