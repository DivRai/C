// Program to print value and address of variable using pointer
#include<stdio.h>
void main()
{
  int *p;
  int x=20;
  p=&x;
  printf("Address of variable is %p\n",p);
  printf("Value of variable is %d\n",*p);
}
