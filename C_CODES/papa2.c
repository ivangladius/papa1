#include <stdio.h>

    char a = 'a';

    int main(void) {

        while (a <= 'z') {
            if(a == 'e')
             continue;
             if( a == 'i')
              continue;
               if(a == 'o')
                continue;
                 if( a == 'u')
                continue;
            printf("%c\t", a);
            a++;
        }
        return 0;
    }
