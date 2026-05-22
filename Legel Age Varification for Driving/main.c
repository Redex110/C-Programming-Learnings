
/*
--------------------------------------------------
Program : Legel Age Varification for Driving
Purpose : To varify if the user is at the legel age for driving or not.

Author  : RedeX110
Date    : 21 May 2026

Input   : User Name, User Age.
Output  : Result : Eligible to drive or not.
--------------------------------------------------
*/

#include <stdio.h>

void isEligibleToDrive(char name[], int age);

#include <stdio.h>
#include <string.h>

int main() {
  char name[50];
  int age;
  char age_str[10];

  printf("+-----------------------------------------+\n");
  printf("|            User Input Section           |\n");
  printf("+-----------------------------------------+\n");

  //For Name
  printf("|  Enter your first name : ");
  scanf("%49s", name);
  printf("\033[1A\033[27C%-14s |\n", name);

  //For Age
  printf("|  Enter your age        : ");
  scanf("%9s", age_str);

  printf("\033[1A\033[27C%-14s |\n", age_str);
  sscanf(age_str, "%d", &age);

  printf("+-----------------------------------------+\n");

  isEligibleToDrive(name, age);
  return 0;
}


void isEligibleToDrive(char name[], int age) {
  printf("+-----------------------------------------+\n");
  printf("|                 Result                  |\n");
  printf("+-----------------------------------------+\n");
  printf("|  %-14s: %-22s |\n", "Name", name);
  printf("|  %-14s: %-22d |\n", "Age", age);
  printf("|  %-14s: %-22s |\n", "Result", (age >= 18) ? "Eligible to Drive" : "Not Eligible");
  printf("+-----------------------------------------+\n");

}
