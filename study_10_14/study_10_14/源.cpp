#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	char score = 'a';
//	sizeof("%c", score);
//	printf("%c", score);
//	return 0;
//}
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b < c) || (b + c < a) || (a + c < b))
        printf("Not a triangle!");
    else if (a == b&&b == c)
        printf("Equilateral triangle!");
    else if (a == b || b == c || c == a)
        printf("Isosceles triangle!");
    else
        printf("Ordinary triangle!");
    return 0;
}