//Matrix addition program
#include<stdio.h>
void main()
{
  int n;
  printf("Enter dimension: ");
  scanf("%d",&n);
  
  int a[n][n],b[n][n];
  printf("Enter matrix A:\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("Enter element %d%d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nEnter matrix B:\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("Enter element %d%d: ",i,j);
      scanf("%d",&b[i][j]);
    }
  }

  int sum[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%d   ",sum[i][j]);
    }
    printf("\n");
  }
}
