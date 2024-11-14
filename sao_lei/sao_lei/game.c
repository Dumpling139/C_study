#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<time.h>

void print_mine();
int sigma();

void game()
{
	//��ʼд���̣����̳�ʼ��
	char vision[ROWS][COLS];
	for (int i = 0; i <=COL; i++)
	{
		printf("%d ", i);
	}//��ӡ����
	printf("\n");
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d ", i);//��ӡ����
		for (int j = 1; j <= COL; j++)
		{
			vision[i][j] = '*';//��ʼ��
			printf("%c ", vision[i][j]);
		}
		printf("\n");
	}

	//������ϣ���ʼд��

	srand((int)time(NULL));
	int mine[ROWS][COLS] = { 0 };//������ʼ��

	//������ҿ�����һ�����ٲ���

	int choice_C = 0, choice_R = 0;
	scanf("%d %d", &choice_R, &choice_C);

	//��ͼȷ������ʼ���ף��������ڿ��ĵ�һ���ϣ�

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
	//�������*****
	print_mine(mine);
	//���������,�ȴ�ӡһ�ε�ͼ��������ҿ��ף��Դ�����
	int flag = 1, score = 0;
	do
	{
		
		//������Χ���׸���,���ұ仯����

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
		
		//һɨɨһƬ
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

		//��ӡ����
		for (int i = 0; i <= COL; i++)
		{
			printf("%d ", i);
		}//��ӡ����
		printf("\n");
		for (int i = 1; i <= ROW; i++)
		{
			printf("%d ", i);//��ӡ����
			for (int j = 1; j <= COL; j++)
			{
				printf("%c ", vision[i][j]);
			}
			printf("\n");
		}
		//�ٿ���
		scanf("%d %d", &choice_R, &choice_C);
		if (mine[choice_R][choice_C] == 1)
		{
			printf("���ź��������ˡ�\n");
			print_mine(mine);
			int flag = 0;
		}
		else
		{
			score++;
		}
		if (score == COL * ROW - BOOM-1)
		{
			printf("��ϲ�㣬ʤ��������");
			flag--;
		}
	} while (flag);

}









//��ӡ�ף�����ʱ��
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
//����Χ���׵�����
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