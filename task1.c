#include <stdio.h>

int main ()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *pointera = &a;
    int *pointerb = &b;
    int *pointerc = &c;


    printf("Valuea -> %p\n", pointera);
    printf("Valueb -> %p\n", pointerb);
    printf("Valueb -> %p\n", pointerc);
}
