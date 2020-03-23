#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[] = {1, 0, 1, 2, 3, 3, 4, 3, 4, 5, 5, 3};
    int N = sizeof(array) / sizeof(int);
    int count;
    int max = 0;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        printf(" %d", array[i]);

    for (int i = 0; i < N; i++)
    {
        count = 0;
        for (int j = 0; j < N; j++)
        {
            if (array[j] == array[i])
                count += 1;
        }
        if (count > max)
            max = count;
    }

    printf("\n максимальное кол-во одинаковых элементов: %d ", max);
    return 0;
}