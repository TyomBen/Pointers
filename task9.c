#include <stdio.h>

char *_strcat (char *str1, char *str2 )
{
    char *newstr = str1;

    while (*str1 != '\0'){
            ++str1;
        }
    while(*str2 != '\0'){
            *str1 = *str2;
            ++str1;
            ++str2;
        }
        *str1 = '\0';
        return newstr;
}

int main ()
{
    char str1[20] = "Artyom";
    char *str2 = "Benikyan";
    char *res =_strcat(str1, str2);
    printf("%s\n", res);
    
}
