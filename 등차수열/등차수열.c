#include <stdio.h>
int adding(int);
int facti(n);
int fivl(n);
int main(void) {

	int n;
    
	printf("수열의 번호를 입력:");scanf_s("%d", &n);
    printf("등차수열 a_%d의 값은 %d입니다", n, adding(n));
	printf("팩토리얼 a_%d의 값은 %d입니다", n, facto(n));
	printf("피보나치수열 a_%d의 값은 % d입니다", n, fibo(n));
	
	return 0;
}
int adding(int num) {
	if (num == 1)return 1;
	else return (adding(num - 1) + 2);

}

int facto(int num) {
	if (num == 1)return 1;
	else return (num * facto(num - 1));
}

int fibo(int num) {
	if (num == 1) return 1;
	else if (num == 2) return 1;
	else return (fibo(num - 1) + fibo (num - 2));
}