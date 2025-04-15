#include <stdio.h>

char *_strcpy(char *str1, char *str2)
{
    char *res = str1;
    while(*str2 != '\0'){
            *str1 = *str2;
            ++str1;
            ++str2;
        }
        *str1 = '\0';
        return res;
}

int main ()
{
    char str1[20];
    char *str2 = "Hello";
    char *copy = _strcpy(str1, str2);
    printf("%s\n", copy);
}
