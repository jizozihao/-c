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
//	a % 2 ? printf("����\n") : printf("ż��\n");
//	printf(a % 2 ? "����" : "ż��");
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
//	//strcpy(arr2, arr1);//ֻ�ܽ����ַ�������
//	//memcpy�ڴ濽��  ʲô�����Կ���
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
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
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
//	//memmove �������ص��Ŀ���
//	//my_memcpy(arr + 2, arr, 20);
//	//C���Ա�׼�涨memcpyֻҪ�����ص��Ŀ����Ϳ���
//	//memmove�����ص��Ŀ���
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
//	//arr1����arr2����1��С�ڷ���-1�����ڷ���0
//	printf("%d\n", ret);
//	return 0;
//}

//int main(void)
//{
//	//memset �ڴ�����
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



//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������һ��ѧ������
//����ѧ��������  
//struct Stu
//{
//	char name[20];//����
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//int main(void)
//{
//	//�����ṹ�����
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;
//
//
//	return 0;
//}



//����һ���ṹ������
//����һ��ѧ����������ͨ��ѧ������������ѧ������
//����ѧ�������� 
//struct Stu     
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age
//
//}s3,s4,s5;//ȫ�ֱ���
//
//struct Stu s6 ;//����һ��ȫ�ֱ���
//int main(void)
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//�����ṹ������
//struct 
//{
//	int age;
//	char name[20];
//
//}x;
//�����ṹ��ָ������
//struct
//{
//	int age;
//	char name[20];
//
//}*pa;
//int main(void)
//{
//	pa = &x;//�������Ὣ���������ṹ�����Ϳ�Ϊ������ȫ��ͬ������
//	return 0;
//}

//���ݽṹ���������ڴ��д洢�Ľṹ
//�ṹ���������
//typedef struct Node
//{
//	double d;
//	int date;
//	//struct Node n;//�����Լ������Լ�
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

//�ṹ������ĳ�ʼ��

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

//�ṹ���ڴ����

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


//�޸�Ĭ�϶�����

//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
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


//�ٶ��⣬����ƫ����
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;

};
int main(void)
{
	//offsetof  �꣬����ƫ���������Ǻ���
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));


	return 0;
}
