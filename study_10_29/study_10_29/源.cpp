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
//		printf("a比2小");
//	return 0;
//}


//int main() {
//	int a = 1;
//	if (a)
//		printf("a不是0");
//	return 0;
//}
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
				printf("猜对啦，恭喜你!\n");
				i--;
			}
		} while (i);

	} while (1);

	return 0;
}

