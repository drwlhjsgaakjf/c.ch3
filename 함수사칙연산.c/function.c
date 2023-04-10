#include <stdio.h>
#include "function.h"

void p(const char* msg, int n) {

	printf(">>>>>>>>>>>>>>\n");
	printf("%s 출력: %d\n", msg, n);
	printf(">>>>>>>>>>>>>\n\n");



}

int showmenu(int n) {
	int input;
	printf("숫자 %d 입력:", n); scanf_s("%d", &input);
	return input;
}