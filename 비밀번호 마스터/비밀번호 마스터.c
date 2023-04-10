#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showIntro(void);
void showSuccess(void);
void showFail(void);
void showExit(void);
void showEnding(int);
int showQuestion(int, int, int);
int getNumber(int);


int main(void) {
	//���� ���� �� �ʱ� �۾�
	int num1, num2;
	int level = 1;
	int answer = -1;
	srand(time(NULL));

	//���� ȭ�� ���
	showIntro();

	//(�ݺ�)���� ���� �� ä��
	while (1) {
		//���� ����
		num1 = getNumber(level); num2 = getNumber(level);

		//���� ���
		answer = showQuestion(level, num1, num2);

		//���߸� ��� ���� ��, Ʋ���� �ƿ�, -1�̸� �ƿ�

		if (answer == -1) {
			showExit(); break;
		}
		else if (answer == num1 * num2) {
			showSuccess();
			level++;
		}
		else {
			showFail(); break;
		}
	}
	//���� ȭ��
	showEnding(level - 1);

	return 0;
}

void showIntro(void) { //���� ȭ�� ��� �Լ�
	printf(">> ��� ����,100���� �� �� �ֳ�");
}
void showSuccess(void) {
	printf(">> �����Դϴ�!!\n\n");
}
void showFail(void) {
	printf(">> �����Դϴ�!! �����մϴ�!\n\n");
}
void showExit(void) {
	printf(">> ���� ��ư�� ���Ƚ��ϴ�!\n\n");
}
void showEnding(int s) { //���� ȭ�� ��� �Լ�
	printf(">> ��й�ȣ %d���� �������ϴ�!\n\n", s);
}
int showQuestion(int l, int n1, int n2) { //������ ���� ���� �Լ�
	int a;
	printf("*-----------%2d�ܰ� ��й�ȣ ��Ʈ-----------*\n", l);
	printf("\t%2d x %2d = ?\n", n1, n2);
	printf("*------------------------------------------*\n");
	//�Է� ó��
	printf("%d�ܰ� ��й�ȣ�� �Է��ϼ���(-1 �Է½� ����) : ", l);
	scanf_s("%d", &a);
	return a;
}
int getNumber(int l) { //������ ���� �߻� �Լ�
	return rand() % (l * 9) + 1;
}