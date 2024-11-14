#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	char num = '1';
//	int n = 0;
//	n = sizeof(1);
//	printf("%d", n);
//	return 0;
//}
//int main() {
//	char a = '1';
//	printf("%c", a);
//	return 0;
//}
#include<stdbool.h>
//int main() {
//	bool a = true;
//	if (a)
//		printf("hi");
//	return 0;
//}
//int main() {
//	bool a = 0;
//	if (a)
//		printf("ÕæµÄ");
//	else
//		printf("¼ÙµÄ");
//	return 0;
//}
//int main() {
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n",sizeof(long));
//	printf("%zd\n",sizeof(long long));
//	printf("%zd\n",sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	printf("%zd\n", sizeof(bool));
//	return 0;
//}
int main() {
	int b = 1;
	int a = 10;
	printf("%zd\n", sizeof(a=b+1));
	return 0;
}