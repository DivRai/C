// Matrix multiplication
#include<stdio.h>     
void main()
{  
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k; 
	printf("Enter the number of rows: ");    
	scanf("%d",&r);    
	printf("Enter the number of columns: ");    
	scanf("%d",&c);    
	printf("Enter matrix A:\n");    
	for(i=0;i<r;i++)    
	{    
	  for(j=0;j<c;j++)    
	  {
           printf("Enter element %d%d: ",i,j);    
	   scanf("%d",&a[i][j]);    
	  }    
	}
    
	printf("\nEnter second matrix B:\n");    
	for(i=0;i<r;i++)    
	{    
	  for(j=0;j<c;j++)    
	  { 
            printf("Enter element %d%d: ",i,j);   
	    scanf("%d",&b[i][j]);    
	  }    
	}    
    
	for(i=0;i<r;i++)    
	{    
	  for(j=0;j<c;j++)    
	  {    
	    mul[i][j]=0;    
	    for(k=0;k<c;k++)    
	    {    
	      mul[i][j]+=a[i][k]*b[k][j];    
	    }    
	  }    
	}
    
        printf("\n");
	for(i=0;i<r;i++)    
	{    
	  for(j=0;j<c;j++)    
	  {    
	    printf("%d\t",mul[i][j]);    
	  }    
	  printf("\n");    
	}      
}  
