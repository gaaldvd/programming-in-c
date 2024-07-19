// find word in a dictionary, 10-09 modified with binary searching

#include <stdio.h>

struct entry {char word[15], definition[50];};

int compareStrings(const char s1[], const char s2[]) { // compare two strings

    int i = 0, answer;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') i++;

    if (s1[i] < s2[i]) answer = -1;         // s1 < s2
    else if (s1[i] == s2[i]) answer = 0;    // s1 == s2
    else answer = 1;                        // s1 > s2

    return answer;

}

int lookUp(const struct entry dictionary[], const char search[], const int entries) { // find word in the dictionary

    int compareStrings(const char s1[], const char s2[]);

    int low = 0, high = entries - 1, mid, result;

    while (low <= high) {
        mid = (low + high) / 2;
        result = compareStrings(dictionary[mid].word, search);
        if (result == -1) low = mid + 1;
        else if (result == 1) high = mid - 1;
        else return mid; // word found
    }

    return -1; // word not found

}

int main(void) {

    int lookUp(const struct entry dictionary[], const char search[], const int entries);

    const struct entry dictionary[100] = {
        {"aardvaark", "a burrowing African mammal"},
        {"abyss", "a bottomless pit"},
        {"acumen", "mentally sharp; keen"},
        {"addle", "to become confused"},
        {"aerie", "a high nest"},
        {"affix", "to append; attach"},
        {"agar", "a jelly made from seaweed"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        {"ajar", "partially opened"}
    };

    char word[10];
    int entries = 10, entry;

    printf("enter word to look up: ");
    scanf("%14s", word);
    entry = lookUp(dictionary, word, entries);

    if (entry != -1) printf("%s\n", dictionary[entry].definition);
    else printf("the word \'%s\' can\'t be found in the dictionary\n", word);

    return 0;

}