#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	double hi = 0;
//	double sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &hi);
//		sum += hi;
//	}
//	printf("%.2lf\n", sum / 5.0);
//	return 0;
//}

//int main()
//{
//	int s = 0;
//	while (~scanf("%d", &s))
//	{
//		switch (s)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("S E\n");
//			break;
//		case 502:
//			printf("Bad\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0, min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//	}
//	printf("sum = %.2lf\n", (sum-max-min)/5.0);
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[51] = { 0 };
//	int m = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	if (i == -1)
//	{
//		arr[0] = m;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int arr[101];
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		int j = 0;
//		for (j = 2; j <= n; j++)
//		{
//			int k = 0;
//			for (k = j + 1; k <= n; k++)
//			{
//				if (arr[k] % j == 0)
//				{
//					arr[k] = 0;
//				
//				}
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 2; j <= i - 1; j++)
//			{
//				if (i % j == 0)
//				{
//					count++;
//					break;
//				}
//			}
//			if (j == i)
//			{
//				printf("%d ", i);
//			}
//		}
//		printf("\n%d\n", count);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	double count = 0.0;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2lf\n", 100 * count / (m * n));
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char name[100] = { 0 };
//	char password[100] = { 0 };
//	while (~scanf("%s %s", name, password))
//	{
//		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//		{
//			printf("yes");
//		}
//		else
//		{
//			printf("no");
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 2019; i++)
//	{
//		int m = i;
//		while (m)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			m /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 1)
	{
		printf("odd=%d\n", n / 2 + 1);
		printf("oushu=%d\n", n / 2);
	}
	else
	{
		printf("%d\n", n / 2);
		printf("%d\n", n / 2);
	}
	
	return 0;
}