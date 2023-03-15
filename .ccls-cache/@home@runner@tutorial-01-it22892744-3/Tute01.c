/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  float avg = 0;
  printf ("Enter subject 1 marks :");
  scanf ("%d", &mark1);
  printf ("Enter subject 2 marks :");
  scanf ("%d", &mark2);
  avg = (mark1 + mark2) / 2;
  printf("Average of the two marks is %.2f", avg);
  
  return 0;
}

