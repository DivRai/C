// Swap two numbers using function
#include<stdio.h>

void swap(int x, int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("Number 1 is %d and Number 2 is %d\n",x,y);
}

void main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  printf("Number 1 is %d and Number 2 is %d\n",a,b);
  printf("After swapping\n");
  swap(a,b);
}
