//cProgrammSys.cpp
#include <iostream>
#include <stdio.h>
//美化一下程序界面


void local(int, int);

void lines_m(int);
void colum_n(int);

void mainMenu(void) {
	local(4, 20);  printf("C编程演示系统\n");
	local(1, 24);  printf("1. C基本数据\n");
	colum_n(24);  printf("2. 顺序结构\n");
	colum_n(24);  printf("3. 分枝结构\n");
	colum_n(24);  printf("4. 循环结构\n");
	colum_n(24);  printf("5. 函数结构\n");
	colum_n(24);  printf("6. 数组结构\n");
	colum_n(24);  printf("7. 指针结构\n");

	local(2, 24);  printf("0. 结束\n");
	local(2, 20);  printf("请选择：");
}
void local(int m, int n) {
	for (int i = 0; i < m; i++)  printf("\n");
	for (int i = 0; i < n; i++)  printf(" ");
}
void lines_m(int m) {
	for (int i = 0; i < m; i++)  printf("\n");
}
void colum_n(int n) {
	for (int i = 0; i < n; i++)  printf(" ");
}
//=============================
//2.1分支的一级菜单
void dispMenu2_1(void) {
	local(2, 20);  printf("C基本数据功能\n");
	local(1, 24);  printf("1. 数据分类\n");
	colum_n(24);  printf("2. 取值范围\n");
	colum_n(24);  printf("3. 存储字节\n");
	colum_n(24);  printf("4. 算术算符\n");
	colum_n(24);  printf("5. 类型转换\n");
	colum_n(24);  printf("6. I/O类型控制\n");
	colum_n(24);  printf("7. printf()函数\n");
	colum_n(24);  printf("8. scanf()函数\n");
	colum_n(24);  printf("9. 字符I/O\n");

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_1.h" 
//2.1分支的二级菜单
void menu2_1(void) {
	char cho2_1;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_1();
		cho2_1 = getchar();     getchar();//??
		if (cho2_1 == '0') break;
		switch (cho2_1)
		{
		case '1': m2_1_1();     break;
		case '2': m2_1_2();     break;
		case '3': m2_1_3();     break;
		case '4': m2_1_4();     break;
		case '5': m2_1_5();     break;
		case '6': m2_1_6();     break;
		case '7': m2_1_7();     break;
		case '8': m2_1_8();     break;
		case '9': m2_1_9();     break;


		default:       break;
		}
	}
}
//================================ 
//2.2分支的一级菜单
void dispMenu2_2(void) {
	local(2, 20);  printf("C顺序结构编程\n");
	local(1, 24);  printf("1. 程序结构\n");
	colum_n(24);  printf("2. 语句与复合\n");
	colum_n(24);  printf("3. ASCll码\n");
	colum_n(24);  printf("4. 周长与面积\n");
	colum_n(24);  printf("5. 输出图案\n");

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_2.h"
//2.2分支的二级菜单
void menu2_2(void) {
	char cho2_2;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_2();
		cho2_2 = getchar();     getchar();//??
		if (cho2_2 == '0') break;
		switch (cho2_2)
		{
			case '1': m2_2_1();     break;
			case '2': m2_2_2();     break;
			case '3': m2_2_3();     break;
			case '4': m2_2_4();     break;
            case '5': m2_2_5();     break;

		default:   break;
		}
	}
}
//================================
//2.3分支的一级菜单
void dispMenu2_3(void) {
	local(2, 20);  printf("C分枝结构编程\n");
	local(1, 24);  printf("1. if语句\n");
	colum_n(24);  printf("2. if-else语句\n");
	colum_n(24);  printf("3. if-else if语句\n");
	colum_n(24);  printf("4. switch语句\n");
	colum_n(24);  printf("5. goto语句\n");
	colum_n(24);  printf("6. break语句\n");
	colum_n(24);  printf("7. continue语句\n");

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_3.h"
//2.3分支的二级菜单
void menu2_3(void) {
	char cho2_3;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_3();
		cho2_3 = getchar();     getchar();//??
		if (cho2_3 == '0') break;
		switch (cho2_3)
		{
		case '1': m2_3_1();     break;
		case '2': m2_3_2();     break;
		case '3': m2_3_3();     break;
		case '4': m2_3_4();     break;
		case '5': m2_3_5();     break;
		case '6': m2_3_6();     break;
		case '7': m2_3_7();     break;

		default:       break;
		}
	}
}
	
