/*
--------------------------------------------------
Program : Student Managment System
Purpose : To create a simple Student Managment System that keep recored of student and their releted information.

Author  : Gray Storm
Date    : 31 May 2026

Input   : Student's ID, Name, Age, Course, Score(In Percentage)
Output  : Student's ID, Name, Age, Course, Grade.
*/


#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char name[50];
  int age;
  char course[50];
  float score;
} student;

char gradeCalculator(float score);

int main(void)
{
  student student1;

  //Student Information Input Section

  printf("-----------------------------------------\n");

  //Student ID
  printf("Enter the Student ID: ");
  scanf("%d", &student1.id);

  //Used for solving the error with fgets()
  getchar();

  //Studnent Name
  printf("Enter the student name:");
  fgets( student1.name, sizeof(student1.name), stdin);

  student1.name[strcspn(student1.name, "\n")] = '\0';

  //Student Age
  printf("Enter the age : ");
  scanf(" %d", &student1.age);

  //Used for solving the error with fgets()
  getchar();

  //Student Course
  printf("Enter the course name : ");
  fgets(student1.course, sizeof(student1.course), stdin);

  student1.course[strcspn(student1.course, "\n")] = '\0';

  //Student Score (Percentage)
  printf("Enter the Score(Percentage): ");
  scanf("%f", &student1.score);

  printf("-----------------------------------------\n");

  printf("\n\n");

  /* Studnet Information Output Section */

  printf("-----------------------------------------\n"); 

  //Studnet ID
  printf("Student ID    : %d\n", student1.id);

  //Studnet Name
  printf("Stundent Name : %s\n", student1.name);

  //Student Age
  printf("Age           : %d\n", student1.age);

  //Studnet Course
  printf("Course        : %s\n", student1.course);

  //Studnet Grade
  printf("Grade         : %c \n", gradeCalculator(student1.score));


  printf("-----------------------------------------\n");

  return 0;
}

char gradeCalculator(float score) {
  if(score > 90)
     return 'O';
  else if(score > 85)
     return 'A';
  else if(score > 80)
     return 'B';
  else if(score > 75)
     return 'C';
  else if(score > 70)
     return 'D';
  else if(score > 65)
     return 'E';
  else
     return 'F';
}

