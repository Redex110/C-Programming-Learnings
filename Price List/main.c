/*
--------------------------------------------------
Program : Price List
Purpose : Show price list of Rice and Suger.

Author  : Gray Storm
Date    : 03 May 2026

Input   : NA
Output  : Price List for Rice and Suger.
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
	float price_rice = 13.50, price_suger = 45.30;

	printf("---- Price of Items ----\n");
	printf(" Item             Price\n");
	printf(" Rice             %.2f\n", price_rice);
	printf(" Suger            %.2f\n", price_suger);
	printf("------------------------\n");

	return 0;
}
