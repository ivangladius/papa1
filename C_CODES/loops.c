#include <stdio.h>

int main (void) {
    int i, n;
    printf("This programm prints a table of sqares.\n");
    printf("Enter numberof entries in table: ");

    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        //printf("\t%d\t%d\n", i, i * i);
        i++;
    }
    return 0;
}