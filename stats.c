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
 * @file <stats.c> 
 * @brief <assignment 1 >
 *
 *
 * @author <shubham yadav>
 * @date <26/03/2020>
 *
 */



#include <stdio.h>
#include "stats.h"
/**************************FUNCTIONS**********************************************/
//PRINTS STATISTICS
void print_statistics(int min,int max,float mean,float median){
printf("\nminimum is: %d ",min);
printf("\nmaximum is: %d ",max);
printf("\nmean is: %.2f ",mean);
printf("\nmedian is: %.2f\n ",median);
}
//PRINTS GIVEN ARRAY
void print_array(int arr[],int n){
int i;
printf("given elements: ");
for(i=0;i<n;i++)
printf("%d  ",arr[i]);
}
//FINDS MINIMUM AND RETURNS TO MAIN FUNCTION
int find_min(int arr[],int n){
int min,i;
min=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<min)
{min=arr[i];
}
}
return (min);
}
//FINDS MAXIMUM AND RETURNS TO MAIN FUNCTION
int find_max(int arr[],int n){
int max,i;
max=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
{max=arr[i];
}
}
return (max);
}
//FINDS MEDIAN AND RETURNS TO MAIN FUNCTION
float find_median(int arr[],int n){
float i;
int j;
if(n%2==0)
{
j=n/2;
i=(arr[j]+arr[j-1])/2.0;
}
else{
j=(n/2)+1;
i=arr[n/2];
}
return (i);
}
//FINDS MEAN AND RETURNS TO MAIN FUNCTION
float find_mean(int arr[],int n){
int i;
float sum=0.0,mean;
for(i=0;i<n;i++)
sum=sum+arr[i];
mean=(sum/n)/1.0;
return (mean);
}
//SORTS THE GIVEN ARRAY FROM LARGEST TO SMALLEST
void sort_array(int arr[],int n){
int i,j,temp;
for(i=0;i<n-1;i++)
{for(j=0;j<n-1-i;j++)
{if(arr[j]<arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
/***************MAIN FUNCTION*********************************/
void main() {

int arr[50],n,i,min,max;
float median,mean;

printf("enter number of elements\n");
scanf("%d",&n);

printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

print_array(arr,n);
printf("\n");

min=find_min(arr,n);
max=find_max(arr,n);

sort_array(arr,n);
printf("sorted array is: ");
for(i=0;i<n;i++)
printf("%d  ",arr[i]);

median=find_median(arr,n);
mean=find_mean(arr,n);

print_statistics(min,max,mean,median);

}


