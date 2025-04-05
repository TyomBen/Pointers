#include <stdio.h>

int main () 
{
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = &arr[0];
 
    for(int i = 0; i < size; ++i){
            printf("%d\n", *(p + i));
        }
}
