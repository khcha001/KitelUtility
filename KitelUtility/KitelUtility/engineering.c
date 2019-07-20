#include "stdio.h"
#include "engineering.h"
#include "engineering_one.h"
#include "engineering_oct.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("���п� ���⸦ �����ϼ̽��ϴ�. \n");
	engineer_run();
}

void engineer_run() {
	int input = 0;
	while (1)
	{
		input = select_engineer();
		if (input == BACK) break;
		switch (input)
		{
		case ENGINEER_ONE:
			engineerOne();
			break;
		case ENGINEER_TWO:
			engineerTwo();
			break;
		case ENGINEER_HEX:
			engineerHex();
			break;
		case ENGINEER_OCT:
			engineerOct();
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}


void engineerOne() {
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_one();
}
void engineerTwo() {
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[���п�] 16���� ���⸦ �����ϼ̽��ϴ�.\n");

}
void engineerOct() {
	printf("[���п�] 8���� ���� �Դϴ�\n\n");
	show_engineer_Oct();
	int a, c, b;
	printf("ù��° ���� �Է��ϼ���(8������)\n");
	scanf_s("%o", &a);
	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &b);
	printf("�ι�°° ���� �Է��ϼ���(8������)\n");
	scanf_s("%o", &c);
	switch (b)
	{
	case 1: OctSum(a, c);break;
	case 2: OctMinus(a, c);break;
	case 3: OctMul(a, c);break;
	case 4: OctDiv(a, c);break;
	default: printf("�߸��Է��ϼ̽��ϴ�\n");
	}
	}
	

