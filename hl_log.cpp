#include <stdio.h>
#include "hl_log.h"

void R_ShowData::showArray(int array[], int count)
{
    int i;
    
    printf("\n ------Show int array data-------\n");
    for (i = 0; i < count; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n ------Show int array data-------\n");
}

void R_ShowData::showArray(double array[], int count)
{
    int i;
    
    printf("\n ------Show double array data-------\n");
    for (i = 0; i < count; ++i)
    {
        printf("%f  ", array[i]);
    }
    printf("\n ------Show double array data-------\n");
}

void R_ShowData::showArray(short array[], int count)
{
    int i;
    
    printf("\n ------Show short array data-------\n");
    for (i = 0; i < count; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n ------Show short array data-------\n");
}

void R_ShowData::showArray(float array[], int count)
{
    int i;
    
    printf("\n ------Show float array data-------\n");
    for (i = 0; i < count; ++i)
    {
        printf("%f  ", array[i]);
    }
    printf("\n ------Show float array data-------\n");
}