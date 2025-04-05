#include <stdio.h>

int main ()
{
    int num1 = 10;
    int num2 = 20;
    int *pointer1 = &num1;
    int *pointer2 = &num2;

    printf("plus= %d\n", *pointer1 + *pointer2);
    printf("minus= %d\n", *pointer1 - *pointer2);
}
