/*
--------------------------------------------------
Program : Positive & Nagitive Number Counter
Purpose : This program count the number of positive, nagitive and zeros number.

Author  : Gray Storm
Date    : 03 May 2026

Input   : 10 Number e.g. {1, 2, -2, 3, 2, 0, 7, -7, 9, 0}
Output  : Number of Positive Numbers : 6
	  Number of Nagitive Numbers : 2
	  Number of Zeros            : 2
--------------------------------------------------
*/

#include <stdio.h>

#define SIZE 10

int main(void)
{
	//The variable delcaration
	int number[SIZE], i, positive_number = 0, nagitive_number = 0, zero_numbers = 0;

	//The Input Loop
	for(i = 0;i < SIZE; i++)
	{

		printf("Enter number[%d] : ", i);
		scanf("%d", &number[i]);
	}

	//The Counter Loop
	for(i = 0; i < SIZE; i++)
	{
		if(number[i] < 0)
		{
			nagitive_number++;
		}
		else if(number[i] > 0)
		{
			positive_number++;
		}
		else
		{
			zero_numbers++;
		}
	}

	//Output
	printf("-----------------------------------------------------\n");
	printf(" Number of Positive Number : %d\n", positive_number);
	printf(" Number of Nagitive Number : %d\n", nagitive_number);
	printf(" Number of Zeros           : %d\n", zero_numbers);
	printf("----------------------------------------------------\n");

	return 0;
}
