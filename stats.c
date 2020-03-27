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
 * @file stats.c 
 * @brief file for assignment 1
 *
 * This is file for first assignment
 *
 * @author shubham yadav
 * @date 27/03/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

int mean,length,median,max,min;  
length=SIZE;
printf("The given array is : ");
print_array(test, SIZE);
*test = sort_array(test,SIZE);
printf("sorted array is: ");
print_array(test,SIZE);
median=find_median(test,SIZE);
mean=find_mean(test,SIZE);
max=find_maximum(test,SIZE);
min=find_minimum(test,SIZE);
print_statistics(median,min,max,mean);
}

void print_statistics(int median,int min,int max,int mean){
printf("min: %d\n", min);
printf("max: %d\n", max);
printf("median: %d\n",median);
printf("mean: %d\n",mean);
}

void print_array(unsigned char *array, int n){
for(int i = 0; i < n; i++)
printf("%d  ", *(array + i));
printf("\n");
}

int find_median(unsigned char *array, int n){
*array = sort_array(array, n);
int median;
if(n % 2 == 0){
median = (*(array + n/2 - 1) + *(array + n/2))/2;
}
else{
median = *(array + n/2);
}
return median;
}

int find_mean(unsigned char *array, int n){
int sum = 0,j;
for(int i = 0; i < n; i++){
sum = sum + (int)*(array + i);
}
j=sum/n;
return j;
}

int find_maximum(unsigned char *array, int n){
int max = *(array + 0);
for(int i = 1; i < n; i++){
if(*(array + i) > max){
max = *(array + i);
}
}
return max;
}

int find_minimum(unsigned char *array, int n){
int min = *(array + 0);
for(int i = 1; i < n; i++){    
if(*(array + i) < min){
min = *(array + i);
}
}
return min;
}

unsigned char sort_array(unsigned char *array, int n){
unsigned char x;
for(int i = 0; i < n; i++){
for(int j = i + 1; j < n; j++){
if(*(array + j) > *(array + i)){
x = *(array + i);
*(array + i) = *(array + j);
*(array + j) = x; 
}
}
}
return *array;
}
