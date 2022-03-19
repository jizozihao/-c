//测试功能

//功能
//1.存放1000个人的好友信息  姓名  电话   性别   年龄 住址
//2.增加好友信息
//3.删除好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印好友信息
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
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含1000个元素的数和size

	//int size = 0;
	//struct PeoInfo con[MAX];//存放1000个人的信息
	//初始化通讯录
	InitContact(&con);
	//

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);//增加信息，改变通讯录，要传地址
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
			ShowContact(&con); //结构体打印时为了减少内存负载，尽量传址
			break;
		case SORT:
			//自主实现
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}