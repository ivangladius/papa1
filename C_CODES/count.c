#include <stdio.h>
#include <math.h>

int main (void){
    int num;
    int count;

    printf("Enter a number: ");

    scanf("%d", &num);
   // scanf("%d", &n);

   //count = (num == 0) ? 1 : log10(num) + 1;

   count = log10(num) + 1;

    printf("The number has %d digits\n", count);

   // printf("The sum is: %d\n", Math.Floor(Math.Log(999)));

    return 0;
}

