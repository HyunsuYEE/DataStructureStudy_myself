Deque.o: Deque.h Deque.c
	gcc -c Deque.c

DequeMain.o : DequeMain.c Deque.h
	gcc -c DequeMain.c

main: Deque.o DequeMain.o
	gcc Deque.o DequeMain.o -o main