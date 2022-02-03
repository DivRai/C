// Addition of two numbers
#include<stdio.h>

void add(int, int);

void main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  
  add(a,b);
}

void add(int x, int y)
{
  printf("Sum of %d and %d is %d\n",x,y,x+y);
}
