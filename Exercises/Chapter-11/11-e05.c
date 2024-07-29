// doubly linked lists

#include <stdio.h>

struct entry {
        int value;
        struct entry *next, *prev;
    };

int main(void) {

    struct entry n1, n2, n3, *listPtr, listHeader;

    listHeader.next = &n1;
    listPtr = listHeader.next;

    n1.value = 100;
    n1.next = &n2;
    n1.prev = &listHeader;

    n2.value = 200;
    n2.next = &n3;
    n2.prev = &n1;

    n3.value = 300;
    n3.next = (struct entry *) 0;
    n3.prev = &n2;

    printf("original list: ");
    while (listPtr != (struct entry *) 0) {
        printf("%i  ", listPtr->value);
        listPtr = listPtr->next;
    }

    printf("\n");

    return 0;

}