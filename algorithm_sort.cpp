#include "algorithm_sort.h"

R_Sort::R_Sort()
{
    
}

R_Sort::~R_Sort()
{
    
}

void R_Sort::insertion_sort(int arry[], int count)
{
    int i, j;
    int key = 0;
    
    if (0 == count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = arry[j];
        i = j - 1;
        for ( ; i >= 0 && arry[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            arry[i + 1] = arry[i];
            --i;
        }
        
        ///< This place, I make some change. Is better?
        if ((j - 1) != i)
        {
                arry[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(double arry[], int count)
{
    int i, j;
    double key = 0;
    
    if (0 == count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = arry[j];
        i = j - 1;
        for ( ; i >= 0 && arry[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            arry[i + 1] = arry[i];
            --i;
        }
        
        ///< This place, I make some change. Is better?
        if ((j - 1) != i)
        {
                arry[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(short arry[], int count)
{
    int i, j;
    short key = 0;
    
    if (0 == count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = arry[j];
        i = j - 1;
        for ( ; i >= 0 && arry[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            arry[i + 1] = arry[i];
            --i;
        }
        
        ///< This place, I make some change. Is better?
        if ((j - 1) != i)
        {
                arry[i + 1] = key;
        }
    }
}

void R_Sort::insertion_sort(float arry[], int count)
{
    int i, j;
    float key = 0;
    
    if (0 == count)
    {
        return;
    }   
    for (j = 1; j < count; ++j)
    {
        key = arry[j];
        i = j - 1;
        for ( ; i >= 0 && arry[i] > key; )
        {
            ///< At firt, I write like this.
            //            if (arry[i] < key)
            //            {
            //                break;
            //            }
            arry[i + 1] = arry[i];
            --i;
        }
        
        ///< This place, I make some change. Is better?
        if ((j - 1) != i)
        {
                arry[i + 1] = key;
        }
    }
}
