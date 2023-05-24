#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include "cLargeProgram.h"



int main(int argc, char** argv) {
	char cho0;
	while (1) {
		system("cls");     //调用系统命令，清屏
		mainMenu();
		cho0 = getchar();    getchar();
		if (cho0 == '0') break;
		switch (cho0)
		{
		case '1':   menu2_1();   break;
		case '2':   menu2_2();   break;
		case '3':   menu2_3();   break;
		case '4':   menu2_4();   break;
		case '5':   menu2_5();   break;
		case '6':   menu2_6();   break;
		case '7':   menu2_7();   break;
		default:    break;
		}
	}

	return 0;
}
