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

  int val,ind;
  printf("Enter value whose index you want to find: ");
  scanf("%d",&val);
  for(int i=0;i<n;i++)
  {
    if(arr[i]==val)
      ind=i;
    else
      goto l;
  }
  printf("Index is %d\n",ind);
  l: printf("Element not found\n");
}

