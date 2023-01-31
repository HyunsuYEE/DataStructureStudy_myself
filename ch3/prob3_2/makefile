ArrayList.o : ArrayList.h ArrayList.c
	gcc -c ArrayList.c

NameCard.o : NameCard.h NameCard.c
	gcc -c NameCard.c

NameCardMain.o : NameCardMain.c NameCard.h ArrayList.h
	gcc -c NameCardMain.c

main : ArrayList.o NameCard.o NameCardMain.o
	gcc ArrayList.o NameCard.o NameCardMain.o -o main
