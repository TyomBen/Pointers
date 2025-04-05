#include <stdio.h>

void pointerfunction(int *num1, int *num2)
{
    int *pointer1 = num1;
    int *pointer2 = num2;
    *pointer1 = 100;
    *pointer2 = 200;
}

int main ()
{   
    int num1 = 10;
    int num2 = 20;
    pointerfunction(&num1, &num2);
    printf("%d\n%d\n", num1, num2);
}
