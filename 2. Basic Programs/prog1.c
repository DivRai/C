#include<stdio.h>
void main()
{
  int bs;
  float gs;
  printf("Enter basic salary: ");
  scanf("%d",&bs);
  gs = bs + (0.4*bs) + (0.2*bs);
  printf("Gross salary is: %f\n",gs);
}
