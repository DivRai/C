// Program to print the array in reverse order
#include<stdio.h>
void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter array A:\n");
  for(int i=0;i<n;i++)
  {
     printf("Enter element %d: ",i);
     scanf("%d",&a[i]);
  }

  printf("\nOriginal Array:\n");
  for(int i=0;i<n;i++)
  {
     printf("%d ",a[i]);
  }
  printf("\n");

  printf("\nArray in reverse order:\n");
  for(int i=n-1;i>=0;i--)
  {
     printf("%d ",a[i]);
  }
  printf("\n");
}
