#include <stdio.h>
#include <stdlib.h> //Список симметричный?
#include <math.h>
#include <time.h>

int main()
{
    int count = 0;
    int array[] = {0,1, 2, 3, 4, 5, 8, 5, 4, 3, 2, 1,0};   
    int n = sizeof(array) / sizeof(array[0]); 
    int max_index = n - 1;

    for (int i = 0; i < max_index / 2; i++)
        if (array[i] == array[max_index - i])
            count += 1;
    if (count == max_index / 2)
        printf ("Список симметриченый");
    else
        printf("Список несимметриченый");
            
}
