#include<stdio.h>

extern void add(int a, int b);
void multiplication(int a, int b);

void main()
{
  extern int p;
  int g=0;
  int x=2,y=3;
  printf("Value of p is %d\n",p);
  add(x,y);
  multiplication(x,y);
}

void multiplication(int a, int b)
{
  printf("Product is %d\n",a*b);
}
