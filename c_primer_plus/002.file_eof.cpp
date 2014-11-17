#include <stdio.h>
#include <stdlib.h>  //使用exit()函数
int main()
{
	int ch;
	FILE *fp;
	char fname[50];

	printf("Enter the name of the file\n");
	scanf("%s",fname);
	fp = fopen(fname,"r");
	if (NULL == fp)
	{
		printf("Failed to open the file.\n");
		exit(1);
	}
	while ((ch=getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}
