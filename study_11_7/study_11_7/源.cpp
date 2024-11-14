#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int r = Add(a, b);
//	printf("%d\n", r);
//	return 0;
//}
//void set_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//	
//}
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	set_arr(arr,10);
//	print_arr(arr,10);
//
//}

//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int is_day(int year, int month)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (is_leap_year(year)&&month==2)
//	{
//		return 29;
//	}
//	else
//	{
//		return days[month];
//	}
//}
//
//int main()
//{
//	int year = 0, month = 0;
//	scanf("%d %d", &year, &month);
//	if (is_leap_year(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	printf("这个月有%d天", is_day(year, month));
//	return 0;
//}

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int is_leap_year(int year);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}
//
//
//
//
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 0; i <= 5; i++)
	{
		int i = 0;
		printf("%d", i);
	}
}


int main()
{
	int i = 0;
	int i = 0;
	printf("%d", i);
	return 0;
}