//���Թ���

//����
//1.���1000���˵ĺ�����Ϣ  ����  �绰   �Ա�   ���� סַ
//2.���Ӻ�����Ϣ
//3.ɾ��������Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
#include <stdio.h>
#include "contact.h"



void menu()
{
	printf("*************************************\n");
	printf("*****   1.add       2.del      ******\n");
	printf("*****   3.search    4.modify   ******\n");
	printf("*****   5.show      6.sort     ******\n");
	printf("*****   0.esit                 ******\n");
	printf("*************************************\n");

}
int main(void)
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�ص�����size

	//int size = 0;
	//struct PeoInfo con[MAX];//���1000���˵���Ϣ
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//������Ϣ���ı�ͨѶ¼��Ҫ����ַ
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con); //�ṹ���ӡʱΪ�˼����ڴ渺�أ�������ַ
			break;
		case SORT:
			//����ʵ��
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}