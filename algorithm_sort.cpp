#include<stdlib.h>
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

void R_Sort::merge_sortedArray(int array[], int first, int mid, int last, int arrayCout[])
{
    int i = first, j = mid + 1, k = 0;
    
    while (i <= mid && j <= last)
    {
        if (array[i] > array[j])
        {
            arrayCout[k++] = array[j++];
        }
        else
        {
            arrayCout[k++] = array[i++];
        }
    }
    
    while (i <= mid)
    {
        arrayCout[k++] = array[i++];
    }
    
    while (j <= last)
    {
        arrayCout[k++] = array[j++];
    }
    
    ///< 之前没有加这，所以错误！回头再想想，在些代码的时候总是遗漏了=之类的，哎!
    for (i = 0; i < k; i++)  
        array[first + i] = arrayCout[i];  
}

void R_Sort::merge_sortedArray(double array[], int first, int mid, int last, double arrayCout[])
{
    int i = first, j = mid + 1, k = 0;
    
    while (i <= mid && j <= last)
    {
        if (array[i] > array[j])
        {
            arrayCout[k++] = array[j++];
        }
        else
        {
            arrayCout[k++] = array[i++];
        }
    }
    
    while (i <= mid)
    {
        arrayCout[k++] = array[i++];
    }
    
    while (j <= last)
    {
        arrayCout[k++] = array[j++];
    }
    
    for (i = 0; i < k; i++)  
        array[first + i] = arrayCout[i];
}

void R_Sort::merge_sortedArray(short array[], int first, int mid, int last, short arrayCout[])
{
   int i = first, j = mid + 1, k = 0;
    
    while (i <= mid && j <= last)
    {
        if (array[i] > array[j])
        {
            arrayCout[k++] = array[j++];
        }
        else
        {
            arrayCout[k++] = array[i++];
        }
    }
    
    while (i <= mid)
    {
        arrayCout[k++] = array[i++];
    }
    
    while (j <= last)
    {
        arrayCout[k++] = array[j++];
    }
   
   for (i = 0; i < k; i++)  
        array[first + i] = arrayCout[i];
}

void R_Sort::merge_sortedArray(float array[], int first, int mid, int last, float arrayCout[])
{
    int i = first, j = mid + 1, k = 0;
    
    while (i <= mid && j <= last)
    {
        if (array[i] > array[j])
        {
            arrayCout[k++] = array[j++];
        }
        else
        {
            arrayCout[k++] = array[i++];
        }
    }
    
    while (i <= mid)
    {
        arrayCout[k++] = array[i++];
    }
    
    while (j <= last)
    {
        arrayCout[k++] = array[j++];
    }
    
    for (i = 0; i < k; i++)  
        array[first + i] = arrayCout[i];
}

void R_Sort::merge_sort_recursion(int array[], int first, int last, int temp[])
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last)/2;
        ///< 左边排序
        merge_sort_recursion(array, first, mid, temp);
        ///< 右边排序
        merge_sort_recursion(array, mid + 1, last, temp);
        ///< 合并
        merge_sortedArray(array, first, mid, last, temp);
    }
}
void R_Sort::merge_sort_recursion(double array[], int first, int last, double temp[])
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last)/2;
        merge_sort_recursion(array, first, mid, temp);
        merge_sort_recursion(array, mid + 1, last, temp);
        merge_sortedArray(array, first, mid, last, temp);
    }
}
void R_Sort::merge_sort_recursion(short array[], int first, int last, short temp[])
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last)/2;
        merge_sort_recursion(array, first, mid, temp);
        merge_sort_recursion(array, mid + 1, last, temp);
        merge_sortedArray(array, first, mid, last, temp);
    }
}
void R_Sort::merge_sort_recursion(float array[], int first, int last, float temp[])
{
    int mid = 0;
    if (first < last)
    {
        mid = (first + last)/2;
        merge_sort_recursion(array, first, mid, temp);
        merge_sort_recursion(array, mid + 1, last, temp);
        merge_sortedArray(array, first, mid, last, temp);
    }
}

void R_Sort::merge_sort(int array[], int count)
{
    int i = 0;
    int * pInt = NULL;
    
    if (0 >= count)
    {
        return;
    }
    pInt = new int[count]; 
    if (NULL == pInt)
    {
        return;
    }
    
    merge_sort_recursion(array, 0, count - 1, pInt);
    
    delete[] pInt;
}
void R_Sort::merge_sort(double array[], int count)
{
    int i = 0;
    double * pInt = NULL;
    
    if (0 >= count)
    {
        return;
    }
    pInt = new double[count]; 
    if (NULL == pInt)
    {
        return;
    }
    
    merge_sort_recursion(array, 0, count - 1, pInt);
    
    delete[] pInt;
}
void R_Sort::merge_sort(short array[], int count)
{
    int i = 0;
    short * pInt = NULL;
    
    if (0 >= count)
    {
        return;
    }
    pInt = new short[count]; 
    if (NULL == pInt)
    {
        return;
    }
    
    merge_sort_recursion(array, 0, count - 1, pInt);
    
    delete[] pInt;
}
void R_Sort::merge_sort(float array[], int count)
{
    int i = 0;
    float * pInt = NULL;
    
    if (0 >= count)
    {
        return;
    }
    pInt = new float[count]; 
    if (NULL == pInt)
    {
        return;
    }
    
    merge_sort_recursion(array, 0, count - 1, pInt);
    
    delete[] pInt;
}