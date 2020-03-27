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
 * @file <stats.h> 
 * @brief <file for assignment 1>
 *
 * @author <Shubham Yadav>
 * @date <27th march 2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(int min,int max,float mean,float median)

/* @brief function to print the calculated statistics
 * 
 * this function takes in mininimum maximum mean and median of the inputted array
 *
 * @return void
 */

void print_array(int arr[],int n)

/* @brief function to print the given array
 * 
 * this function takes in the given array and number of elements and prints it
 *
 * @return void
 */

int find_min(int arr[],int n)

/* @brief function to find the minimum
 * 
 * this function takes in the given array and number of elements and traverses through the array to find the minimum amoung the elements 
 *
 * @return integer min
 */

int find_max(int arr[],int n)

/* @brief function to find the maximum
 * 
 * this function takes in the given array and number of elements and traverses through the array to find the miximum amoung the elements 
 *
 * @return integer max
 */

float find_median(int arr[],int n)

/* @brief function to find the median
 * 
 * this function takes in the SORTED array and number of elements and finds the middle element by diving the number of elements by 2
 *
 * @return float median
 */

float find_mean(int arr[],int n)

/* @brief function to find the mean
 * 
 * this function takes in the given array and number of elements and first finds the sum of all the elements and then divides by the total number of terms to get the mean
 *
 * @return float mean
 */

void sort_array(int arr[],int n)

/* @brief function to sort the given array
 * 
 * this function takes in the given array and number of elements and sorts the given array from largest to smallest by getting the largest numbers to the initial positions
 *
 * @return void
 */
#endif /* __STATS_H__ */
