// functions for doubly linked lists

#include <stdio.h>

struct entry {
        int value;
        struct entry *next, *prev;
    };

int main(void) {

    void insertEntry(struct entry * const newEntry, struct entry * const prevEntry);
    void removeEntry(struct entry * const entry);
    void displayList (struct entry * leader, char dir);

    struct entry n0_1, n1, n2, n2_1, n3, n3_1, listStart, listEnd;

    listStart.next = &n1;
    listStart.prev = (struct entry *) 0;
    listEnd.next = (struct entry *) 0;
    listEnd.prev = &n3;

    n1.value = 100;
    n1.next = &n2;
    n1.prev = &listStart;

    n2.value = 200;
    n2.next = &n3;
    n2.prev = &n1;

    n3.value = 300;
    n3.next = &listEnd; // !
    n3.prev = &n2;

    printf("original list: ");
    displayList(listStart.next, 'f'); // original list

    n2_1.value = 250;
    insertEntry(&n2_1, &n2);  // first insertion
    printf("\n\nafter 1st insertion: ");
    displayList(listStart.next, 'f');

    n0_1.value = 50;
    insertEntry(&n0_1, &listStart); // second insertion
    printf("\nafter 2nd insertion: ");
    displayList(listStart.next, 'f');

    n3_1.value = 350;
    insertEntry(&n3_1, &n3); // third insertion
    printf("\nafter 3rd insertion: ");
    displayList(listStart.next, 'f');

    printf("  backwards: ");
    displayList(listEnd.prev, 'b');

    removeEntry(&n1); // first deletion
    printf("\n\nafter 1st deletion: ");
    displayList(listStart.next, 'f');

    removeEntry(&n0_1); // second deletion
    printf("\nafter 2nd deletion: ");
    displayList(listStart.next, 'f');

    removeEntry(&n3_1); // third deletion
    printf("\nafter 3rd deletion: ");
    displayList(listStart.next, 'f');

    printf("  backwards: ");
    displayList(listEnd.prev, 'b');

    printf("\n");

    return 0;

}

void insertEntry(struct entry * const newEntry, struct entry * const prevEntry) { // insert newEntry after prevEntry

    newEntry->next = prevEntry->next;
    newEntry->prev = prevEntry;
    prevEntry->next = newEntry;

    struct entry *leader = newEntry->next, *temp = newEntry;

    while (leader != (struct entry *) 0) {
        leader->prev = temp;
        temp = leader;
        leader = leader->next;
    }

}

void removeEntry(struct entry * const entry) { // remove entry

    entry->prev->next = entry->next;
    entry->next->prev = entry->prev;

}

void displayList (struct entry * leader, char dir) { // display a list

    switch (dir) {
        case 'f':
            while (leader->next != (struct entry *) 0) {
                printf("%i  ", leader->value);
                leader = leader->next;
            }
            break;
        case 'b':
            while (leader->prev != (struct entry *) 0) {
                printf("%i  ", leader->value);
                leader = leader->prev;
            }
            break;
        default:
            printf("\nwrong direction parameter\n");
            break;
    }

}