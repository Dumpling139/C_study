#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//������Ϸ���������100���ڵ����������²���������Ƕ��٣�����´��˻��߲�С�ˣ����Ի�����㣬ֱ���³���Ϊֹ

void menu()//���ɲ˵�
{
	printf("************************************\n");
	printf("************************************\n");
	printf("*************  1.play  *************\n");
	printf("*************  2.exit  *************\n");
	printf("************************************\n");
	printf("************************************\n\n");
	printf("������1��2:>\n");
}
int main()
{
	int select = 0;
	do
	{

		//���ɲ˵�
		menu();
		//��������
		srand((unsigned int)time(NULL));
		int round = 0;
		int num = rand() % 100;
		int i = 1;
		scanf("%d", &select);
		if (select == 2)
			break;
		else if (select != 1)
			printf("�����������\n");
		else

			do
			{
				//������
				printf("���һ����:>\n");
				//printf("%d", num);
				scanf("%d", &round);
				if (round < num)
					printf("��С��\n");
				else if (round > num)
					printf("�´���\n");
				else
				{
					printf("�¶�������ϲ��!\n");//�¶��ˣ��˳�ѭ��
					i--;
				}
			} while (i);

	} while (1);

	return 0;
}