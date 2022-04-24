#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	double arr[100] = { 0 };
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &arr[i]);
//		sum += arr[i];
//	}
//	double max = arr[0];
//	double min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char password1[100] = { 0 };
//	char password2[100] = { 0 };
//	scanf("%s %s", password1, password2);
//	if (strcmp(password1, password2) == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr=0;
//	int sum = 0;
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr);
//		}
//		if (arr > 0)
//		{
//			sum += arr;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//		{
//			count++;
//		}
//	}
//	printf("正数:%d\n", count);
//	printf("负数:%d\n", 10 - count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if (arr[i] < arr[i - 1])
//			{
//				flag2 = 1;
//			}
//		}
//		
//	}
//	
//	if (flag1 +flag2==1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				int k = 0;
//				for (k = j; k < n-1; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[200] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}

	i = 0;
	j = 0;
	int k = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)
	{
		for (; j < m; j++)
		{
			arr3[k] = arr2[j];
			k++;
		}
	}
	else
	{
		for (; i < n; i++)
		{
			arr3[k] = arr1[i];
			k++;
		}
	}

	for (i = 0; i<k ; i++)
	{
		printf("%d ", arr3[i]);
	}

	return 0;
}