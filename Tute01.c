/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//function main begins program execution

int main() {

  float mark1, mark2, sum, average; // variable declaration

  sum = 0;
  average = 0;

  printf("Enter Mark 1 :"); // prompt to input
  scanf("%f" , &mark1); // read the mark1 from the user

  printf("Enter Mark 2 :"); // prompt to input
  scanf("%f" , &mark2); // read mark2 from the user

  sum = mark1 + mark2;

  average = sum / 2.0;
  printf("\nAverage of the Two Marks is : %.2f" , average); // display the average mark
  
  return 0;
} // end of function main

