//menu2_3.cpp -- 2.3��֧�ṹ
#include <stdio.h>
#include <iostream>
void m2_3_1(void) { //1.if���
	system("cls");
	printf("\n\n    if���\n\n");
	printf("if(�������ʽ)\n");
	printf("    ���1;\n");
	printf("else\n");
	printf("    ���2;\n");
	printf("ע���������ʽΪ��ʱִ�����1������ִ�����2��\n");
	printf("����\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else\n");
	printf("    c=b;\n");
	printf("ע�����a>bΪ�棬��ִ��c=a������ִ��c=b��\n");
	getchar();
	rewind(stdin);
}

void m2_3_2(void) {  //2.if-else���
	system("cls");
	printf("\n\n    if-else���\n\n");
	printf("if(�������ʽ)\n");
	printf("    ���1;\n");
	printf("else if(�������ʽ)\n");
	printf("    ���2;\n");
	printf("else\n");
	printf("    ���3;\n");
	printf("ע���������ʽΪ��ʱִ�����1�������ж��������ʽ2��Ϊ��ʱִ�����2������ִ�����3��\n");
	printf("����\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else if(a<b)\n");
	printf("    c=b;\n");
	printf("else\n");
	printf("    c=0;\n");
	printf("ע�����a>bΪ�棬��ִ��c=a�������ж�a<b��Ϊ����ִ��c=b������ִ��c=0��\n");
	getchar();
	rewind(stdin);
}
void m2_3_3(void) {  //3.if-else if���
	system("cls");
	printf("\n\n    if-else if���\n\n");
	printf("if(�������ʽ)\n");
	printf("    ���1;\n");
	printf("else if(�������ʽ)\n");
	printf("    ���2;\n");
	printf("else if(�������ʽ)\n");
	printf("    ���3;\n");
	printf("else\n");
	printf("    ���4;\n");
	printf("ע���������ʽΪ��ʱִ�����1�������ж��������ʽ2��Ϊ��ʱִ�����2�������ж��������ʽ3��Ϊ��ʱִ�����3������ִ�����4��\n");
	printf("����\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else if(a<b)\n");
	printf("    c=b;\n");
	printf("else if(a==b)\n");
	printf("    c=0;\n");
	printf("else\n");
	printf("    c=-1;\n");
	printf("ע�����a>bΪ�棬��ִ��c=a�������ж�a<b��Ϊ����ִ��c=b�������ж�a==b��Ϊ����ִ��c=0������ִ��c=-1��\n");
	getchar();
	rewind(stdin);
}
void m2_3_4(void) {  //4.switch���
	system("cls");
	printf("\n\n    switch���\n\n");
	printf("switch(���ʽ)\n");
	printf("{\n");
	printf("    case ����1:���1;\n");
	printf("    case ����2:���2;\n");
	printf("    case ����3:���3;\n");
	printf("    ����\n");
	printf("    default:���n;\n");
	printf("}\n");
	printf("ע�����ʽ��ֵ�볣��1������2������3�������бȽϣ������ȣ���ִ����Ӧ����䣬���������ȣ���ִ��default�����䡣\n");
	printf("����\n");
	printf("switch(a)\n");
	printf("{\n");
	printf("    case 1:printf(\"a=1\");break;\n");
	printf("    case 2:printf(\"a=2\");break;\n");
	printf("    case 3:printf(\"a=3\");break;\n");
	printf("    default:printf(\"a=0\");break;\n");
	printf("}\n");
	printf("ע�����a=1�������a=1�����a=2�������a=2�����a=3�������a=3�����a������1��2��3�������a=0��\n");
	getchar();
	rewind(stdin);
}
void m2_3_5(void) {  //5.goto���
	system("cls");
	printf("\n\n    goto���\n\n");
	printf("goto ���;\n");
	printf("ע����ת����Ŵ�ִ�С�\n");
	printf("����\n");
	printf("goto a;\n");
	printf("printf(\"a\");\n");
	printf("a:printf(\"b\");\n");
	printf("ע�����b��\n");
	getchar();
	rewind(stdin);
}
void m2_3_6(void) {  //6.break���
	system("cls");
	printf("\n\n    break���\n\n");
	printf("break;\n");
	printf("ע��������ǰѭ����\n");
	printf("����\n");
	printf("for(i=0;i<10;i++)\n");
	printf("{\n");
	printf("    if(i==5)\n");
	printf("        break;\n");
	printf("    printf(\"%d\",i);\n");
	printf("}\n");
	printf("ע�����01234��\n");
	getchar();
	rewind(stdin);
}
void m2_3_7(void) {  //7.continue���
	system("cls");
	printf("\n\n    continue���\n\n");
	printf("continue;\n");
	printf("ע��������ǰѭ����\n");
	printf("����\n");
	printf("for(i=0;i<10;i++)\n");
	printf("{\n");
	printf("    if(i==5)\n");
	printf("        continue;\n");
	printf("    printf(\"%d\",i);\n");
	printf("}\n");
	printf("ע�����01236789��\n");
	getchar();
	rewind(stdin);
}