#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("*********** 1.play ***********\n");
	printf("*********** 2.exit ***********\n");
	printf("******************************\n\n");
	printf("请输入数字开始游戏:)\n");
}





int main()
{
	menu();
	while (1)
	{
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 2)
		{
			printf("已退出\n");
			break;
		}
		else if (choice == 1)
		{
			printf("开始游戏\n");
			game();
		}
		else
		{
			printf("输错啦，请重新输入:)\n");
		}

	}
	return 0;
}