// Program to copy array elements to another array
#include<stdio.h>
void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  
  int a[n],b[n];
  printf("Enter array A:\n");
  for(int i=0;i<n;i++)
  {
     printf("Enter element %d: ",i);
     scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++)
  {
     b[i]=a[i];
  }

  printf("\nArray A is:\n");
  for(int i=0;i<n;i++)
  {
     printf("%d ",a[i]);
  }
  printf("\n");

  printf("\nArray B is:\n");
  for(int i=0;i<n;i++)
  {
     printf("%d ",b[i]);
  }
  printf("\n");
}
