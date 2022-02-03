#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *fp,n,m,sum=0;
	printf("How many numbers?\n");
	scanf("%d",&n);
	fp=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",fp+i);
	}
	printf("How many numbers you need to add more?\n");
	scanf("%d",&m);
	if(m>0)
	{
		fp=(int *)realloc(fp,sizeof(int)*(n+m));
		printf("Enter more numbers\n");
		for(int i=n;i<n+m;i++)
			scanf("%d",fp+i);
	}
	for(int i=0;i<n+m;i++)
		sum+=*(fp+i);
	printf("Sum is %d\n",sum);
	free(fp);
}
