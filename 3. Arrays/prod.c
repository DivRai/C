#include<stdio.h>
void main()
{
  int p,q,i;
  float prod[5]={29.5, 45.0, 49.0, 95.5, 68.5};
  float amount=0;

  for(i=0;i<3;i++)
  {
    printf("Enter product number: ");
    scanf ("%d",&p);
    printf("Enter product quantity: ");
    scanf ("%d",&q);
    amount+=prod[p-1]*q;
  }
 
  printf("Amount to be paid: %0.2f\n",amount);
}
