// insertEntry function

#include <stdio.h>

struct entry {
        int value;
        struct entry *next;
    };

int main(void) {

    void insertEntry(struct entry * const newEntry, struct entry * const prevEntry);

    struct entry n1, n2, n3, n2_1, *listPtr = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    printf("original list: ");
    while (listPtr != (struct entry *) 0) {
        printf("%i  ", listPtr->value);
        listPtr = listPtr->next;
    }

    n2_1.value = 250;
    insertEntry(&n2_1, &n2);
    listPtr = &n1;
    printf("\nafter insertion: ");
    while (listPtr != (struct entry *) 0) {
        printf("%i  ", listPtr->value);
        listPtr = listPtr->next;
    }

    printf("\n");

    return 0;

}

void insertEntry(struct entry * const newEntry, struct entry * const prevEntry) { // insert newEntry after prevEntry

    newEntry->next = prevEntry->next;
    prevEntry->next = newEntry;

}