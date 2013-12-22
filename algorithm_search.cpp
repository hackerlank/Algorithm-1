#include "algorithm_search.h"

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

