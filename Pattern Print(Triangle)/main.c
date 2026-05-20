/*
--------------------------------------------------
Program : Pattern Print(Triangle)
Purpose : To draw a triangle using ASCII characters.

Author  : Gray Storm
Date    : 05 April 2026

Input   : NA
Output  : A triangle made of ASCII Characters.
--------------------------------------------------
*/

#include <stdio.h>

//Function Prototype for printTriangle()
void printTriangle();


int main(void)
{
    //Function Call for printing Triangle
    printTriangle();
    return 0;
}

//Function for Drawing Triangle
void printTriangle() {
    for(int i = 1; i < 5; i++) {
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
