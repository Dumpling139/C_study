#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while ( i <= 10 )
//	{
//
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
// 
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//产生100~200的数
//	{
//		int m = 0;//初始化flag和m
//		int flag = 1;
//		for (m = 2; m < i; m++)
//		{
//			if (i % m == 0)//找因数，找到了跳出循环，并且不打印i
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//找到了素数，打印i
//		}
//	}
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//
//next:
//	printf("跳过了haha\n");
//	return 0;
//}


//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d ", rand());
//	printf("%d ", rand());
//	printf("%d ", rand());
//	printf("%d ", rand());
//	printf("%d ", rand());
//	return 0;
//}