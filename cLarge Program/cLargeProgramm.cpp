//cProgrammSys.cpp
#include <iostream>
#include <stdio.h>

void local(int, int);

void lines_m(int);
void colum_n(int);

void mainMenu(void) {
	local(4, 20);  printf("C�����ʾϵͳ\n");
	local(1, 24);  printf("1. C��������\n");
	colum_n(24);  printf("2. ˳��ṹ\n");
	colum_n(24);  printf("3. ��֦�ṹ\n");
	colum_n(24);  printf("4. ѭ���ṹ\n");
	colum_n(24);  printf("5. �����ṹ\n");
	colum_n(24);  printf("6. ����ṹ\n");
	colum_n(24);  printf("7. ָ��ṹ\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
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
//2.1��֧��һ���˵�
void dispMenu2_1(void) {
	local(2, 20);  printf("C�������ݹ���\n");
	local(1, 24);  printf("1. ���ݷ���\n");
	colum_n(24);  printf("2. ȡֵ��Χ\n");
	colum_n(24);  printf("3. �洢�ֽ�\n");
	colum_n(24);  printf("4. �������\n");
	colum_n(24);  printf("5. ����ת��\n");
	colum_n(24);  printf("6. I/O���Ϳ���\n");
	colum_n(24);  printf("7. printf()����\n");
	colum_n(24);  printf("8. scanf()����\n");
	colum_n(24);  printf("9. �ַ�I/O\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
#include "menu2_1.h" 
//2.1��֧�Ķ����˵�
void menu2_1(void) {
	char cho2_1;
	while (1) {
		system("cls");     //����ϵͳ�������
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
//2.2��֧��һ���˵�
void dispMenu2_2(void) {
	local(2, 20);  printf("C˳��ṹ���\n");
	local(1, 24);  printf("1. ��ʽ�����ʽ��\n");
	colum_n(24);  printf("2. ��������scanf()\n");
	colum_n(24);  printf("3. ��Ļ���printf()\n");
	colum_n(24);  printf("4. ���������\n");
	colum_n(24);  printf("5. �߼������\n");
	colum_n(24);  printf("6. ��ϵ�����\n");
	colum_n(24);  printf("7. λ�����\n");
	colum_n(24);  printf("8. ��ֵ�����\n");
	colum_n(24);  printf("9. ��������ȼ�\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
#include "menu2_2.h"
//2.2��֧�Ķ����˵�
void menu2_2(void) {
	char cho2_2;
	while (1) {
		system("cls");     //����ϵͳ�������
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
			case '6': m2_2_6();     break;
			case '7': m2_2_7();     break;
			case '8': m2_2_8();     break;
			case '9': m2_2_9();     break;

		default:   break;
		}
	}
}
//================================
//2.3��֧��һ���˵�
void dispMenu2_3(void) {
	local(2, 20);  printf("C��֦�ṹ���\n");
	local(1, 24);  printf("1. if���\n");
	colum_n(24);  printf("2. if-else���\n");
	colum_n(24);  printf("3. if-else if���\n");
	colum_n(24);  printf("4. switch���\n");
	colum_n(24);  printf("5. goto���\n");
	colum_n(24);  printf("6. break���\n");
	colum_n(24);  printf("7. continue���\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
#include "menu2_3.h"
//2.3��֧�Ķ����˵�
void menu2_3(void) {
	char cho2_3;
	while (1) {
		system("cls");     //����ϵͳ�������
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
//2.4��֧��һ���˵�
void dispMenu2_4(void) {
	local(2, 20);  printf("Cѭ���ṹ���\n");
	local(1, 24);  printf("1. while���\n");
	colum_n(24);  printf("2. do-while���\n");
	colum_n(24);  printf("3. for���\n");
	colum_n(24);  printf("4. break���\n");
	colum_n(24);  printf("5. continue���\n");
	colum_n(24);  printf("6. goto���\n");
	colum_n(24);  printf("7. ����ѭ��\n");
	colum_n(24);  printf("8. ѭ��Ƕ��\n");;

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
#include "menu2_4.h"
//2.4��֧�Ķ����˵�
void menu2_4(void) {
	char cho2_4;
	while (1) {
		system("cls");     //����ϵͳ�������
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
//2.5��֧��һ���˵�
void dispMenu2_5(void) {
	local(2, 20);  printf("C�����ṹ\n");
	local(1, 24);  printf("1. �����Ķ���\n");
	colum_n(24);  printf("2. �����ĵ���\n");
	colum_n(24);  printf("3. �����Ĳ�������\n");
	colum_n(24);  printf("4. �����ķ���ֵ\n");
	colum_n(24);  printf("5. �����ĵݹ����\n");
	colum_n(24);  printf("6. ������Ƕ�׵���\n");
	colum_n(24);  printf("7. ����������\n");
}
/*#include "menu2_5.h"
//2.5��֧�Ķ����˵�
void menu2_5(void) {
	char cho2_5;
	while (1) {
		system("cls");     //����ϵͳ�������
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
}*/

void menu2_5(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_6(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_7(void) { printf("���ڱ�д��\n");  getchar(); }