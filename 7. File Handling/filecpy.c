#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char c;

	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","w");

	c=getc(fp1);
	while(c!=EOF)
	{
		putc(c,fp2);
		c=getc(fp1);
	}

	fclose(fp1);
	fclose(fp2);
}
