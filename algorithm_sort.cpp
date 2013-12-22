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

int R_Search::binary_search(int array[], int count, int key)
{
    int start = 0, mid, end = count - 1;
    if (0 >= count)
    {
        return 0xFFFF;
    }
    
    while (start <= end)
    {
        mid = (start + end)/2;
        if (array[mid] > key)
        {
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0xFFFF;
}

int R_Search::binary_search(short array[], int count, short key)
{
    int start = 0, mid, end = count - 1;
    if (0 >= count)
    {
        return 0xFFFF;
    }
    
    while (start <= end)
    {
        mid = (start + end)/2;
        if (array[mid] > key)
        {
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0xFFFF;
}

int R_Search::binary_search(float array[], int count, float key)
{
    int start = 0, mid, end = count - 1;
    if (0 >= count)
    {
        return 0xFFFF;
    }
    
    while (start <= end)
    {
        mid = (start + end)/2;
        if (array[mid] > key)
        {
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0xFFFF;
}

int R_Search::binary_search(double array[], int count, double key)
{
    int start = 0, mid, end = count - 1;
    if (0 >= count)
    {
        return 0xFFFF;
    }
    
    while (start <= end)
    {
        mid = (start + end)/2;
        if (array[mid] > key)
        {
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0xFFFF;
}
