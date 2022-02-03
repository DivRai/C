#include<stdio.h>
void main()
{
  int n;
  printf("Enter number of elements in array: ");
  scanf("%d",&n);
  int arr[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("Sum is %d\n",sum);
}
