/*
--------------------------------------------------
Program : Legel Age Varification for Driving
Purpose : 

Author  : Gray Storm
Date    : 21 May 2026

Input   : 
Output  : 
--------------------------------------------------
*/

#include <stdio.h>
#include <stdbool.h>

bool isEligibleToDrive(int age) {
  if(age > 18)
    return true;
  else
    return false;
}

void finalResult(char name[], int age, bool result) {
  printf("+--------------------------------+\n");
  printf("| Name   : %-22s|\n", name);
  printf("| Age    : %-22d|\n", age);
  if(result == true)
  printf("| Result : Eligible to Drive     |\n");
  else
  printf("| Result : Not Eligible to Drive |\n");
  printf("+--------------------------------+\n");
}

int main(void)
{
  int age;
  bool result;
  char name[50];
  printf("Enter your first name :");
  scanf("%s", name);

  printf("Enter your age :");
  scanf("%d", &age);

  result = isEligibleToDrive(age);
  finalResult(name, age, result);
    return 0;
}
