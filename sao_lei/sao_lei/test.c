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
	printf("���������ֿ�ʼ��Ϸ:)\n");
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
			printf("���˳�\n");
			break;
		}
		else if (choice == 1)
		{
			printf("��ʼ��Ϸ\n");
			game();
		}
		else
		{
			printf("�����������������:)\n");
		}

	}
	return 0;
}