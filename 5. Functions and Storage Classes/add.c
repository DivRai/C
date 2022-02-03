// Add first n numbers
#include<stdio.h>

int add(int a[], int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}

void main()
{
  int n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  int n1,sum;
  printf("How many numbers do you want to add: ");
  scanf("%d",&n1);
  sum=add(a,n1);
  printf("Sum of first %d numbers is %d\n",n1,sum);
}
