/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
// function main begins program execution

int main() {

  int num, x, sum = 0; // variable declaration

  printf("Input the Number:"); // prompt to input
  scanf("%d", &num); // read from the user

  for(x=1; x<=num; ++x)
  {
    sum += x;
  } // end of for loop

  printf("Sum = %d" , sum);
  
  return 0;
} // end of function main

