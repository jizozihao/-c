#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 50;
//	struct S arr[50];
//	return 0;
//}

//int main()
//{
//	//向内存申请10个整型的空间
//	//        强制类型转换
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//当动态申请的空间不再使用的时候
//	//将空间还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//  //malloc(10*sizeof(int));
//	//calloc 会初始化为0
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);//用来释放动态开辟的空间
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//
//	}
//	int* p2 = realloc(p, 40);
//	if (p2 != NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	////万一开辟地址失败，p是NULL
//	////对空指针进行解引用操作
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.动态开辟内存的越界访问
//	//int* p = malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	//             越界访问
//	//	for (i = 0; i < 15; i++)
//	//	{
//	//		*(p + i) = i;
//	//		
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.对非动态开辟内存的free
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;*/
//	return 0;
//}

//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int* p2 =  realloc(p, 80);
//		if (p2 != NULL)
//		{
//			p = p2;
//		}
//	}*/
//
//	int* p = realloc(NULL, 40);//等价于使用malloc开辟空间
//
//	return 0;
//}


#include <Windows.h>
//int main()
//{
//	//常见错误
//	//1.对NULL解引用操作
//	/*int* p = malloc(40);
//	*p = 10;*///malloc开辟失败，对空指针进行解引用
//	//需要对p进行相关判断
//
//
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(40);//10个整型
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	//越界
//	//	for (i = 0; i <= 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//
//	//3.非动态开辟内存的释放
//	//int a = 10;
//	//int* p = &a;//栈区开辟的空间
//	//free(p);
//
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*p++ = i;//将p改掉了
//	//	}
//	//}
//	////回收空间
//	//free(p);
//	//p = NULL;
//
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;//当p为空指针时，不对它进行释放
//	////......
//	//free(p);
//
//
//	//6.忘记释放动态开辟内存，造成内存泄漏
//	/*while (1)
//	{
//		malloc(1);
//	}*/
//
//
//	return 0;
//}


