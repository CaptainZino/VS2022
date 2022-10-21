#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
#include <math.h>
#include <float.h>

//int main()
//{
//	//内存分级
//	//寄存器变量
//	register int a = 100;  //寄存器变量不一定会被放到寄存器里
//	//printf("%p\n",&a);  //寄存器变量不能访问地址
//	a = 200;
//	//printf("%p\n",&a);  //寄存器变量a被修改后写回内存，仍然不能访问地址
//	system("pause");
//	return 0;
//}

//void print()
//{
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//
//int main()
//{
//	//printf("%d\n",a);
//	//show();
//	//show_test();
//	int i = 0;
//	for (i = 0; i < 10; i++) 
// {
//		print();
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	if (1 == i)
//  {
//		printf("i = 1\n");
//		goto error;
//	}
//	printf("i = 0\n");
//error:
//	printf("error\n");
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);  //sizeof不是函数而是一个操作符
//	//printf("%d\n", sizeof int);
//	return 0;
//}

//数据按字节为单位，分为高权值位和低权值位
//内存有高地址和低地址之分
//小端：按照字节为单位，低权值位数据存放在低地址处
//大端：按照字节为单位，低权值位数据存放在高地址处

//int main()
//{
//	_Bool flag = true;  //c99中引入了_Bool类型，但为了和c++兼容，所以在stdbool.h中用宏写成了bool
//	bool flag1 = false;  //bool类型占一个字节
//	printf("%d\n",sizeof(flag));
//	
//	BOOL x = TRUE;  //BOOL为int，是由微软制定的标准，只能在微软的编译器中使用，不具备可移植性
//	printf("%d\n", sizeof(x));  //4个字节
//	
//	return 0;
//}

//int main()
//{
//	//double x = 3.14;
//	//printf("%.50f\n",x);  //精度会发生损失
//
//	double a = 1.0;
//	double b = 0.1;
//	printf("%.50f\n",(a-0.9));
//	printf("%.50f\n", b);
//
//	//浮点数不能使用==进行比较
//	if ((a - 0.9) == b) 
// {
//	
//		printf("1");
//	}
//	else 
// {
//	
//		printf("2");
//	}
//	return 0;
//}

//两个浮点数比较
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	if (fabs((x - 0.9) - y) < DBL_EPSILON)  //两个浮点数比较
//	{
//		printf("x-0.9==x\n");
//	}
//	else
//	{
//		printf("x-0.9!=x\n");
//	}
//}

//浮点数和0比较
//int main()
//{
//	double x = 0.00000000000000001;
//	//判断一个浮点数是不是零  //不应取等号，原因见DBL_EPSILON的定义
//	if (fabs(x) < DBL_EPSILON)  //x == 0.0  // DBL_EPSILON:smallest such that 1.0+DBL_EPSILON != 1.0  //FLT_EPSILON
//	{
//		printf("x == 0.0");
//	}
//	else
//	{
//		printf("x != 0.0");
//	}
//}


//int main()
//{
//	printf("%d\n", 0);
//	printf("%d\n", '\0');
//	printf("%d\n", NULL);
//
//}