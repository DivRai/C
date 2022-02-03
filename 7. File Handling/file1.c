#include<stdio.h>
void main()
{
	FILE *fp;
	char s[50];
	char c;
	fp=fopen("hello.txt","w");
	fprintf(fp,"Hello, How are you?\n");
	fclose(fp);
}
