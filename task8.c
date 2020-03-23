#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array_a[] = {2, 6, 3, 5, 6, 7, 7, 8, 0, 9};
    int array_b[] = {0, 2, 3, 4, 5, 5, 6, 7, 8, 11};
    int N = 10;
    int count = 0;
    int c;
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        printf(" %d", array_a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf(" %d", array_b[i]);
    }

    for (int i = 0; i < N; i++)
    {
        c = 0;
        if (i == 0 || array_a[i] != array_a[i - 1])
        {
            for (int j = 0; j < N; j++)
            {
                if (array_a[i] == array_b[j])
                {
                    c += 1;
                }
            }
            if (c > 0)
            {
                count++;
            }
        }
    }
    printf("\n %d ", count);
    return 0;
}