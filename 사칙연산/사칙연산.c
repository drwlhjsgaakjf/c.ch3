#include <stdio.h>
void p(const char*, int);
int showmenu(int);

int main(void) {

	int num1 = 0, num2 = 0;
	num1 = showmenu(1);
	num1 = showmenu(2);
	printf("���� 1 �Է�");scanf_s("%d", &num1);
	printf("���� 2 �Է�");scanf_s("%d", &num2);

	p("����", num1 + num2);
	p("�E��", num1 - num2);
	p("����", num1 * num2);
	p("������", num1 / num2);











	return; 0;
}

void p(const char* msg, int n) {

	printf(">>>>>>>>>>>>>>\n");
	printf("%s ���: %d\n",msg,n);
	printf(">>>>>>>>>>>>>\n\n");



}

int showmenu(void) {
	int input;
	printf("���� �Է�:"); scanf_s("%d", input);
	return input;

}








