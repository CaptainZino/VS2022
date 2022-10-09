#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h >
#include <malloc.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//typedef struct
//{
//	char a;
//	int b;
//	char c;
//
//}str;
//typedef struct
//{
//	char i;
//	int j;
//	str st;
//	char k;
//	
//}str1;
//
////__attribute__((__packed__)) = #pragma pack(1)
////__attribute__ ((aligned(4))) = #pargam pack(4)
//
//#pragma pack(1)
//typedef union
//{
//	char m[5];
//	int n;
//	
//}uni;
//
//typedef struct
//{
//	char : 1;
//	int : 1;
//
//}str2;
//#pragma pack()
//
//int main()
//{
//	int i = 10;
//	//printf("%d\n",sizeof(str));
//	//printf("%d\n", sizeof(str1));
//	//printf("%d\n", sizeof(uni));
//	//assert(i>0);  //abort();  //断言
//	//printf("hello there\n");
//	printf("%d\n", sizeof(str2));
//
//	return 0;
//}

//计算结构体大小的易错点：\
1.确认是否对结构体对齐方式进行了设置\
2.若未设置对齐方式，结构体和联合体会存在内存对齐的情况\
3.结构体中包含有联合体，联合体所有成员变量共用一块地址空间\
4.机构体中含有指针变量，指针变量的大小为4/8字节，且其大小与指针变量类型无关\
5.结构体中含有数组


//指针:

//int main()
//{
//	一维数组
//	char arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = NULL;
//	p = arr;
//	数组名是首元素地址,两种情况除外：\
//	1.sizeof(arr);\
//	2.&arr;
//	printf("%d\n", sizeof(arr));
//	char(*p1)[10] = &arr;
//	printf("%p\n",p1);
//	printf("%p\n", p);
//
//	printf("%d\n",arr[4]);
//	printf("%d\n", 4[arr]);
//	printf("%c\n", 4["hello there"]);
//	printf("%d\n", *(p+4));
//	*(p+4) = arr[4] = p[4]
//	*(p+4)  = p[4]
//	*(p+i)  = p[i]
//	*(p+i) = *(i+p) = arr[i] = i[arr]
//
//
//	//printf("%p\n", (p + 4));
//	//printf("%p\n", ((int*)p + 1));
//	//printf("%d\n",*((char*)(((int*)p)+1)));
//
//
//	//二维数组
//	int arr[][5] = { {0,1,2,3,4} ,{5,6,7,8,9}, {10,11,12,13,14} };
//	//int arr1[][5] = { {0,1,2,3,4} ,{5,6,7,8,9}, {10,11,12,13,14},{0} };
//	int(*p1)[][5] = &arr;
//	int (*p2)[5] = arr;
//	int* p3 = arr[0];
//	int(*p4)[5] = &arr[0];
//	for (int i = 0; i < 3;i++) {
//	
//		for (int j = 0; j < 5;j++) {
//		
//			//printf("%d ", *(*(*p1 + i) + j));
//			//printf("%d ",*(*(p2+i)+j) );
//			//printf("%d ", *(p3+j+5*i));
//			//printf("%d ", *(*(p4 + i) + j));
//		}
//		printf("\n");
//	}
//
//	//int* p[5];
//	//int(*p)[5];
//	int(*p[10])[5];
//
//	return 0;
//}
//
//#pragma pack(1)  //
//typedef union
//{
//	char a[5];
//	int b;
//}unio;
//typedef struct
//{
//	int i;
//	unio u;
//	char* p;
//	int j;
//	char* p1;
//}str;
//#pragma pack()
//
//#pragma once
//
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n",sizeof(str));
//	char a = 10;
//	str st = { 0,{0},0,10,&a };
//	str* p = &st;
//	//printf("%d\n", *((*p).p1));
//	//printf("%d\n", *(p->p1));
//	//printf("%p\n",p->p1);
//	//printf("%d\n", p->j);
//	//printf("%d\n",sizeof(double));
//	char* ps = *((long long *)(((char*)p)+21));
//	//printf("%d\n",*ps);
//	printf("%d\n", *((char*)(*((long long*)(((char*)p) + 21)))));
//
//	float f = 5.5f;
//	float* pf = &f;
//	double pp = *(int*)pf + 3.14;
//
//	printf("%lf\n", pp);
//
//	
//
//}
//
//
//typedef struct
//{
//	char : 2;
//	char : 0;
//	char : 1;
//
//}str;
//
//typedef struct
//{
//	int a;
//	char arr [];
//
//}str1;
//
//int main()
//{
//	printf("%d\n",sizeof(str1));
//	str1* p = malloc(sizeof(str1)+sizeof(char)*100);
//	memcpy(p->arr, "hello there\n", sizeof("hello there\n"));
//	printf(p->arr);
//	return 0;
//}






