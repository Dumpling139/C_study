#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//int main()
//{
//    float a = 0;
//    scanf("%f", a);
//    printf("%.3f", a);
//    return 0;
//}


//int main() {
//    int year = 0, month = 0, date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\n", year);
//    printf("month=%2d\n", month);
//    printf("date=%02d", date);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int year = 0;
//    scanf("%4d", &year);
//    printf("year=%09d3", year);
//    return 0;
//}
//int main() {
//	int a = 1;
//	if (a < 2)
//		printf("a��2С");
//	return 0;
//}


//int main() {
//	int a = 1;
//	if (a)
//		printf("a����0");
//	return 0;
//}
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
				printf("�¶�������ϲ��!\n");
				i--;
			}
		} while (i);

	} while (1);

	return 0;
}

