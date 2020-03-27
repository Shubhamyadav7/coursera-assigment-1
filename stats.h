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
 * @brief Header file
 *
 * @author shubham yadav
 * @date 27/03/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(int median,int min,int max,int mean);
/* @brief <Print Statistics>
 *
 * This function takes max value, min value, mean and median and prints it
 *
 * 
 * @return void
 */
void print_array(unsigned char *array, int n);

/**
 * @brief <Print a given array>
 *
 * This function takes an array and its length as input and prints the values.
 *
 * @return void
 */
int find_median(unsigned char *array, int n);
/**
 * @brief <Find median>
 *
 * This function takes an array and its length as input and returns its median. 
 *
 * @return median
 */
int find_mean(unsigned char *array, int n);

/**
 * @brief <Find mean>
 *
 * This function takes an array and its length as input and returns its mean. 
 *
 * @return mean
 */
int find_maximum(unsigned char *array, int n);

/**
 * @brief <Find the maximum>
 *
 * This function takes an array and its length as input and the maximum value. 
 *
 * @return maximum value
 */
int find_minimum(unsigned char *array, int n);

/**
 * @brief <Find the minimum>
 *
 * This function takes an array and its length as input and returns the minimum value. 
 *
 * @return minimum value
 */
unsigned char sort_array(unsigned char *array, int n);

/**
 * @brief <Sorts a given array from the max value to the min value>
 *
 * This function takes an array and its length as input and sorts it from largest to smallest.
 *
 * @return pointer to the sorted array
 */

#endif /* __STATS_H__ */
