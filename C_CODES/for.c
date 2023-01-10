#include <stdio.h>

int main (void){

    int sum = 0;
    int i;

    for(i = 1; i <= 10; i++) {
        sum += i;
       if (i == 5) {
            continue;
        }
        printf("%d\t%d\n", i, sum);
    }
}