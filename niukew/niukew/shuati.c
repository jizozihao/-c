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

//����ڵ�Ķ���
//struct Node
//{
//	int date;//������
//	struct Node* next;
//};

//int main()
//{
//	struct Node* tail = NULL;//ָ������β����ָ��
//	struct Node* list = NULL;//ָ�������ָ��
//	int n = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//����n�����֣���β�����뵽������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		struct Node* pn = malloc(sizeof(struct Node));
//		pn->date = m;
//		pn->next = NULL;
//
//		//�����һ��Ԫ��
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
//	//����Ҫɾ����Ԫ��
//	scanf("%d", &d);
//	//ɾ��������ָ����Ԫ��
//	struct Node* cur = list;
//	struct Node* prve = NULL;
//
//	while (cur)
//	{
//		if (cur->date == d)//�ҵ���Ҫɾ����Ԫ��
//		{
//			//ɾ��������ǵ�һ���ڵ�
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
//	//���
//	printf("%d\n", n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->date);
//		cur = cur->next;
//	}
//	//�ͷ�����
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