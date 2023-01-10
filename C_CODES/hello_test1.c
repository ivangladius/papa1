#include <stdio.h>

int main() {

   float preis;
   float preis2;

   scanf("%f", & preis);

    preis2 = preis * 1.05;

   printf("Preis %.2f with 5 perc. grow is %.2f\n", preis, preis2);

   /* printf("       *\n");
    printf("      * \n");
    printf("     *  \n");
    printf("*   *   \n");
    printf(" * *    \n");
    printf("  *\n"); */

    int i = 1;
    int j = 2;
   // int k = i++ + j++;
    int k = ++i + ++j;

    printf("i = %d, j = %d, k = %d\n", i, j, k);

    return 0;

}