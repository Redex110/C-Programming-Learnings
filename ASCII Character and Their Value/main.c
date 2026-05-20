/*
--------------------------------------------------
Program : ASCII Character and Their Value
Purpose : To print the ascii value and their coresponding ascii characters.

Author  : RedeX110
Date    : 20 May 2026

Input   : NA
Output  : A table of ASCII Value and their corresponding ASCII character.
--------------------------------------------------
*/

#include <stdio.h>

int main(void)
{
  //Heading Section
  printf("+-------------------------------------------------+\n");
  printf("|     ASCII Values     :     ASCII Characters     |\n");
  printf("+-------------------------------------------------+\n");


  //Loop for ASCII Value and ASCII Character
  for(int i = 33; i < 123; i++) {
     printf("|           %3d         :            %c            |\n", i, i);
     printf("+-------------------------------------------------+\n");
  }
    return 0;
}
