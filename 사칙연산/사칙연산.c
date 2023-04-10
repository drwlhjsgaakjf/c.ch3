#include <stdio.h>
void p(const char*, int);
int showmenu(int);

int main(void) {

	int num1 = 0, num2 = 0;
	num1 = showmenu(1);
	num1 = showmenu(2);
	printf("¼ıÀÚ 1 ÀÔ·Â");scanf_s("%d", &num1);
	printf("¼ıÀÚ 2 ÀÔ·Â");scanf_s("%d", &num2);

	p("µ¡¼À", num1 + num2);
	p("–E¼À", num1 - num2);
	p("°ö¼À", num1 * num2);
	p("³ª´°¼À", num1 / num2);











	return; 0;
}

void p(const char* msg, int n) {

	printf(">>>>>>>>>>>>>>\n");
	printf("%s Ãâ·Â: %d\n",msg,n);
	printf(">>>>>>>>>>>>>\n\n");



}

int showmenu(void) {
	int input;
	printf("¼ıÀÚ ÀÔ·Â:"); scanf_s("%d", input);
	return input;

}








