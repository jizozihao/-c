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
//	//���ڴ�����10�����͵Ŀռ�
//	//        ǿ������ת��
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//���ռ仹������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//  //malloc(10*sizeof(int));
//	//calloc ���ʼ��Ϊ0
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
//	//�ͷſռ�
//	free(p);//�����ͷŶ�̬���ٵĿռ�
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	////��һ���ٵ�ַʧ�ܣ�p��NULL
//	////�Կ�ָ����н����ò���
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.��̬�����ڴ��Խ�����
//	//int* p = malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	//             Խ�����
//	//	for (i = 0; i < 15; i++)
//	//	{
//	//		*(p + i) = i;
//	//		
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.�ԷǶ�̬�����ڴ��free
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
//	int* p = realloc(NULL, 40);//�ȼ���ʹ��malloc���ٿռ�
//
//	return 0;
//}


#include <Windows.h>
//int main()
//{
//	//��������
//	//1.��NULL�����ò���
//	/*int* p = malloc(40);
//	*p = 10;*///malloc����ʧ�ܣ��Կ�ָ����н�����
//	//��Ҫ��p��������ж�
//
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(40);//10������
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	//Խ��
//	//	for (i = 0; i <= 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//
//	//3.�Ƕ�̬�����ڴ���ͷ�
//	//int a = 10;
//	//int* p = &a;//ջ�����ٵĿռ�
//	//free(p);
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	//		*p++ = i;//��p�ĵ���
//	//	}
//	//}
//	////���տռ�
//	//free(p);
//	//p = NULL;
//
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;//��pΪ��ָ��ʱ�������������ͷ�
//	////......
//	//free(p);
//
//
//	//6.�����ͷŶ�̬�����ڴ棬����ڴ�й©
//	/*while (1)
//	{
//		malloc(1);
//	}*/
//
//
//	return 0;
//}


//��������

//struct S
//{
//	int n;
//	//����Ĵ�С�ɱ�
//	int arr[0];//���������ڽṹ���������������δ֪��С
//};
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	struct S* ps = malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{	
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	char c;
//	int arr[0];//��ʾһ���������飬ֻ�ܷ��ڽṹ��ĩβ
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	printf("\n");
//	//����arr�ռ�
//	struct S* ptr = realloc(p, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}





struct S
{
	int n;
	int* arr;
};


int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	printf("\n");
	//��չ
	int* ptr = realloc(p->arr, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p->arr = ptr;
	}
	
	for (i = 10; i < 20; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;







	return 0;
}


