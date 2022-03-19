#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo date[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};


//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼������
void AddContact(struct Contact* ps);//ͨѶ¼������һ����Ϣ�ĵ�����
void ShowContact(const struct Contact* ps);//��ʾͨѶ¼����������ӡͨѶ¼
void DelContact(struct Contact* ps);//����ɾ��ͨѶ¼
void SearchContact(const struct Contact* ps);//��������ͨѶ¼
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);







