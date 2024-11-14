#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int a = 0;//a就是全局变量
//int main() {
//	int b = 10;//b就是局部变量
//	return 0;
//}
//int a = 10;
//int main() {
//	int a = 20;
//	printf("%d", a);
//	return 0;
//}
//int main() {
//	float a = 6/4;
//	printf("%f\n", a);//结果为1.000000
//	return 0;
//}
//int main() {
//	float a = 6.0 / 4;
//	printf("%f", a);//结果为1.500000
//	return 0;
//}
//int main() {
//	float a = 6;
//	int b = 4;
//	printf("%f", a / b);//结果也为1.500000
//	return 0;
//}
int main() {
	int high = 5;
	high = (high / 25.0) * 100;
	printf("%d", high);
	return 0;
}