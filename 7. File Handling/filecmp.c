// C program to compare two files
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void compareFiles(FILE *fp1, FILE *fp2)
{
	char ch1 = getc(fp1);
	char ch2 = getc(fp2);

	int error = 0, pos = 0, line = 1;

	while (ch1 != EOF && ch2 != EOF)
	{
		pos++;

		if (ch1 == '\n' && ch2 == '\n')
			line++;

		if (ch1 != ch2)
			error++;

		ch1 = getc(fp1);
		ch2 = getc(fp2);
	}

	if(error>0)
		printf("False\n");
	else
		printf("True\n");
}

void main()
{
	FILE *fp1 = fopen("file1.txt", "r");
	FILE *fp2 = fopen("file2.txt", "r");

	compareFiles(fp1, fp2);

	fclose(fp1);
	fclose(fp2);
}