//void Print();
//extern int g_val;
////int main()
////{
////	//Print();
////	printf("%d\n", g_val);
////	
////}
//
//
//
////static  volatile
//void Print()
//{
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//	
//		Print();
//	}
//	//printf("%d\n",i);
//	
//	return 0;
//}


//static\
1.修饰函数会修改其作用域，不会改变其生命周期，别的文件不能直接访问\
2.修饰全局变量会修改其作用域，不会改变其生命周期，别的文件不能直接访问\
3.修饰局部变量会修改其声明周期，不会改变作用域

//#pragma pack(1)
//typedef struct
//{
//	char a;
//	int b;
//	char c;
//
//}str;
//typedef struct
//{
//	char i;
//	int j;
//	str st;
//	int k;
//
//}str1;
//#pragma pack()

//#pragma pack()
//
//联合体

//#pragma pack(1)
//typedef union
//{
//	char a[5];
//	int b;
//
//}unio;
//#pragma pack()

//位字段

//typedef struct
//{
//	char i : 2;  //位字段
//	char  : 0;  //填充字段
//	char  : 3;  //无名字段
//
//}str2;

//typedef struct
//{
//	char : 6; 
//	int : 2;
//
//}str4;
//
//
//int main()
//{
//	printf("%d\n",sizeof(str3));
//	return 0;
//}

//
////柔性数组


//typedef struct
//{
//	char n;
//	char arr[0];
//
//}str1;

//int main()
//{
//	printf("%d\n",sizeof(str));
//	printf("%d\n", sizeof(str1));
//	//printf("%d\n", sizeof(unio));
//	//printf("%d\n", sizeof(str2));
//	//printf("%d\n", sizeof(str3));
//	/*str3* p = malloc(sizeof(str3)+sizeof(char)*100);
//	memcpy(p->arr,"hello there\n",sizeof("hello there\n"));*/
//	//str3* ps = 
//	//p = realloc(p, sizeof(str3) + sizeof(char) * 200);
//	//calloc();
//	//printf(p->arr);
//
//	return 0;
//}

//计算结构体大小：\
1.没有验证结构体是否设置对齐方式\
2.结构体里面有联合体、位字段、和柔性数组\
3.结构体里面有指针、


//__attribute__((__packed__)) = #pragma pack(1)
//__attribute__ ((aligned(4))) = #pargam pack(4)


//内存对齐规则：\




//有效的指针运算：
//a)	相同类型之间的赋值运算
//b)	指针同整数之间的加法或减法运算
//c)	指向相同数组中元素的两个指针间的减法或比较运算
//d)	将指针赋值为0或指针与0之间的比较运算
//非法运算：
//a)	两个指针间的加法、乘法、除法、移位或屏蔽运算
//b)	指针同float或double类型之间的减法运算
//c)	不经强制类型转换而直接将指向一种类型对象的指针赋值给指向另一种类型对象的指针的运算（两个指针之一是void* 的情况除外）


