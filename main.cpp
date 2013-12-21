/* 
 * File:   main.cpp
 * Author: hl
 *
 * Created on 2013年12月21日, 下午6:19
 */

#include <iostream>
#include "algorithm_sort.h"
#include "hl_log.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    #define LEN 14
    int a[LEN] = {3, 4, 5, 2, 6, 1, 2, 3, 0, 5, 3, 9, 7, 6};
    
    cout << "\n原始数组" << endl;
    R_ShowData::showArray(a, LEN);
    
    R_Sort::insertion_sort(a, LEN);
    
    cout << "\n排序后的数组" << endl;
    R_ShowData::showArray(a, LEN);
    
    return 0;
}

