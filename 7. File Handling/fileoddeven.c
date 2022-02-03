// Write odd numbers from a file to odd.txt and even numbers from file to even.txt
#include<stdio.h>
void main()
{
	FILE *f1,*f2,*f3;
	char co=',';
	char ch;

	int i=0,e;

	f1=fopen("data.txt","r");
	f2=fopen("odd.txt","w");
	f3=fopen("even.txt","w");

	ch=getc(f1);

	do
	{
		if(ch==co)
		{
			if(i%2==0)
			{
				fprintf(f3,"%d ",i);
				i=0;
			}
			else if(i%2==1)
			{
				fprintf(f2,"%d ",i);
				i=0;
			}
		}
		else
			i=i*10+((int)(ch)-48);
	ch=getc(f1);
	}while(ch!=EOF);
		
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
