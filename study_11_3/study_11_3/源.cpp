#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//完全初始化
//	int arr1[5] = { 1,2,3,4,5 };
//	
//	//不完全初始化
//	int arr2[6] = { 1 };//不完全初始化时，未被初始化的元素默认为0
//
//	//错误的初始化，初始化的项过多
//	int arr3[7] = { 1,2,3,4,5,6,7,8 };
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[3]);
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	printf("%d\n",sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	printf("%d\n", arr[2] [4]);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0, m = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (m = 0; m < 5; m++)
//		{
//			printf("%d ", arr[i][m]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0, m = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (m = 0; m < 5; m++)
//		{
//			printf("arr[%d] [%d] = %p\n", i, m ,&arr[i] [m]);
//		}
//	
//	}
//	return 0;
//}
