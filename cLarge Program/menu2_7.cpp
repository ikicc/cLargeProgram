//menu2_7.cpp --2.7 ָ��
#include <stdio.h>
#include <iostream>
void m2_7_1(void) {   //1.ָ��Ķ���
	system("cls");
	printf("\n\n    ָ��Ķ���\n\n");
	printf("ָ����һ����������ֵΪ��һ�������ĵ�ַ��\n");
	printf("ָ��Ķ�����ʽΪ��\n");
	printf("����˵���� *ָ����;\n");
	printf("ע������˵������ָ����ָ��ı��������ͣ�ָ�����Ǳ�ʶ����\n");
	printf("����\n");
	printf("int *p;\n");
	printf("ע��p��ָ������int *������˵������\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_2(void) {   //2.ָ���ʹ��
	system("cls");
	printf("\n\n    ָ���ʹ��\n\n");
	printf("ָ���ʹ����ʽΪ��\n");
	printf("ָ���� = &������;\n");
	printf("ע��&��ȡ��ַ�������\n");
	printf("����\n");
	printf("int a;\n");
	printf("int *p;\n");
	printf("p = &a;\n");
	printf("ע��p��ָ������&a��a�ĵ�ַ��\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_3(void) {   //3.ָ����������
	system("cls");
	printf("\n\n    ָ����������\n\n");
	printf("ָ������������ʽΪ��\n");
	printf("printf(\"%%p\",ָ����);\n");
	printf("scanf(\"%%p\",&ָ����);\n");
	printf("ע��%%p�����ָ��ĸ�ʽ���Ʒ���&��ȡ��ַ�������\n");
	printf("����\n");
	printf("int a;\n");
	printf("int *p;\n");
	printf("p = &a;\n");
	printf("printf(\"%%p\",p);\n");
	printf("scanf(\"%%p\",&p);\n");
	printf("ע��p��ָ������&p��p�ĵ�ַ��\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_4(void) {   //4.ָ��������
	system("cls");
	printf("\n\n    ָ��������\n\n");
	printf("ָ��������Ĺ�ϵ��\n");
	printf("��������������׵�ַ��ָ�����ָ��������׵�ַ��\n");
	printf("����\n");
	printf("int a[10];\n");
	printf("int *p;\n");
	printf("p = a;\n");
	printf("ע��a����������p��ָ������\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_5(void) {   //5.ָ���뺯��
	system("cls");
	printf("\n\n    ָ���뺯��\n\n");
	printf("ָ���뺯���Ĺ�ϵ��\n");
	printf("ָ�����ָ������\n");
	printf("����\n");
	printf("int *p;\n");
	printf("p = main;\n");
	printf("ע��p��ָ������main��main�����ĵ�ַ��\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_6(void) {   //6.ָ����ָ��
	system("cls");
	printf("\n\n    ָ����ָ��\n\n");
	printf("ָ����ָ��Ĺ�ϵ��\n");
	printf("ָ�����ָ��ָ�롣\n");
	printf("����\n");
	printf("int *p;\n");
	printf("int **q;\n");
	printf("q = &p;\n");
	printf("ע��p��ָ������q��ָ������&p��p�ĵ�ַ��\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}
void m2_7_7(void) {   //7.main�����Ĳ���
	system("cls");
	printf("\n\n    main�����Ĳ���\n\n");
	printf("main�����Ĳ�����ʽΪ��\n");
	printf("int main(int argc,char *argv[])\n");
	printf("ע��argc�ǲ���������argv�ǲ������顣\n");
	printf("����\n");
	printf("int main(int argc,char *argv[])\n");
	printf("ע��argc�ǲ���������argv�ǲ������顣\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);
}