
//����03-1 ���Ӻ�  1��   2021012411  3/27
#include <stdio.h>
int main(void)
{
	double a = 100;
	int i = 0;
	double b = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("��%d�η����ĸ߶ȣ�%lf\n", i, a / 2.0);
		a /= 2.0;
		b = b + a;
	}
	printf("%lf", b);

	return 0;
}


//����03-2 ���Ӻ�  1��   2021012411  3/27
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



//����03-3 ���Ӻ�  1��   2021012411  3/27
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
		printf("�����ȳ���1��ʯͷ 2������ 3���� 4���˳���");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			if (cup - a == 0)
			{
				printf("������ʯͷ�������Գ���ʯͷ����ƽ��\n");
			}
			else if (cup - a == 1)
			{
				printf("������ʯͷ�������Գ������ӡ�����Ӯ��\n");
			}
			else
			{
				printf("������ʯͷ�������Գ���������������\n");
			}
			break;
		case 2:
			if (cup < a)
			{
				printf("�����������������Գ���ʯͷ����������\n");
			}
			else if (cup == a)
			{
				printf("���������ӡ������Գ������ӡ���ƽ��\n");
			}
			else
			{
				printf("���������ӡ������Գ�����������Ӯ��\n");
			}
			break;
		case 3:
			if (a - cup == 2)
			{
				printf("���������������Գ���ʯͷ������Ӯ��\n");
			}
			else if (a - cup == 1)
			{
				printf("���������������Գ������ӡ���������\n");
			}
			else
			{
				printf("���������������Գ���������ƽ��\n");
			}
			break;
		case 4:
			printf("�ټ���\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
		if (a == 4)
		{
			break;
		}
	}
	
	return 0;
}