#include <stdio.h>
#include <string.h>
#include <malloc.h>

int str_len(const char *string)
{
    int i = 0;

    while (string[i] != '\0')
        i++;
    return i;
}

char *twice_str(char *s)
{
    int i = 0;
    int lenght = str_len(s);
    char *string = malloc(lenght * 2 + 1);

    while (s[i] != '\0')
    {
        string[i] = s[i];
        string[i + lenght] = s[i];
        i += 1;
    }
    return string;
}

int main()
{
    printf(twice_str("abc"));
    return 0;
}