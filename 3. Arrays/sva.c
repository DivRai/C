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
  }
  int min=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  printf("Smallest value is %d\n",min);
  
  int max=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  printf("Largest value is %d\n",max);
}
