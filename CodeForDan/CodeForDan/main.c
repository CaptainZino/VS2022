#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
#include <math.h>
#include <float.h>

//int main()
//{
//	//�ڴ�ּ�
//	//�Ĵ�������
//	register int a = 100;  //�Ĵ���������һ���ᱻ�ŵ��Ĵ�����
//	//printf("%p\n",&a);  //�Ĵ����������ܷ��ʵ�ַ
//	a = 200;
//	//printf("%p\n",&a);  //�Ĵ�������a���޸ĺ�д���ڴ棬��Ȼ���ܷ��ʵ�ַ
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
//	printf("%d\n", sizeof a);  //sizeof���Ǻ�������һ��������
//	//printf("%d\n", sizeof int);
//	return 0;
//}

//���ݰ��ֽ�Ϊ��λ����Ϊ��Ȩֵλ�͵�Ȩֵλ
//�ڴ��иߵ�ַ�͵͵�ַ֮��
//С�ˣ������ֽ�Ϊ��λ����Ȩֵλ���ݴ���ڵ͵�ַ��
//��ˣ������ֽ�Ϊ��λ����Ȩֵλ���ݴ���ڸߵ�ַ��

//int main()
//{
//	_Bool flag = true;  //c99��������_Bool���ͣ���Ϊ�˺�c++���ݣ�������stdbool.h���ú�д����bool
//	bool flag1 = false;  //bool����ռһ���ֽ�
//	printf("%d\n",sizeof(flag));
//	
//	BOOL x = TRUE;  //BOOLΪint������΢���ƶ��ı�׼��ֻ����΢��ı�������ʹ�ã����߱�����ֲ��
//	printf("%d\n", sizeof(x));  //4���ֽ�
//	
//	return 0;
//}

//int main()
//{
//	//double x = 3.14;
//	//printf("%.50f\n",x);  //���Ȼᷢ����ʧ
//
//	double a = 1.0;
//	double b = 0.1;
//	printf("%.50f\n",(a-0.9));
//	printf("%.50f\n", b);
//
//	//����������ʹ��==���бȽ�
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

//�����������Ƚ�
//int main()
//{
//	double x = 1.0;
//	double y = 0.1;
//	if (fabs((x - 0.9) - y) < DBL_EPSILON)  //�����������Ƚ�
//	{
//		printf("x-0.9==x\n");
//	}
//	else
//	{
//		printf("x-0.9!=x\n");
//	}
//}

//��������0�Ƚ�
//int main()
//{
//	double x = 0.00000000000000001;
//	//�ж�һ���������ǲ�����  //��Ӧȡ�Ⱥţ�ԭ���DBL_EPSILON�Ķ���
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