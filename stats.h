
/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Assignment - 1
 *
 * Report analytics on the maximum, minimum, mean, and median of the data set. In addition, you will need to reorder this data set from large to small. All statistics should be rounded down to the nearest integer
 *
 * @author Anjana Anil
 * @date 16/11/20
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief To find the statistics of an array
 *
 *  The mean median maximum minimum are all printed given a pre - defined array.The array is also sorted with sort_array function.
 *
 * @param print_statistics()   A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * @return An unsigned char result from the function
 *
 * @param print_array() Given an array of data and a length, prints the array to the screen
 * @return An unsigned char result from the function
 *
 * @param find_median() Given an array of data and a length, returns the median value
 * @return An unsigned char result from the function
 *
 * @param find_mean() Given an array of data and a length, returns the mean
 * @return An unsigned char result from the function
 *
 * @param find_maximum()  Given an array of data and a length, returns the maximum
 * @return An unsigned char result from the function
 *
 * @param find_minimum()  Given an array of data and a length, returns the minimum
 * @return An unsigned char result from the function
 *
 * @param sort_array()    Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * @return An unsigned char result from the function
 *
 *
 *
 */

unsigned char print_array(unsigned char*,unsigned int);
unsigned char find_median(unsigned char* ,unsigned int);
unsigned char find_mean(unsigned char*,unsigned int);
unsigned char find_minimum(unsigned char* ,unsigned int);
unsigned char find_maximum(unsigned char* ,unsigned int);
unsigned char print_statistics(unsigned char* ,unsigned int );
unsigned char sort_array(unsigned char* ,unsigned int);












#endif /* __STATS_H__ */

