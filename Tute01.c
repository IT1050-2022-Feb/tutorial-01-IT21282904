/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark,count;
  float avarage=0;
  for(count=0;count<2;count++)
    {
      printf("enter mark%d",count+1);
      scanf("%d",&mark);

      avarage=(avarage*count+mark)/(count+1);
    }
  printf("avarage is %.2f",avarage);
  
  return 0;
}

