// removeEntry function

#include <stdio.h>

struct entry {
        int value;
        struct entry *next;
    };

int main(void) {

    void removeEntry(struct entry * const prevEntry);

    struct entry n1, n2, n3, *listPtr, listHeader;

    listHeader.next = &n1;
    listPtr = listHeader.next;

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

    removeEntry(&n1);
    listPtr = listHeader.next;
    printf("\nafter 1st deletion: ");
    while (listPtr != (struct entry *) 0) {
        printf("%i  ", listPtr->value);
        listPtr = listPtr->next;
    }

    removeEntry(&listHeader);
    listPtr = listHeader.next;
    printf("\nafter 2nd deletion: ");
    while (listPtr != (struct entry *) 0) {
        printf("%i  ", listPtr->value);
        listPtr = listPtr->next;
    }

    printf("\n");

    return 0;

}

void removeEntry(struct entry * const prevEntry) { // remove entry after prevEntry

    prevEntry->next = prevEntry->next->next;

}