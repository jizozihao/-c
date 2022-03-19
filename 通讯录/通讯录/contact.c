#include "contact.h"


//初始化通讯录
void InitContact(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//设置通讯录最初只有0个元素
}

//添加通讯录的信息
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满,无法增加\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", &(ps->date[ps->size].name));
		printf("请输入年龄：>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入性别：>");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话：>");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入地址：>");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
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

//查找函数  使用static避免函数被暴露
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
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//找到返回名字所在位置下标
	//找不到返回-1
	
	int pos = FindByName(ps, name);
	
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}



void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字：>");
	
	int pos = FindByName(ps, name);

	if(pos == -1)
	{
		printf("要查找的人不存在");
	}
	else
	{
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps, name);

	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", &(ps->date[pos].name));
		printf("请输入年龄：>");
		scanf("%d", &(ps->date[pos].age));
		printf("请输入性别：>");
		scanf("%s", ps->date[pos].sex);
		printf("请输入电话：>");
		scanf("%s", ps->date[pos].tele);
		printf("请输入地址：>");
		scanf("%s", ps->date[pos].addr);

		printf("修改成功\n");
	}

}