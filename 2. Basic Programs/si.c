// Simple Interest Function
#include<stdio.h>
int si(int p, int r, int t)
{
  return p*r*t/100;
}

void main()
{
  int p,t;
  float r,i;
  printf("Enter p,r,t: ");
  scanf("%d %f %d",&p,&r,&t);
  i = si(p,r,t);
  printf("%0.2f\n",i);
}
