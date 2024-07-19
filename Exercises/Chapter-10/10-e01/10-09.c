// find word in a dictionary

#include <stdio.h>
#include <stdbool.h>

struct entry {char word[15], definition[50];};

bool equalStrings(const char s1[], const char s2[]) { // check if two strings are identical

    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') i++;
    if (s1[i] == '\0' && s2[i] == '\0') areEqual = true;
    else areEqual = false;

    return areEqual;

}

int lookUp(const struct entry dictionary[], const char search[], const int entries) { // find word in the dictionary

    bool equalStrings(const char s1[], const char s2[]);

    int i;

    for (i = 0; i < entries; i++)
        if (equalStrings(search, dictionary[i].word)) return i;

    return -1;

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