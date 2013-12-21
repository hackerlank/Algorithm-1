/* 
 * File:   hl_log.h
 * Author: hl
 * @brief 一些常用算法
 * Created on 2013年12月21日, 下午7:16
 * @note
 *  1.   添加数组打印输出【int, double, short, float】 ----- 2013年12月21日, 下午7:16 
 */

#ifndef HL_LOG_H
#define	HL_LOG_H

class R_ShowData
{
public:
    static void showArray(int array[], int count);
    static void showArray(double array[], int count);
    static void showArray(short array[], int count);
    static void showArray(float array[], int count);
};

#endif	/* HL_LOG_H */

