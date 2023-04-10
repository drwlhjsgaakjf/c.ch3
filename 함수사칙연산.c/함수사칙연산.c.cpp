#include <stdio.h>
#include "function.h"

int main(void) {

	

	int num1 = showmenu(1),num2 = showmenu(2);
	///printf("¼ıÀÚ 1 ÀÔ·Â"); scanf_s("%d", &num1);
	///printf("¼ıÀÚ 2 ÀÔ·Â"); scanf_s("%d", &num2);

	p("µ¡¼À", num1 + num2);
	p("–E¼À", num1 - num2);
	p("°ö¼À", num1 * num2);
	p("³ª´°¼À", num1 / num2);

	return 0;
}
