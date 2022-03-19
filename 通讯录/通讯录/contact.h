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

//通讯录类型
struct Contact
{
	struct PeoInfo date[MAX];//存放1000个信息
	int size;//记录当前已经有的元素个数
};


//声明函数
void InitContact(struct Contact* ps);//初始化通讯录的声明
void AddContact(struct Contact* ps);//通讯录中增加一个信息的的声明
void ShowContact(const struct Contact* ps);//显示通讯录的声明，打印通讯录
void DelContact(struct Contact* ps);//声明删除通讯录
void SearchContact(const struct Contact* ps);//声明查找通讯录
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);







