#include <stdio.h>
#include "function.h"

void p(const char* msg, int n) {

	printf(">>>>>>>>>>>>>>\n");
	printf("%s ���: %d\n", msg, n);
	printf(">>>>>>>>>>>>>\n\n");



}

int showmenu(int n) {
	int input;
	printf("���� %d �Է�:", n); scanf_s("%d", &input);
	return input;
}