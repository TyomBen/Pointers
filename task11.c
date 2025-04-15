#include <stdio.h>

char *_strstr(char *text, char *found)
{
    char *newfound = found;
    while(*text != '\0' && *found != '\0'){
            if (*text == *found){
                    ++found;
                }
                ++text;
        }
        return newfound;

}

int main ()
{
    char *text = "Artyom";
    char *found = "tyo";

    char *newstr = _strstr(text, found);
    printf("%s\n", newstr);
}

