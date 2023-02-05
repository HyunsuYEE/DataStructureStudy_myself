CLinkedList.o: CLinkedList.h CLinkedList.c 
	gcc -c CLinkedList.c

NightDutyMain.o: CLinkedList.h
	gcc -c NightDutyMain.c

main: CLinkedList.o NightDutyMain.o
	gcc NightDutyMain.o CLinkedList.o -o main