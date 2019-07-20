#include "stdio.h"
#include "engineering.h"
#include "engineering_one.h"
#include "engineering_oct.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("공학용 계산기를 선택하셨습니다. \n");
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
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}


void engineerOne() {
	printf("[공학용] 한자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_one();
}
void engineerTwo() {
	printf("[공학용] 두자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[공학용] 16진수 계산기를 선택하셨습니다.\n");

}
void engineerOct() {
	printf("[공학용] 8진수 계산기 입니다\n\n");
	show_engineer_Oct();
	int a, c, b;
	printf("첫번째 숫자 입력하세요(8진수로)\n");
	scanf_s("%o", &a);
	printf("연산을 입력하세요\n");
	scanf_s("%d", &b);
	printf("두번째째 숫자 입력하세요(8진수로)\n");
	scanf_s("%o", &c);
	switch (b)
	{
	case 1: OctSum(a, c);break;
	case 2: OctMinus(a, c);break;
	case 3: OctMul(a, c);break;
	case 4: OctDiv(a, c);break;
	default: printf("잘못입력하셨습니다\n");
	}
	}
	

