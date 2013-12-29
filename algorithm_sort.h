/* 
 * File:   algorithm_sort.h
 * Author: hl
 * @brief 一些常用算法【没有模板是不想暴露实现， 用模板可以省去大量代码】
 * Created on 2013年12月21日, 下午6:29
 * @note
 *  1.   添加插入排序算法【int, double, short, float】 ----- 2013年12月21日, 下午6:29 
 *  2.   添加归并排序算法【int, double, short, float】 ----- 2013年12月29日, 下午22:00
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
    
    /**
     * 归并排序之合并有序代码
     * @param arrayA
     * @param countA
     * @param arrayB
     * @param countB
     * @param arrayCout
     */
    static void merge_sortedArray(int array[], int first, int mid, int last, int arrayCout[]);
    static void merge_sortedArray(double array[], int firt, int mid, int last, double arrayCout[]);
    static void merge_sortedArray(short array[], int firt, int mid, int last, short arrayCout[]);
    static void merge_sortedArray(float array[], int firt, int mid, int last, float arrayCout[]);
    static void merge_sort_recursion(int array[], int first, int last, int temp[]);
    static void merge_sort_recursion(double array[], int first, int last, double temp[]);
    static void merge_sort_recursion(short array[], int first, int last, short temp[]);
    static void merge_sort_recursion(float array[], int first, int last, float temp[]);
    static void merge_sort(int array[], int count);
    static void merge_sort(double array[], int count);
    static void merge_sort(short array[], int count);
    static void merge_sort(float array[], int count);
};

#endif	/* ALGORITHM_SORT_H */

