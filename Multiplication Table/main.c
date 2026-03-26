
/*
--------------------------------------------------
Program : Multiplication Table
Purpose : Print the multiplication table(1 to 10).
Author  : RedeX110
Date    : 26.03.26

Input   : None
Output  : Print Multiplication Table (1 to 10)
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
    printf("-------------------------------------------\n");
    printf("           Multiplication Table\n");
    printf("-------------------------------------------\n");
    for(int i = 1; i <= 10; i++) //Outer Loop for columns
    {
        for(int j = 1; j <= 10; j++) //Inner Loop for rows
        {
           printf("%4d", i*j);
        }
        printf("\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}