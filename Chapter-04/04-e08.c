// next largest even multiple

#include <stdio.h>

int main(void) {

    // n = i + j - i % j

    int n, i, j;

    i = 256, j = 7;
    printf("i = %-6i j = %-3i n = %i\n", i, j, i + j - i % j);

    i = 365, j = 7;
    printf("i = %-6i j = %-3i n = %i\n", i, j, i + j - i % j);

    i = 12258, j = 23;
    printf("i = %-6i j = %-3i n = %i\n", i, j, i + j - i % j);

    i = 996, j = 4;
    printf("i = %-6i j = %-3i n = %i\n", i, j, i + j - i % j);

    return 0;

}