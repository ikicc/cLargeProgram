//menu2_4.cpp -- 2.4ѭ�����
#include <stdio.h>
#include <iostream>
void m2_4_1(void) { //1.while���
	system("cls");
	printf("\n\n    while���\n\n");
	printf("while(�������ʽ)\n");
	printf("    ���;\n");
	printf("ע���������ʽΪ��ʱִ����䣬��������ѭ����\n");
	printf("����\n");
	printf("while(a<b)\n");
	printf("    c=a;\n");
	printf("ע�����a<bΪ�棬��ִ��c=a����������ѭ����\n");
	getchar();
	rewind(stdin);
}
void m2_4_2(void) { //2.do-while���
	system("cls");
	printf("\n\n    do-while���\n\n");
	printf("do\n");
	printf("    ���;\n");
	printf("while(�������ʽ);\n");
	printf("ע����ִ����䣬���ж��������ʽ��Ϊ��ʱ����ִ����䣬��������ѭ����\n");
	printf("����\n");
	printf("do\n");
	printf("    c=a;\n");
	printf("while(a<b);\n");
	printf("ע����ִ��c=a�����ж�a<b��Ϊ��ʱ����ִ��c=a����������ѭ����\n");
	getchar();
	rewind(stdin);
}
void m2_4_3(void) {   //3.for���
	system("cls");
	printf("\n\n    for���\n\n");
	printf("for(���ʽ1;�������ʽ2;���ʽ3)\n");
	printf("    ���;\n");
	printf("ע����ִ�б��ʽ1�����ж��������ʽ2��Ϊ��ʱִ����䣬��ִ�б��ʽ3�����ж��������ʽ2��Ϊ��ʱִ����䣬��������ѭ����\n");
	printf("����\n");
	printf("for(i=0;i<10;i++)\n");
	printf("    c=a;\n");
	printf("ע����ִ��i=0�����ж�i<10��Ϊ��ʱִ��c=a����ִ��i++�����ж�i<10��Ϊ��ʱִ��c=a����������ѭ����\n");
	getchar();
	rewind(stdin);
}
void m2_4_4(void) {   //4.break���
	system("cls");
	printf("\n\n    break���\n\n");
	printf("break;\n");
	printf("ע��������ǰѭ����\n");
	printf("����\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        break;\n");
	printf("ע�����a<bΪ�棬���ж�a==c��Ϊ��ʱ����ѭ����\n");
	getchar();
	rewind(stdin);
}
void m2_4_5(void) {   //5.continue���
	system("cls");
	printf("\n\n    continue���\n\n");
	printf("continue;\n");
	printf("ע��������ǰѭ����������һ��ѭ����\n");
	printf("����\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        continue;\n");
	printf("ע�����a<bΪ�棬���ж�a==c��Ϊ��ʱ����ѭ����������һ��ѭ����\n");
	getchar();
	rewind(stdin);
}
void m2_4_6(void) {   //6.goto���
	system("cls");
	printf("\n\n    goto���\n\n");
	printf("goto ���;\n");
	printf("ע����ת����Ŵ���\n");
	printf("����\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        goto label;\n");
	printf("ע�����a<bΪ�棬���ж�a==c��Ϊ��ʱ��ת��label����\n");
	getchar();
	rewind(stdin);
}
void m2_4_7(void) {   //7.����ѭ��
	system("cls");
	printf("\n\n    ����ѭ��\n\n");
	printf("for(;;)\n");
	printf("    ���;\n");
	printf("while(1)\n");
	printf("    ���;\n");
	printf("ע���������ʽ��ԶΪ�棬ѭ������������\n");
	printf("����\n");
	printf("for(;;)\n");
	printf("    c=a;\n");
	printf("ע����Զִ��c=a��\n");
	getchar();
	rewind(stdin);
}
void m2_4_8(void) {   //8.ѭ��Ƕ��
	system("cls");
	printf("\n\n    ѭ��Ƕ��\n\n");
	printf("for(���ʽ1;�������ʽ2;���ʽ3)\n");
	printf("    for(���ʽ4;�������ʽ5;���ʽ6)\n");
	printf("        ���;\n");
	printf("ע�����ʽ1��2��3��4��5��6������������ʽ��\n");
	printf("����\n");
	printf("for(i=0;i<10;i++)\n");
	printf("    for(j=0;j<10;j++)\n");
	printf("        c=a;\n");
	printf("��ִ���ڲ�ѭ������ִ�����ѭ�����ڲ�ѭ��ִ����Ϻ���ִ�����ѭ����ֱ�����ѭ��ִ����ϡ�\n");
	getchar();
	rewind(stdin);
}

