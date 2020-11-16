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



}

unsigned char print_array(unsigned char* A, unsigned int B){ //function to print array
	
}


unsigned char find_mean(unsigned char* A, unsigned int B){// function to find mean
	
}

unsigned char find_minimum(unsigned char* A,unsigned int B){ //function to find minimum
    
}

unsigned char find_maximum(unsigned char* A,unsigned int B){ // function to find maximum
	
}


unsigned char sort_array(unsigned char *A,unsigned int B){// function to sort array
    
}

unsigned char find_median(unsigned char* A,unsigned int B){// function to find median
    
}


unsigned char print_statistics(unsigned char* A,unsigned int B){ // function to print statistics
    
}


/* Add other Implementation File Code Here */

