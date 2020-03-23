#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n = 10;
    int min = RAND_MAX;
    int max = -RAND_MAX;
    int index_min = 0;
    int index_max = 0;
    int sum = 0;
    int array[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
        array[i] = rand() % 10;

    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            index_min = i;
            min = array[i];
        }
        if (array[i] > max)
        {
            index_max = i;
            max = array[i];
        }
    } 
    for (int j = index_min + 1; j < index_max; j++)
        sum += array[j];
    printf("\n %d ", sum);
    return 0;
}
