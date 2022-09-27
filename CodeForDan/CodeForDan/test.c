#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

static int a = 100;  //a只能在本文件内被访问，不能被跨文件直接访问
//int a = 200;

static void show()  //show只能在本文件内被访问，不能被跨文件直接访问
{
	printf("hello there\n");
	printf("%d\n",a);
}

//static修饰全局变量和函数会修改其所用域，生命周期不变
//static修饰局部变量会修改其生命周期，作用域不变
void show_test()
{
	show();
} 