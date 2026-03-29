/*
--------------------------------------------------
Program : Straight Line Equation
Purpose : To display the straight line equation and calculate the slop and x-intercept and y-intercept according to the value given by user.

Author  : RedeX110
Date    : 27 March 2026


Input   : Three integers (a, b, c) representing coefficients of the line equation ax + by = c
Output  : Display the line equation, slope, x-intercept, and y-intercept in formatted output .
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    float x, y;

    printf("----------------------------\n");
    printf("Straight Line Equation\n");
    printf("----------------------------\n");
    printf("Enter the value for a : ");
    scanf("%d", &a);

    printf("Enter the value for b : ");
    scanf("%d", &b);

    printf("Enter the value for c : ");
    scanf("%d", &c);

    printf("----------------------------\n");
    printf("Equation of Line : %dx + %dy = %d\n", a, b, c);
    printf("Slop of Line : %.2f\n", -(float)a/b );
    printf("X-Intersept : %.2f\n", (float)c/a);
    printf("Y-Intersept : %.2f\n",(float)c/b );
    printf("----------------------------\n");

    return 0;
}
