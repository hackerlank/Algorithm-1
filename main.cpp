/* 
 * File:   main.cpp
 * Author: hl
 *
 * Created on 2013年12月21日, 下午6:19
 */

#include <iostream>
#include "algorithm_sort.h"
#include "algorithm_search.h"
#include "hl_log.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    #define LEN 14
    int a[LEN] = {3, 4, 5, 2, 6, 1, 2, 3, 0, 5, 3, 9, 7, 6};
    int b[LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    
#if 0
    cout << "\n原始数组" << endl;
    R_ShowData::showArray(a, LEN);
    
    R_Sort::insertion_sort(a, LEN);
    
    cout << "\n排序后的数组" << endl;
    R_ShowData::showArray(a, LEN);
#endif
    
    int id = R_Search::binary_search(b, LEN, 88);
    cout << "\n找到第一个索引: " << ((id != 0xFFFF) ? (id) : (-1)) << endl;
    
#if 1    
    cout << "\n原始数组" << endl;
    R_ShowData::showArray(a, LEN);
    
    R_Sort::merge_sort(a, LEN);
    
    cout << "\n排序后的数组" << endl;
    R_ShowData::showArray(a, LEN);
#endif  
    return 0;
}

