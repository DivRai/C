#include<stdio.h>
int e=50;
void fun3()
{
int a=10;
}

void fun2()
{
int b=20;
fun3();
}

void fun1()
{
int c=30;
fun2();
}

void main()
{
int d=40;
printf("Welcome\n");
fun1();
}
