// Program to add two elements using pointer
#include<stdio.h>
void sum(int *x,int *y)
{
  int sum;
  sum=*x+*y;  
  printf("Sum of %d and %d is %d\n",*x,*y,sum);
}
void main()
{
  int num1,num2;

  printf("Enter value of num1: ");
  scanf("%d",&num1);
  printf("Enter value of num2: ");
  scanf("%d",&num2);

  sum(&num1,&num2);
}
