#include <stdio.h>
#include <string.h>
#include <malloc.h>

int lenght_line(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
char *join_lines(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int lenght_1 = lenght_line(s1);
    int lenght_2 = lenght_line(s2);
    char *str = malloc(lenght_1 + lenght_2 + 1);

    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i += 1;
    }
    while (s2[j] != '\0')
    {
        str[i + j] = s2[j];
        j += 1;
    }
    return str;
}

int main()
{
    printf("%s\n", join_lines("корона", "вирус"));
    return 0;
}