//int main()
//{
//	int arr[10];
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[10]);
//	printf("%d\n", &arr[10] - &arr[0]);
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = NULL;
//	p = arr;
//	//数组名是首元素地址，两种情况除外：1.&arr;2.sizeof(arr)
//	//char* p1 = &arr;
//	//printf("%p\n", p);
//	//printf("%p\n",p1);
//	char(*p1)[10] = NULL;
//	p1 = &arr;  //*p1 = arr;
//	//printf("%p\n", p1);
//
//
//	//for (int i = 0; i < 10; i++) {
//	//
//	//	//printf("%d ",arr[i]);
//	//	//printf("%d ", *(p+i));
//	//	//*(p+i) = arr[i] = p[i] = *(i+p) = i[arr]
//	//	printf("%d ", *(*p1 + i));
//	//}
//
//	//printf("%d\n",arr[4]);
//	//printf("%d\n", 4[arr]);
//
//	//printf("%d\n",arr[4]);
//	//printf("%d\n",*(p+4));
//	//printf("%d\n", *((char*)(((int*)p)+1)));
//	/*printf("%p\n", ((int*)p) + 1);
//	printf("%p\n", p + 4);*/
//	
//	//指针的类型决定了指针和整数进行加减时移动的字节数
//	//指针的类型决定了指针解引用时访问的字节数
//
//
//	
//}


//int main()
//{
//	char arr[][5] = { {0,1,2,3,4} ,{5,6,7,8,9} ,{10,11,12,13,14} };
//	char(*p)[5] = arr;
//	char (*p1)[][5] = &arr;
//	char (*p3)[5] = &arr[0];
//	char *p4 = arr[0];
//	for (int i = 0; i < 3; i++) {
//	
//		for (int j = 0; j < 5; j++) {
//		
//			//printf("%d ",*(*(p+i)+j));
//			//printf("%d ", *(*(*p1 + i) + j));
//			//printf("%d ", *(*(p3 + i) + j));
//			printf("%d ",*(p4+j+5*i));
//		}
//
//		printf("\n");
//	}
//
//}


//int(*p[10])[5]

//void(*p(int, void(*)(int)))(int);

//typedef void(*Pfun)(int);


//void Print(int i)
//{
//	printf("%d\n",i);
//
//}
//int main()
//{
//
//	void (*pf)() = Print;
//	pf(1);
//
//}

//#pragma pack(1)
//typedef union
//{
//	char a[5];
//	int b;
//}unio;
//typedef struct
//{
//	int i;
//	unio u;
//	char* p;
//	int j;
//	char* p1;
//}str;
//
//int main()
//{
//	int a = 10;
//	str st = { 0,{0},NULL,0,&a };
//	str* pst = &st;
//	printf("%d\n",*(pst->p1));
//	printf("%d\n", *((*pst).p1));
//	printf("%d\n",*((char*)*((long long*)(((char*)pst)+21))));
//
//	//指针的类型会决定数据以什么方式进行取出
//
//
//	/*unsigned int m = -10;
//	printf("%u",m);*/
//
//	float f = 5.5f;
//	float* pf = &f;
//	double pp = *(int*)pf + 3.14;
//	
//	printf("%lf\n", pp);
//}


//int main()
//{
//	static int i;
//	printf("%d\n",i);
//	return 0;
//}


//int main()
//{
//	char* test = malloc(-1);
//	if (test == NULL) {
//	
//		printf("%s\n",strerror(errno));
//	}
//	return 0;
//}


//int main()
//{
//	while (1) {
//	
//		printf("1\n");
//		//break;
//		exit(0);
//	}
//	printf("2\n");
//}


//int main()
//{
//	float f = 5.5f;
//	printf("%d\n", f);  //float类型会被先转化成double类型，根据浮点数的存储方式，可知flaot在转换成double类型时\
//	会在低位补32个零，而%d则刚好会打印低位的32位
//	printf("%lld\n", f);
//	float* pf = &f;
//	int a = *((int*)pf);
//	printf("%d\n",a);
//
//	return 0;
//}	

//0100 0000 1011 0000 0000 0000 0000 0000
//40  B0 00 00 

//void Print(int i)
//{
//	printf("%d\n",i);
//
//}
//int main()
//{
//
//	void (*pf)() = Print;
//	pf(1);
//
//}