#include "algorithm_sort.h"

R_Sort::R_Sort()
{
    
}

R_Sort::~R_Sort()
{
    
}

void R_Sort::insertion_sort(int array[], int count)
{
    int i, j;
    int key = 0;
    
    if (0 >= count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = array[j];
        i = j - 1;
        for ( ; i >= 0 && array[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            array[i + 1] = array[i];
            --i;
        }
        
        ///< This place, I make some change. Is it better?
        if ((j - 1) != i)
        {
                array[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(double array[], int count)
{
    int i, j;
    double key = 0;
    
    if (0 >= count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = array[j];
        i = j - 1;
        for ( ; i >= 0 && array[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            array[i + 1] = array[i];
            --i;
        }
        
        ///< This place, I make some change. Is it better?
        if ((j - 1) != i)
        {
                array[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(short array[], int count)
{
    int i, j;
    short key = 0;
    
    if (0 >= count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = array[j];
        i = j - 1;
        for ( ; i >= 0 && array[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            array[i + 1] = array[i];
            --i;
        }
        
        ///< This place, I make some change. Is it better?
        if ((j - 1) != i)
        {
                array[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(float array[], int count)
{
    int i, j;
    float key = 0;
    
    if (0 >= count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = array[j];
        i = j - 1;
        for ( ; i >= 0 && array[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            array[i + 1] = array[i];
            --i;
        }
        
        ///< This place, I make some change. Is it better?
        if ((j - 1) != i)
        {
                array[i + 1] = key;
        }
    }
}