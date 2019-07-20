#include <stdio.h>
#include "general.h"
#include "engineering.h"
#include "select.h"
//������ ��������
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}