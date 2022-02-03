//Largest element program
#include<stdio.h>
void main()
{
  int n;
  printf("Enter dimension: ");
  scanf("%d",&n);
  
  int a[n][n];
  printf("Enter matrix A:\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("Enter element %d%d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  int max=a[0][0];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i][j]>max)
        max=a[i][j];
    }
  }
  printf("Max element is %d\n",max);
}

