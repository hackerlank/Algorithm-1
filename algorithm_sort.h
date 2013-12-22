/* 
 * File:   algorithm_sort.h
 * Author: hl
 * @brief 一些常用算法
 * Created on 2013年12月21日, 下午6:29
 * @note
 *  1.   添加插入排序算法【int, double, short, float】 ----- 2013年12月21日, 下午6:29 
 */

#ifndef ALGORITHM_SORT_H
#define	ALGORITHM_SORT_H

class R_Sort
{
public:
    R_Sort();
    ~R_Sort();
public:
    static void insertion_sort(int array[], int count);
    static void insertion_sort(double array[], int count);
    static void insertion_sort(short array[], int count);
    static void insertion_sort(float array[], int count);
};

#endif	/* ALGORITHM_SORT_H */

