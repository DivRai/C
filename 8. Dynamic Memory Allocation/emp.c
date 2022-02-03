#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *fp,n,m;
	printf("How many number of emplyees?\n");
	scanf("%d",&n);
	fp=(int *)calloc(n,sizeof(int));
	//fp=(int *)malloc(n*sizeof(int));
	printf("Enter the age of employees\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&fp[i]);
	}
	printf("Employee Database\n");
	for(int i=0;i<n;i++)
	{
		printf("Employee %d : ",i+1);
		printf("%d\n",fp[i]);
	}
	printf("How many employees you need to add more?\n");
	scanf("%d",&m);
	if(m>0)
	{
		fp=(int *)realloc(fp,sizeof(int)*(n+m));
		printf("Enter more employees age\n");
		for(int i=n;i<n+m;i++)
			scanf("%d",fp+i);
	}
	printf("Employee Database\n");
	for(int i=0;i<n+m;i++)
	{
		printf("Employee %d : ",i+1);
		printf("%d\n",fp[i]);
	}
	free(fp);
}
