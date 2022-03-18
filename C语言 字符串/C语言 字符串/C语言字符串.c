#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main(void)
//{
//	//int a = 1, b = 0;
//	//printf("%d\n", a && b);//0
//	//printf("%d\n", a || b);//1
//	//printf("%d\n", !a || b);//0
//	//printf("%d\n", b++ && a++);//0
//	//printf("%d\n", a);//1
//	//printf("%d\n", b);//1
//	//printf("%d\n", b++ && a++);//1
//	/*a = 1;
//	b = 0;
//	printf("%d\n", ++a || ++b);
//	printf("%d", b);*/
//
//	int a = 0;
//	scanf("%d", &a);
//	a % 2 ? printf("奇数\n") : printf("偶数\n");
//	printf(a % 2 ? "奇数" : "偶数");
//	printf("123");
//
//	return 0;
//}

//int main(void)
//{
//	short a = 117;
//	int i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (a >> i) % 2);
//	}
//	return 0;
//}



//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//	
//}
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	//strcpy(arr2, arr1);//只能进行字符串拷贝
//	//memcpy内存拷贝  什么都可以拷贝
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (dest <= src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main(void)
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 ,11,12,13,14,15,16,17,18,19,20};
//	//memmove 处理函数重叠的拷贝
//	//my_memcpy(arr + 2, arr, 20);
//	//C语言标准规定memcpy只要处理不重叠的拷贝就可以
//	//memmove处理重叠的拷贝
//	my_memmove(arr +7, arr , 20);
//	
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	//arr1大于arr2返回1，小于返回-1，等于返回0
//	printf("%d\n", ret);
//	return 0;
//}

//int main(void)
//{
//	//memset 内存设置
//	char arr[10] = "";
//	int i = 0;
//	memset(arr, '#', 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//
//}



//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建一个学生变量
//描述学生的属性  
//struct Stu
//{
//	char name[20];//名字
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//int main(void)
//{
//	//创建结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;
//
//
//	return 0;
//}



//声明一个结构体类型
//声明一个学生类型是想通过学生类型来创建学生变量
//描述学生的属性 
//struct Stu     
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age
//
//}s3,s4,s5;//全局变量
//
//struct Stu s6 ;//创建一个全局变量
//int main(void)
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//匿名结构体类型
//struct 
//{
//	int age;
//	char name[20];
//
//}x;
//匿名结构体指针类型
//struct
//{
//	int age;
//	char name[20];
//
//}*pa;
//int main(void)
//{
//	pa = &x;//编译器会将两个匿名结构体类型看为两个完全不同的类型
//	return 0;
//}

//数据结构：数据在内存中存储的结构
//结构体的自引用
//typedef struct Node
//{
//	double d;
//	int date;
//	//struct Node n;//不能自己包含自己
//	struct Node* next;//
//}Node;
//
//int main(void)
//{
//
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体变量的初始化

//struct T
//{
//	double weight;
//	short age;
//	
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main(void)
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//结构体内存对齐

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double c1;
//	char c2;
//	int a;
//};
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main(void)
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//
//	return 0;
//}


//修改默认对齐数

//#pragma pack(4)//设置默认对齐数为4
//#pragma pack()//取消设置的默认对齐数
//struct S
//{
//	char c1;
//	double d;
//};
//
//int main(void)
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//百度题，计算偏移量
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;

};
int main(void)
{
	//offsetof  宏，计算偏移量，不是函数
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));


	return 0;
}
