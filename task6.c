#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n = 10;
    int count = 0;
    int array[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf(" ");

    if (array[0] % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
            if (array[i] % 2 == 0)
                count += 1;

        for (int j = 1; j < n; j += 2)
            if (array[j] % 2 == 1)
                count += 1;
        if (count == n)
            printf("чередуются ");
        else
            printf("не чередуются ");
    }
    else
    {
        for (int i = 0; i < n; i += 2)
            if (array[i] % 2 == 1)
                count += 1;

        for (int j = 1; j < n; j += 2)
            if (array[j] % 2 == 0)
                count += 1;
        if (count == n)
            printf("чередуются ");
        else
            printf("не чередуются ");
    }
    return 0;
}
