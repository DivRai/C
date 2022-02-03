#include<stdio.h>
void main()
{
  float sp,p,cp;
  printf("Enter selling price of 15 items: ");
  scanf("%f",&sp);
  printf("Enter total profit: ");
  scanf("%f",&p);
  cp = (sp - p)/15;
  printf("Cost price of 1 item is: %f\n",cp);
}
