#include <stdio.h>
#include <stdlib.h>

int a;    //全局变量区别声明与定义
int a;
int a;

void fun(){}
void fun();
void fun();
int main()
{
	int num;     //局部变量不区分声明与定义
	int a;

	system("pause");
	return 0;

}
