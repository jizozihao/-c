#include <stdio.h>
#include <math.h>
//int count(int left, int right)
//{
//	int i = 0,j=0,k=0,a = 0,b=0;
//	
//	int arr[32] = {0};
//	for (i = left; i <= right; i++)
//	{
//		int count1 = 0;
//		b = i;
//		for (j = 0; b>0; j++)
//		{
//			
//			int ret = b % 2; 
//			if (ret == 1)
//			{
//				count1++;
//			}
//			b /= 2;
//		}
//		arr[k] = count1;
//		k++;
//	}
//	for (i = 0; arr[i]; i++)
//	{
//		for (j = 2; j < arr[i]; j++)
//		{
//			if (arr[i] % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == arr[i])
//		{
//			a++;
//		}
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int left=0, right=0;
//	scanf("%d %d", &left, &right);
//	count(left, right);
//	//printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		if (a > 0)
//		{
//			printf("%d\n",1);
//		}
//		else if (a == 0)
//		{
//			printf("%.1lf\n",0.5);
//		}
//		else
//		{
//			printf("%d\n",0);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b&&b == c)
//			{
//				printf("µÈ±ß");
//			}
//			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
//			{
//				printf("µÈÑü");
//			}
//			else
//			{
//				printf("ÆÕÍ¨");
//			}
//		}
//		else
//		{
//			printf("no");
//		}
//	}
//}

//int main()
//{
//	double a, b, c;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a == 0)
//		{
//			printf("not equation");
//		}
//		else
//		{
//			double ret = b * b - 4 * a * c;
//			if (ret == 0)
//			{
//				printf("x1=x2=%.2lf\n", -b / 2 * a);
//			}
//			else if(ret>0)
//			{
//				ret = sqrt(ret);
//				printf("x1=%.2lf x2=%.2lf\n", -(b + ret) / (2 * a), -(b - ret) / (2 * a));
//			}
//			else
//			{
//				ret = sqrt(-ret);
//				printf("x1=%.2lf-%.2lf ; x2=%.2lf+%.2lf\n",
//					-b / (2 * a) ,
//					- ret / (2 * a),
//					-b / (2 * a) , 
//					ret / (2 * a));
//			}
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char a;
//	while (scanf("%lf%c%lf", &n1, &a, &n2)!=EOF)
//	{
//		switch (a)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//			break;
//		case '/':
//			if (n2 != 0.0)
//			{
//				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//			}
//			else
//			{
//				printf("wronging\n");
//			}
//			break;
//		default:
//			printf("invalid\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

