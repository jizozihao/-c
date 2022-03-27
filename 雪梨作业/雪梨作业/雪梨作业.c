
//任务03-1 焦子豪  1班   2021012411  3/27
#include <stdio.h>
int main(void)
{
	double a = 100;
	int i = 0;
	double b = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("第%d次反弹的高度：%lf\n", i, a / 2.0);
		a /= 2.0;
		b = b + a;
	}
	printf("%lf", b);

	return 0;
}


//任务03-2 焦子豪  1班   2021012411  3/27
#include <stdio.h>
int main(void)
{
	int i = 2;
	int arr[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (arr[0] > arr[1] && arr[0] > arr[2])
	{
		i = arr[0];
	}
	else if (arr[1] > arr[0] && arr[1] > arr[2])
	{
		i = arr[1];
	}
	else
	{
		i = arr[2];
	}
	while (1)
	{
		if (i % arr[0] == 0 && i % arr[1] == 0 && i % arr[2] == 0)
		{
			printf("%d", i);
			break;
		}
		i++;
	}
	return 0;
}



//任务03-3 焦子豪  1班   2021012411  3/27
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand((unsigned)time(0));
	int a = 1;
	while (a)
	{
		int cup = rand() % 3 + 1;
		printf("请您先出（1：石头 2：剪子 3：布 4：退出）");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			if (cup - a == 0)
			{
				printf("您出【石头】，电脑出【石头】，平局\n");
			}
			else if (cup - a == 1)
			{
				printf("您出【石头】，电脑出【剪子】，您赢了\n");
			}
			else
			{
				printf("您出【石头】，电脑出【布】，您输了\n");
			}
			break;
		case 2:
			if (cup < a)
			{
				printf("您出【剪刀】，电脑出【石头】，您输了\n");
			}
			else if (cup == a)
			{
				printf("您出【剪子】，电脑出【剪子】，平局\n");
			}
			else
			{
				printf("您出【剪子】，电脑出【布】，您赢了\n");
			}
			break;
		case 3:
			if (a - cup == 2)
			{
				printf("您出【布】，电脑出【石头】，您赢了\n");
			}
			else if (a - cup == 1)
			{
				printf("您出【布】，电脑出【剪子】，您输了\n");
			}
			else
			{
				printf("您出【布】，电脑出【布】，平局\n");
			}
			break;
		case 4:
			printf("再见！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
		if (a == 4)
		{
			break;
		}
	}
	
	return 0;
}