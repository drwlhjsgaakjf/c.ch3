#include <stdio.h>
#include "function.h"

int main(void) {

	

	int num1 = showmenu(1),num2 = showmenu(2);
	///printf("���� 1 �Է�"); scanf_s("%d", &num1);
	///printf("���� 2 �Է�"); scanf_s("%d", &num2);

	p("����", num1 + num2);
	p("�E��", num1 - num2);
	p("����", num1 * num2);
	p("������", num1 / num2);

	return 0;
}
