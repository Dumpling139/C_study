#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//int main() {
//    int a, b, c;
//    while (scanf_s("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if (a == b == c)
//            printf("Equilateral triangle!\n");
//        else if (a == b || b == c || c == a)
//            printf("Isosceles triangle!\n");
//        else if (a + b > c && b + c > a && c + a > b)
//            printf("Ordinary triangle!\n");
//        else
//            printf("Not a triangle!\n");
//
//
//    }
//    return 0;
//}
//int main() {
//    int a, b, c;
//    while (scanf_s("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if (a + b < c && b + c < a && c + a < b)
//            printf("Not a triangle!\n");
//        else if (a == b && b == c)
//            printf("Equilateral triangle!\n");
//        else if ("a==b||b==c||c==a")
//            printf("Isosceles triangle!\n");
//        else
//            printf("Ordinary triangle!\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	for (; a < 10; a++)
//	{
//		b = a;
//		for (b; b < 10; b++)
//		{
//			printf("%d*%d=%d ", a,b,a*b);
//			if (b == 9)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1, a6 = 1, a7 = 1, a8 = 1, a9 = 1, a0 = 1;
//	scanf("%d %d %d %d %d %d %d %d %d %d", a1, a2, a3, a4, a5, a6, a7, a8, a9, a0);
//
//	return 0;
//}
int main()
{
	signed int a = 1, b = 1, c = 0 ;
	for (; b <= 100; )
	{
		a * (-1);
		b++;
		c = c + a * b;
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}
//int main()
//{
//	int a = 1;
//	printf("%d", a * (-1));
//	return 0;
//}