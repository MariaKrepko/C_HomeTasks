#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main()
{
    int n = 10;
    float r = 2.4;
    float min = INFINITY;
    srand(time(NULL));
    float array[n];

    for (int i = 0; i < n; i++)
        array[i] = rand() % 100;

    for (int i = 0; i < n; i++)
        printf("%f ", array[i]);
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        array[i] = array[i]- r;
        printf("%f ", array[i]);
        if (array[i] < min)
            min = array[i];      
    }
    printf("\n Наиболее близкое число к числу r из массива состоящего из n элементов: %f ", min+r);
    return 0;
}  
