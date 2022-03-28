#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int hour = 0;
//	int min = 0;
//	int secd = 0;
//	scanf("%d",&a);
//	hour = a / 3600;
//	min = a / 60 % 60;
//	secd = a % 60;
//	printf("%d %d %d", hour, min, secd);
//	return 0;
//}

//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.2lf %.2lf", a + b + c, (a + b + c) / 3);
//	return 0;
//}

//int main()
//{
//	int n, m, h;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if (m % h != 0)
//		{
//			printf("%d\n", n - (m / h + 1));
//		}
//		else
//		{
//			printf("%d\n", n - m / h);
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr);
//		sum += arr;
//	}
//	printf("%.1lf", sum / 5.0);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	double price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	double cut = 1.0;
//	scanf("%lf %d %d %d", &price, &month, &day, &flag);
//
//	if (month == 11 && day == 11)
//	{
//		price *= 0.7;
//		if (flag == 1)
//		{
//			price -= 50;
//		}
//	}
//	else if (day == 12 && month == 12)
//	{
//		price *= 0.8;
//		if (flag == 1)
//		{
//			price -= 50;
//		}
//	}
//	if (price < 0.0)
//	{
//		printf("%.2lf\n", 0.0);
//	}
//	else
//	{
//		printf("%.2lf\n", price);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
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
//	for (i = n - 1; i >= n - 5; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char buf[100] = { 0 };
//	gets(buf);
//	int count_a = 0;
//	int count_b = 0;
//	int i = 0;
//	while (buf[i] != 0)
//	{
//		if (buf[i] == 'A')
//		{
//			count_a++;
//		}
//		if (buf[i] == 'B')
//		{
//			count_b++;
//		}
//		i++;
//
//	}
//	if (count_a > count_b)
//	{
//		printf("A\n");
//	}
//	else if (count_a < count_b)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int flag = 0;
//	while ((ch = getchar()) != EOF && ch != '0')
//	{
//		if (ch == 'A')
//		{
//			flag++;
//		}
//		if (ch == 'B')
//		{
//			flag--;
//		}
//	}
//		if (flag > 0)
//		{
//			printf("A\n");
//		}
//		else if (flag < 0)
//		{
//			printf("B\n");
//		}
//		else
//		{
//			printf("E\n");
//		}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//		if (a >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 0)
//		{
//			printf("Even");
//		}
//		else
//		{
//			printf("odd");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	
//	while (~scanf("%d %d %d", &n1, &n2, &n3))
//	{
//		int max = n1 > n2 ? n1 : n2;
//		max = max > n3 ? max : n3;
//		printf("%d\n", max);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	char vowel[] = "aeiouAEIOU";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == vowel[i])
//			{
//				printf("yes\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("no\n");
//		}
//		getchar();// ´¦Àí\n
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char ch = 0;
//	char vo[] = "aeiouAEIOU";
//	while (scanf(" %c",&ch) != EOF)
//	{
//		if (strchr(vo, ch))
//		{
//			printf("yes");
//		}
//		else
//		{
//			printf("no");
//		}
//		//getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) != EOF)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (~scanf(" %c", &ch))
//	{
//		if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//		else
//		{
//			printf("%c\n", ch - 32);
//		}
//	}
//	return 0;
//}
