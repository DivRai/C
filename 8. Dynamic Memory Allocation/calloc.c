#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *fp,n;
	printf("How many numbers?\n");
	scanf("%d",&n);
	fp=(int *)calloc(n,sizeof(int));
	//fp=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&fp[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=fp[i];
	}
	printf("%d\n",sum);
	free(fp);
}
