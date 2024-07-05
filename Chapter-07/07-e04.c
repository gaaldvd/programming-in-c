// averaging floats

#include <stdio.h>

int main(void) {

    float values[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0}, sum;
    
    printf("values:  ");

    for (int i = 0; i < 10; i++) {
        printf("%.2f ", values[i]);
        sum += values[i];
    }

    printf("\naverage: %.2f\n", sum / 10);

    return 0;

}