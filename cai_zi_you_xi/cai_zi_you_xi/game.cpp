#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//猜字游戏，随机生成100以内的正整数，猜测这个数字是多少，如果猜大了或者猜小了，电脑会告诉你，直到猜出来为止

void menu()//生成菜单
{
	printf("************************************\n");
	printf("************************************\n");
	printf("*************  1.play  *************\n");
	printf("*************  2.exit  *************\n");
	printf("************************************\n");
	printf("************************************\n\n");
	printf("请输入1或2:>\n");
}
int main()
{
	int select = 0;
	do
	{

		//生成菜单
		menu();
		//生成数字
		srand((unsigned int)time(NULL));
		int round = 0;
		int num = rand() % 100;
		int i = 1;
		scanf("%d", &select);
		if (select == 2)
			break;
		else if (select != 1)
			printf("输错啦，重来\n");
		else

			do
			{
				//猜数字
				printf("请猜一个数:>\n");
				//printf("%d", num);
				scanf("%d", &round);
				if (round < num)
					printf("猜小啦\n");
				else if (round > num)
					printf("猜大啦\n");
				else
				{
					printf("猜对啦，恭喜你!\n");//猜对了，退出循环
					i--;
				}
			} while (i);

	} while (1);

	return 0;
}