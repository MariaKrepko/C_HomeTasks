#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int index_mn = 0;
    int index_mx = 0;
    int max = 0;
    int min = 1;

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            index_mx = i;
        }
        else if (array[i] < min)
        {
            min = array[i];
            index_mn = i;
        }
    }
    array[index_mx] = min;
    array[index_mn] = max;

    for (int i = 0; i < 10; i++)
    {   
        if ( i == 0)
        printf(" %d", array[i]);
        else if (i > 0)
        printf(", %d",array[i]);
        
    }
}