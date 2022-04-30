#include <stdio.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");");
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n/2; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			int k = 0;
//			for (k = i;k < n - 1; k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[1001] = { 0 };
//
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//链表节点的定义
//struct Node
//{
//	int date;//数据域
//	struct Node* next;
//};

//int main()
//{
//	struct Node* tail = NULL;//指向链表尾部的指针
//	struct Node* list = NULL;//指向链表的指针
//	int n = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//接受n个数字，并尾部插入到链表中
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		struct Node* pn = malloc(sizeof(struct Node));
//		pn->date = m;
//		pn->next = NULL;
//
//		//插入第一个元素
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//接受要删除的元素
//	scanf("%d", &d);
//	//删除链表中指定的元素
//	struct Node* cur = list;
//	struct Node* prve = NULL;
//
//	while (cur)
//	{
//		if (cur->date == d)//找到了要删除的元素
//		{
//			//删除的如果是第一个节点
//			struct Node* pd = cur;
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prve->next = cur->next;
//				cur = prve->next;
//			}
//			free(pd);
//			n--;
//		}
//		else
//		{
//			prve = cur;
//			cur = cur->next;
//
//		}
//	}
//	//输出
//	printf("%d\n", n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->date);
//		cur = cur->next;
//	}
//	//释放链表
//	cur = list;
//	struct Node* del = NULL;
//	while (cur)
//	{
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//	list = NULL;
//	return 0;
//}