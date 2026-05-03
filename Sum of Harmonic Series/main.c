/*
--------------------------------------------------
Program : Sum of Harmonic Series
Purpose : Calculate the sum of the harmonic series that is given below, for the value of n.
	  Harmonic Series : 1 + 1/2 + 1/3 +......+ 1/n

Author  : Gray Storm
Date    : 03 May 2026

Input   : Value for n
Output  : Sum of harmonic series for value .
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
	float n, sum_of_series = 0;

	printf("---------------------------------\n");
	printf("Sum of Series\n");
	printf("---------------------------------\n");

	printf("Enter the value for N(1-99): ");
	scanf("%f", &n);

	printf("---------------------------------\n");

	while(n > 0)
	{
		sum_of_series += 1/n;
		printf("1 / %2d : %.3f\n", (int)n, 1/n);
		n--;
	}

	printf("---------------------------------\n");
	printf("Final Sum of Series : %.3f\n", sum_of_series);
	printf("---------------------------------\n");

	return 0;
}
