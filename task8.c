#include <stdio.h>

int _strchr (char *str, char c)
{
    int flag = 0;
    while(*str != '\0'){
            if (*str == c){
                   return c;
                   break;
                }
            ++str;
        }
        return 0;
}
int main ()
{
    char *str = "Artyom";
    char c = 'o';
    int found =_strchr(str, c);
    if(found){
            printf("%c\n", found);
        }else {
            printf("%d\n", found);
        }
}


