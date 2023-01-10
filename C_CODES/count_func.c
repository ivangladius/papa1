#include <stdio.h>
#include <math.h>

int main (void)
{
    int num;
    int count = 0;

    printf("Enter a number: ");

    scanf("%d", &num);

    count = countt(num);

     printf("The number has %d digits\n", count);

     return 0;

}

   int countt(int n)
   {
   int counter = 0;

 //count = (num == 0) ? 1 : log10(num) + 1;

   counter = log10(n) + 1;


    return counter;
}