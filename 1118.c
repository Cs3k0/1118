#include <stdio.h>
#include <stdlib.h>
#include "1118.h"

int main()
{
    int a = 6;
    printf("%d", a);
    int* b = malloc(sizeof(int));
    *b = 7;
    printf("%d\n", *b);
    free(b);

    int* c = calloc(1, sizeof(int));
    printf("%d\n", *c);
    free(c);
    
    
    int* array = foo();

    for(size_t i = 0; i < 100; i++)
    {
        printf("%d\n", array[i]);
    }
    free(array);

    char* str = beolvas();
    printf("%s", str);
    free(str);


    int A[] = {1, -2, 3, -4, 5};
    int* sorted = szortirozo(A, 5);
    for(size_t i = 0; i < 5; i++)
    {
        printf("%d\n", sorted[i]);
    }
    free(sorted);
    return 0;


}
