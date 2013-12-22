/* 
 * File:   algorithm_search.h
 * Author: Administrator
 *
 * Created on 2013年12月22日, 下午9:36
 */

#ifndef ALGORITHM_SEARCH_H
#define	ALGORITHM_SEARCH_H

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

#endif	/* ALGORITHM_SEARCH_H */

