#include "contact.h"


//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

//���ͨѶ¼����Ϣ
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", &(ps->date[ps->size].name));
		printf("���������䣺>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("�������Ա�>");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰��>");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ַ��>");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s \t %-4d \t %-5s \t %-12s \t %-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
		}
	}
}

//���Һ���  ʹ��static���⺯������¶
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//�ҵ�������������λ���±�
	//�Ҳ�������-1
	
	int pos = FindByName(ps, name);
	
	//2.ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}



void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵����֣�>");
	
	int pos = FindByName(ps, name);

	if(pos == -1)
	{
		printf("Ҫ���ҵ��˲�����");
	}
	else
	{
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s \t %-4d \t %-5s \t %-12s \t %-20s\n",
			ps->date[pos].name,
			ps->date[pos].age,
			ps->date[pos].sex,
			ps->date[pos].tele,
			ps->date[pos].addr);
	}

}



void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(ps, name);

	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", &(ps->date[pos].name));
		printf("���������䣺>");
		scanf("%d", &(ps->date[pos].age));
		printf("�������Ա�>");
		scanf("%s", ps->date[pos].sex);
		printf("������绰��>");
		scanf("%s", ps->date[pos].tele);
		printf("�������ַ��>");
		scanf("%s", ps->date[pos].addr);

		printf("�޸ĳɹ�\n");
	}

}