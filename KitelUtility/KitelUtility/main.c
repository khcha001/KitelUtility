#include <stdio.h>
#include "general.h"
#include "engineering.h"
#include "select.h"
//차강현 ㅅㅂㄴㄴ
void run();

void main() {
	run();
}

void run() {
	int input = 0;
	while (1)
	{
		input = select_main();
		if (input == MAIN_END) break;
		switch (input)
		{
		case MAIN_GENERAL:
			generalCal();
			break;
		case MAIN_ENGINEER:
			engineeringCal();
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}