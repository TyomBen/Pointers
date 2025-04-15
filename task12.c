#include <stdio.h>

void foo(char *c1, char *c2, short sh, int target[20])
{
    int i = 0;
    int newsh = 0;
    char *ptr = (char *)target;

    while (*c1 != '\0'){
           *ptr = *c1;
            ++c1;
            ++ptr;
        }
    while(*c2 != '\0'){
            *ptr = *c2;
            ++c2;
            ++ptr;
        }

    while(sh > 0){
            newsh = sh % 10;
           *ptr = '0' + newsh;
            ++ptr;
            sh /= 10;
        }
        *ptr = '\0';
    printf("%s\n", (char *)target);


}

int main ()
{
    int target[20];
    char *c1 = "Artyom";
    char *c2 = "Benikyan";
    short sh = 100;
    foo (c1, c2, sh, target);
}

