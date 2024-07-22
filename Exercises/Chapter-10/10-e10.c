// sort dictionary function

#include <stdio.h>

struct entry {char word[15], definition[50];};

int main(void) {

    void dictionarySort(struct entry dictionary[], int entries);

    struct entry dictionary[100] = {
        {"acumen", "mentally sharp; keen"},                 // 3
        {"aigrette", "an ornamental cluster of feathers"},  // 9
        {"abyss", "a bottomless pit"},                      // 2
        {"affix", "to append; attach"},                     // 6
        {"agar", "a jelly made from seaweed"},              // 7
        {"addle", "to become confused"},                    // 4
        {"ahoy", "a nautical call of greeting"},            // 8
        {"aardvaark", "a burrowing African mammal"},        // 1
        {"ajar", "partially opened"},                       // 10
        {"aerie", "a high nest"}                            // 5
    };

    printf("unsorted dictionary:\n");
    for (int i = 0; i < 10; i++) printf("  %s: %s\n", dictionary[i].word, dictionary[i].definition);

    dictionarySort(dictionary, 10);

    printf("\nsorted dictionary:\n");
    for (int i = 0; i < 10; i++) printf("  %s: %s\n", dictionary[i].word, dictionary[i].definition);

    return 0;

}

void dictionarySort(struct entry dictionary[], int entries) { // sort a dictionary alphabetically

    int compareStrings(const char s1[], const char s2[]);

    struct entry temp;

    for (int i = 0; i < entries; i++)
        for (int j = i + 1; j < entries; j++) {
            if (compareStrings(dictionary[i].word, dictionary[j].word) == 1) {
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }

}

int compareStrings(const char s1[], const char s2[]) { // compare two strings

    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') i++;

    if (s1[i] < s2[i]) answer = -1;         // s1 < s2
    else if (s1[i] == s2[i]) answer = 0;    // s1 == s2
    else answer = 1;                        // s1 > s2

    return answer;

}