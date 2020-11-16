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
 * @brief Assignment - 1
 *
 * Report analytics on the maximum, minimum, mean, and median of the data set.
 * In addition, you will need to reorder this data set from large to small.
 * All statistics should be rounded down to the nearest integer.
 *
 * @author Anjana Anil
 * @date 16/11/20
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


	print_array(test,SIZE); // prints array
	
	print_statistics(test,SIZE); // prints all statistical information. Calls the function to find median mean minimum and maximum values
	printf("\nThe sorted array: \n");
	print_array(test,SIZE);//array already sorted in median function



}

unsigned char print_array(unsigned char* A, unsigned int B){ //function to print array
	int i;
	printf("The array : \n");
	for(i=0;i<B;i++){
		printf("%d\t",A[i]);
	}
	return 0;
	
}


unsigned char find_mean(unsigned char* A, unsigned int B){// function to find mean
	int i,sum=0;
	for(i=0;i<B;i++){
		sum +=A[i];
	}
	printf("%d\n",sum/B);
	return 0;
	
}

unsigned char find_minimum(unsigned char* A,unsigned int B){ //function to find minimum
    	int i;
	int j = 2^8;
	for(i=0;i<B;i++){
		if(A[i]<j){
			j= A[i];
		}
	}
	printf("%d\n",j);
	return 0;
    
}

unsigned char find_maximum(unsigned char* A,unsigned int B){ // function to find maximum
	int i,j = 2^(-8);
	for(i=0;i<B;i++){
		if(A[i]>j){
			j= A[i];
		}
	}
	printf("%d\n",j);
	return 0;
}


unsigned char sort_array(unsigned char *A,unsigned int B){// function to sort array using bubble sort
    int i,j;
    char temp;
	for(i=0;i<B;i++){
		for(j = 0; j< B-i-1;j++){
			if(A[j+1]>A[j]){
                temp = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;}
        	}
	}
	return 0;
}

unsigned char find_median(unsigned char* A,unsigned int B){// function to find median
	sort_array(A,B);
	if(B%2==0){
        B=B/2;

        }
	else{
        B =(B+1)/2;

        }
    	printf("%d\n",A[B]);
	return 0;
    
}


unsigned char print_statistics(unsigned char* A,unsigned int B){ // function to print statistics
	printf("\nThe statistics shows that..\n");
     	printf("The median is : ");
	find_median(A, B);
	printf("The mean is : ");
	find_mean(A, B);
	printf("The maximum value is : ");
	find_maximum(A, B);
	printf("The minimum value is : ");
	find_minimum(A, B);
	return 0;    
}


/* Add other Implementation File Code Here */

