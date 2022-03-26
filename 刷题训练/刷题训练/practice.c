//#include <stdio.h>
//int main(void)
//{
//	printf("Practice makes perfect!");
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("v   v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf("the size of short is %d bytes.", sizeof(short));
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	printf("%#o %#X\n", 1234,1234);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d",a%10);
//		a /= 10;
//	}
//	/*while (a != 0)
//	{
//		printf("%d", a % 10);
//		a /= 10;
//	}*/
//	return 0;
//}

#include <stdio.h>
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF文件结束标志，通常放在文件末尾
//	{
//		/*putchar(ch + 32);
//		printf("\n");*/
//		printf("%c\n", ch + 32);
//		getchar();//读取\n
//	}
//	
//	return 0;
//}

//int main(void)
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}

//int main()
//{
//	printf("%#15d", 0xABCDEF);
//	return 0;
//}

//int main()
//{
//	printf("\n%d\n", printf("Hello World!"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float c_s = 0.0;
//	float m_s = 0.0;
//	float e_s = 0.0;
//
//	scanf("%d;%f,%f,%f", &id, &c_s, &m_s, &e_s);
//
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.", id, c_s, m_s, e_s);
//
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}


#include <ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%c",arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &mouth, &date);
//	printf("year=%4d\n", year);
//	printf("mouth=%02d\n", mouth);
//	printf("date=%02d\n", date);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	int ret = 0;
//	ret = a;
//	a = b;
//	b = ret;
//	printf("a=%d,b=%d", a, b);
//}

//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d", (-8 + 22) * a - 10 + c / 2);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}

//int main()
//{
//	int weight = 0;
//	double high = 0.0;
//	scanf("%d %lf", &weight, &high);
//	double bmi = 0.0;
//	bmi = weight / ((high / 100)*(high / 100));
//	printf("%.2lf", bmi);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	double p = (a + b + c) / 2;
//	double area = sqrt(p * (p - a)*(p - b)*(p - c));
//	printf("l=%.2f s=%.2lf", a + b + c, area);
//	return 0;
//}

//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	double pi = 3.1415926;
//	printf("%.3lf", 4 / 3.0 * pi * r * r * r);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", (a + b) % 100);
//	return 0;
//}

//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	printf("%d", ((int)a) % 10);
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long second = age * 3.156e7;
//	printf("%lld\n", second);
//
//	return 0;
//}

