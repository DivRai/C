// Program to count odd and even elements of an array
#include<stdio.h>
void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);

  int a[n];
  printf("Enter elements of array:\n");
  for(int i=0;i<n;i++)
  {
    printf("Enter element %d: ",i);
    scanf("%d",&a[i]);
  }
  
  int odd=0,even=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]%2==0)
      even++;
    else
      odd++;
  }
  printf("\nEven elements: %d",even);
  printf("\nOdd elements: %d\n",odd);
}
