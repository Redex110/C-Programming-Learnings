/*
--------------------------------------------------
Program : Basic Calaculator
Purpose : To perform basic calculation like, Addition, Subtraction, Multiplication, and Division.

Author  : RedeX110
Date    : 26 March 2026

Input   : Number 1 : 12
	      Number 2 : 13
	      Operator : '+'
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
	int number1, number2, result;
	char operator;

	printf("------------------------------------\n");
	printf("Basic Calculator\n");
	printf("------------------------------------\n");
	printf("Enter the first number : ");
	scanf("%d", &number1);

	printf("Enter the second number : ");
	scanf("%d", &number2);

	printf("Select an operator (+, -, *, /): ");
	scanf(" %c", &operator);
	printf("------------------------------------\n");
	switch (operator)
	{

	case '+':
		printf("Result : %d\n", number1 + number2);
		break;
	case '-':
		printf("Result : %d\n", number1 - number2);
		break;
	case '*':
		printf("Result : %d\n", number1 * number2);
		break;
	case '/':
		if (number2 != 0)
		{
			printf("Result : %.2f\n", (float)number1 / number2);
			break;
		}
		else
		{
			printf("DIVIDE BY ZERO ERROR\n");
			break;
		}
	default:
		printf("Invalid Operator\n");
		break;
	}
	printf("------------------------------------\n");
	return 0;
}
