// Program to count number of positive, negative and zero elements from a 3x3 matrix
#include<stdio.h>
void main()
{
  int a[3][3];
  printf("Enter matrix A:\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter element %d%d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }

  int p=0,n=0,z=0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(a[i][j]==0)
        z++;
      else
      {
        if(a[i][j]>0)
          p++;
        else
          n++;
      }
    }
  }
  printf("Positive elements: %d\n",p);
  printf("Negative elements: %d\n",n);
  printf("Zero elements: %d\n",z);
}
  
