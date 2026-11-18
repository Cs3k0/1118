#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "1118.h"

int* foo(){
    int* array = malloc(100 * sizeof(int));
    for(size_t i = 0; i < 100; i++)
    {
        array[i] = i;
    }
    return array;
}


char* beolvas()
{
    int lenght = 21;
    char* str = malloc(lenght * sizeof(char));
    fgets(str, lenght, stdin);
    str = realloc(str, (strlen(str) + 1) * sizeof(char));
    return str;
}

int* szortirozo(int* array, int size){
    int* result = malloc(size * sizeof(int));
    int* first = result;
    int* last = result + size -1;
    for(size_t i = 0; i < size; i++)
    {
        if(array[i] >= 0){
            *first = array[i];
            first++;
        }
        else{
            *last = array[i];
            last--;
        }
    }
    return result;
}