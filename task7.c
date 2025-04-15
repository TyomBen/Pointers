#include <stdio.h>

int strlength (char *str)
{
    int count = 0;
    while(*str != '\0'){
            ++count;
            ++str;
        }
       return count;
}

int main()
{
    char *str = "Hello";
    int strlen = strlength(str);
    printf("%d\n", strlen);
}
