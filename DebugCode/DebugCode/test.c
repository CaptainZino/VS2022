#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int* p = malloc(10);
//	//*p = 10;
//	int* parr = p;
//	//p++;
//	free(parr);
//	*p = 5;
//	//*p = 5;
//	/*printf("%d\n",*p);
//	free(p);*/
//	return 0;
//}

//int main()
//{
//	/*int* p = malloc(10);
//	printf("%d\n",*p);
//	int* parr = calloc(4, 10);
//	printf("%d\n", *parr);*/
//	//printf("%d\n");
//	int i = 0;
//	int j = 0;
//	char arr1[] = "abcdef";
//	char arr2[] = "123456789";
//	char temp;
//	printf(arr1);
//	printf("\n");
//	printf(arr2);
//	printf("\n");
//	for (i = 0, j = 0; sizeof(arr1)>sizeof(arr2)?arr2[j] != '\0':arr1[i] !='\0'; i++, j++)
//		temp = arr1[i], arr1[i] = arr2[j], arr2[j] = temp;  //逗号表达式
//	printf(arr1);
//	printf("\n");
//	printf(arr2);
//	printf("\n");
//	return 0;
//}

//#pragma pack(1)
//struct str
//{
//	char a[5];
//	int b;
//	char c;
//};
//#pragma pack()
//struct str1
//{
//	char a[5];
//	int b;
//	char c;
//};
//int main()
//{	
//	struct str stra;
//	struct str1 stra1;
//	printf("%d\n",sizeof(stra));
//	printf("%d\n", sizeof(stra1));
//	return 0;
//}


int main()
{
	char arr[][5] = { {1,2,3,4,5} ,{6,7,8,9,10}, {11,12,13,14} };
	char (*p1)[5] = arr;
	char* p2 = arr[0];
	char(*p3)[5] = &arr[0];
	printf("%p\n",p1);
	printf("%p\n", p2);
	printf("%p\n", p3);
	int i, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//printf("%d ",p1[i][j]);
			printf("%d ",*(* (p1 + i) + j) );
		}
		printf("\n");
	}
	printf("************************\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(p2+j+(5*i)));
		}
		printf("\n");
	}
	printf("************************\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *((*p3) + j + (5 * i)));
			printf("%d ", *(*(p3 + i) + j));
		}
		printf("\n");
	}
	return 0;
}

//void(*singal(char*, void(*)(char*)))(char*);
//void print(char*);  //回调函数
//
//int main()
//{
//	void (*p1)(char*) = print;
//	void (*p2)(char*) = NULL;
//	char arr[] = "hello there";
//	p2 = singal(arr,p1);
//	return 0;
//}
//void print(char* s)
//{
//	printf(s);
//}
//void(*singal(char* s, void(*p)(char*)))(char*)
//{
//	print(s);
//	return print;
//}

//struct

//struct point
//{
//	int x;
//	int y;
//};
//struct rect
//{
//	struct point pt1;
//	struct point pt2;
//	//struct rect a;  //非法
//};
//struct point makepoint(int x, int y)
//{
//	struct point temp;
//	temp.x = x;
//	temp.y = y;
//	return temp;
//}
//typedef struct rect* ptr;
//struct word
//{
//	int a : 1;
//	int : 31;  //无名字段
//	int : 0;
//	int : 1;
//
//};
//int main()
//{
//	struct rect screen;
//	screen.pt1 = makepoint(0,0);
//	screen.pt2 = makepoint(10, 10);
//	return 0;
//}

//int main()
//{
//	struct point a;
//	struct point * p = &a;
//	(*p).x = 0;
//	(*p).y = 0;
//	return 0;
//}

//int main()
//{
//	struct word a;
//	struct word* p = &a;  //字段不能&？
//	printf("%p\n",p);
//	printf("%d\n", sizeof(a));
//	return 0;
//}

