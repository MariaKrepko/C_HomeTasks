#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{    
    int n = 10;
    srand(time(NULL));
    int array[n];
    int count = 0;

    for (int i = 0; i < n; i++)
        array[i] = rand() % 100;
    
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    for (int i = 0; i < n - 1; i++)
        if (array[i] <= array[i+1])
            count += 1;
    if (count == 10)
        printf("\n Упорядочен по возрастанию ");
    else
        printf("\n Не упорядочен по возрастанию  ");

}