#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
int main() {
	double a = 4;
	double b = sqrt(a);
	printf("%lf", b);
	return 0;
}





//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "************";
//	int left = 0;
//	int right = strlen(arr2)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int key = 7;
//	int flag = 0;
//	int mid = 0;
//	scanf("%d", &key);
//	while (right >= left)
//	{
//		mid = (right + left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag++;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("�ҵ��ˣ��±���%d", mid);
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;//����������
//	scanf("%d %d", &a, &b);
//	int c = 0;//�������Ĺ�Լ��
//	for (c = a; c > 0; c--)//��a��ʼ���Ӵ�С�ң�ֱ������һ
//	{
//		if (a % c == 0 && b % c == 0)
//		{
//			printf("%d��%d�����Լ����%d\n", a, b, c);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,(0,0),4,5 };
//	printf("%d",arr[1]);
//	return 0;
//}

//int main()
//{
//	int arr[][3] = { {0,1,2},{3,4,5} };
//	int a[][3] = { {0,1},{},{2,3,4} };
//	return 0;
//}


//int main()//����ʮ����������ƽ��ֵ
//{
//	int a[10] = { 0 };
//	float b[10] = { 0 };
//	int i = 0;//�±�
//	float c = 0;//ƽ��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &a[i]);
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		b[i] = (float)a[i] / 10;
//		c = c + b[i];
//	}
//	printf("%f", c);
//	
//	return 0;
//}
////��ʦ�����scanf��������д��Ϊʲôa������ֻ�е�0����ֵ�ɹ������ˣ������Ԫ�ػ���0���ѵ�ֻ������ʵʵһ��һ������

//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    while (scanf("%d", &a) != EOF)
//    {
//        char X[20][20] = {' '};
//        for (b = 0; b < 20; b++)
//        {
//            for (c = 0; c < 20; c++)
//            {
//                if (b == c && b < a)
//                {
//                    X[b][c] = '*';
//                }
//                else if (b == a - c - 1)
//                {
//                    X[b][c] = '*';
//                }
//                else
//                {
//                    X[b][c] = ' ';
//                }
//                if(b<a&&c<a)
//                {
//                    printf("%c", X[b][c]);
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int a, a1, b, c;
//
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        a = 2 * a - 1;
//        // 64 λ������� printf("%lld") to 
//        for (b = 1; b <= a; b++)
//        {
//            for (c = 1; c <= a; c++)
//            {
//                if (b == 1 && c % 2 == 1)
//                {
//                    printf("*");
//                }
//                else if (c == 1 && c % 2 == 1)
//                {
//                    printf("*");
//                }
//                else if (b == a && c % 2 == 1)
//                {
//                    printf("*");
//                }
//                else if (c == a && c % 2 == 1)
//                {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main() {
//	int a[10] = { 0 };
//	int b[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int c[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	for (int i = 0; i < 10; i++)
//	{
//		c[i] = b[i];
//		b[i] = a[i];
//		a[i] = c[i];
//		printf("a[%d]=%d b[%d]=%d c[%d]=%d\n", i, a[i], i, b[i], i, c[i]);
//
//	}
//	return 0;
//}
// 
// 
//int main() {
//    int a, b, c;
//    while (scanf("%d", &a) != EOF)
//    {
//        char X[20][20] = { ' ' };
//        for (b = 0; b < a; b++)
//        {
//            for (c = 0; c < a; c++)
//            {
//                if (b == c && b < a)
//                {
//                    X[b][c] = '*';
//                }
//                else if (b == a - c - 1)
//                {
//                    X[b][c] = '*';
//                }
//                else
//                {
//                    X[b][c] = ' ';
//                }
//
//            }
//
//        }
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                printf("%c", X[i][j]);
//            }
//            printf("/n");
//        }
//    }
//    return 0;
//}