#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)   //windows平台以ctrl+z结束
		putchar(ch);
	return 0;
}
