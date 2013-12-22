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

class R_Search
{
public:
    R_Search();
    ~R_Search();
public:
    /**
     * @brief binary search
     * @param arry
     * @param key
     * @return if success, return the index of the key, or return 0xFFFF.
     */
    static int binary_search(int array[], int count, int key);
    static int binary_search(double array[], int count, double key);
    static int binary_search(short array[], int count, short key);
    static int binary_search(float array[], int count, float key);
};

#endif	/* ALGORITHM_SORT_H */

