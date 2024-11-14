#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<time.h>

void print_mine();
int sigma();

void game()
{
	//开始写棋盘，棋盘初始化
	char vision[ROWS][COLS];
	for (int i = 0; i <=COL; i++)
	{
		printf("%d ", i);
	}//打印坐标
	printf("\n");
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d ", i);//打印坐标
		for (int j = 1; j <= COL; j++)
		{
			vision[i][j] = '*';//初始化
			printf("%c ", vision[i][j]);
		}
		printf("\n");
	}

	//棋盘完毕，开始写雷

	srand((int)time(NULL));
	int mine[ROWS][COLS] = { 0 };//雷区初始化

	//先让玩家开出第一个，再布雷

	int choice_C = 0, choice_R = 0;
	scanf("%d %d", &choice_R, &choice_C);

	//雷图确定，开始布雷（不能铺在开的第一个上）

	int R = 0;
	int C = 0;
	for (int B = 1; B <= BOOM; )
	{
		R = 1+rand() % COL;
		C = 1+rand() % ROW;
		if (mine[C][R] == 0&&(C!=choice_C&&R!=choice_R))
		{
			mine[C][R] = 1;
			B++;
		}
		else
		{

		}
	}
	//调试语句*****
	print_mine(mine);
	//雷输入完毕,先打印一次地图，再让玩家开雷，以此往复
	int flag = 1, score = 0;
	do
	{
		
		//先算周围的雷个数,并且变化棋盘

		int sum = 0;
		sum += mine[choice_R+1][choice_C+1];
		sum += mine[choice_R-1][choice_C+1];
		sum += mine[choice_R][choice_C+1];
		sum += mine[choice_R+1][choice_C];
		sum += mine[choice_R-1][choice_C];
		sum += mine[choice_R+1][choice_C-1];
		sum += mine[choice_R-1][choice_C-1];
		sum += mine[choice_R][choice_C-1];
		vision[choice_R][choice_C] = (char)sum+48;
		
		//一扫扫一片
		/*if (vision[choice_R][choice_C] == 0)
		{
			int x = choice_R-1;
			int y = choice_C-1;
			sigma(x,y, mine[ROWS][COLS], vision[ROWS][COLS]);
			x++;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			x++;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			y++;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			y++;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			x--;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			x--;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
			y--;
			sigma(x, y, mine[ROWS][COLS], vision[ROWS][COLS]);
		}*/

		//打印棋盘
		for (int i = 0; i <= COL; i++)
		{
			printf("%d ", i);
		}//打印坐标
		printf("\n");
		for (int i = 1; i <= ROW; i++)
		{
			printf("%d ", i);//打印坐标
			for (int j = 1; j <= COL; j++)
			{
				printf("%c ", vision[i][j]);
			}
			printf("\n");
		}
		//再开雷
		scanf("%d %d", &choice_R, &choice_C);
		if (mine[choice_R][choice_C] == 1)
		{
			printf("很遗憾，你输了。\n");
			print_mine(mine);
			int flag = 0;
		}
		else
		{
			score++;
		}
		if (score == COL * ROW - BOOM-1)
		{
			printf("恭喜你，胜利啦！！");
			flag--;
		}
	} while (flag);

}









//打印雷，调试时用
void print_mine(int mine[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%d ", mine[i][j]);
		}
		printf("\n");
	}
}
//求周围的雷的数量
int sigma(int choice_R,int choice_C,int mine[ROWS][COLS], char vision[ROWS][COLS])
{
	int sum = 0;
	sum += mine[choice_R + 1][choice_C + 1];
	sum += mine[choice_R - 1][choice_C + 1];
	sum += mine[choice_R][choice_C + 1];
	sum += mine[choice_R + 1][choice_C];
	sum += mine[choice_R - 1][choice_C];
	sum += mine[choice_R + 1][choice_C - 1];
	sum += mine[choice_R - 1][choice_C - 1];
	sum += mine[choice_R][choice_C - 1];
	vision[choice_R][choice_C] = (char)sum + 48;
}