//=================
//2.4分支的一级菜单
void dispMenu2_4(void) {
	local(2, 20);  printf("C循环结构编程\n");
	local(1, 24);  printf("1. while语句\n");
	colum_n(24);  printf("2. do-while语句\n");
	colum_n(24);  printf("3. for语句\n");
	colum_n(24);  printf("4. break语句\n");
	colum_n(24);  printf("5. continue语句\n");
	colum_n(24);  printf("6. goto语句\n");
	colum_n(24);  printf("7. 无限循环\n");
	colum_n(24);  printf("8. 循环嵌套\n");;

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_4.h"
//2.4分支的二级菜单
void menu2_4(void) {
	char cho2_4;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_4();
		cho2_4 = getchar();     getchar();//??
		if (cho2_4 == '0') break;
		switch (cho2_4)
		{
		case '1': m2_4_1();     break;
		case '2': m2_4_2();     break;
		case '3': m2_4_3();     break;
		case '4': m2_4_4();     break;
		case '5': m2_4_5();     break;
		case '6': m2_4_6();     break;
		case '7': m2_4_7();     break;
		case '8': m2_4_8();     break;

		default:       break;
		}
	}
}
//=================
//2.5分支的一级菜单
void dispMenu2_5(void) {
	local(2, 20);  printf("C函数结构\n");
	local(1, 24);  printf("1. 函数的定义\n");
	colum_n(24);  printf("2. 函数的调用\n");
	colum_n(24);  printf("3. 函数的参数传递\n");
	colum_n(24);  printf("4. 函数的返回值\n");
	colum_n(24);  printf("5. 函数的递归调用\n");
	colum_n(24);  printf("6. 函数的嵌套调用\n");
	colum_n(24);  printf("7. 函数的声明\n");
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_5.h"
//2.5分支的二级菜单
void menu2_5(void) {
	char cho2_5;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_5();
		cho2_5 = getchar();     getchar();//??
		if (cho2_5 == '0') break;
		switch (cho2_5)
		{
		case '1': m2_5_1();     break;
		case '2': m2_5_2();     break;
		case '3': m2_5_3();     break;
		case '4': m2_5_4();     break;
		case '5': m2_5_5();     break;
		case '6': m2_5_6();     break;
		case '7': m2_5_7();     break;

		default:       break;
		}
	}
}
//=================
//2.6分支的一级菜单
void dispMenu2_6(void) {
	local(2, 20);  printf("C数组结构\n");
	local(1, 24);  printf("1. 数组的定义\n");
	colum_n(24);  printf("2. 数组的初始化\n");
	colum_n(24);  printf("3. 数组的引用\n");
	colum_n(24);  printf("4. 数组的输入输出\n");
	colum_n(24);  printf("5. 一维数组\n");
	colum_n(24);  printf("6. 二维数组\n");
	colum_n(24);  printf("7. 字符数组\n");
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_6.h"
//2.6分支的二级菜单
void menu2_6(void) {
	char cho2_6;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_6();
		cho2_6 = getchar();     getchar();//??
		if (cho2_6 == '0') break;
		switch (cho2_6)
		{
		case '1': m2_6_1();     break;
		case '2': m2_6_2();     break;
		case '3': m2_6_3();     break;
		case '4': m2_6_4();     break;
		case '5': m2_6_5();     break;
		case '6': m2_6_6();     break;
		case '7': m2_6_7();     break;

		default:       break;
		}
	}
}
//=================
//2.7分支的一级菜单
void dispMenu2_7(void) {
	local(2, 20);  printf("C指针结构\n");
	local(1, 24);  printf("1. 指针的定义\n");
	colum_n(24);  printf("2. 指针的使用\n");
	colum_n(24);  printf("3. 指针的输入输出\n");
	colum_n(24);  printf("4. 指针与数组\n");
	colum_n(24);  printf("5. 指针与函数\n");
	colum_n(24);  printf("6. 指针与指针\n");
	colum_n(24);  printf("7. main函数的参数\n");
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
#include "menu2_7.h"
//2.7分支的二级菜单
void menu2_7(void) {
	char cho2_7;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_7();
		cho2_7 = getchar();     getchar();//??
		if (cho2_7 == '0') break;
		switch (cho2_7)
		{
		case '1': m2_7_1();     break;
		case '2': m2_7_2();     break;
		case '3': m2_7_3();     break;
		case '4': m2_7_4();     break;
		case '5': m2_7_5();     break;
		case '6': m2_7_6();     break;
		case '7': m2_7_7();     break;

		default:       break;
		}
	}
}