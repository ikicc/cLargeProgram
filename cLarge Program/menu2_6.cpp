#include <stdio.h>
#include <iostream>
/*void dispMenu2_6(void) {
	local(2, 20);  printf("C����ṹ\n");
	local(1, 24);  printf("1. ����Ķ���\n");
	colum_n(24);  printf("2. ����ĳ�ʼ��\n");
	colum_n(24);  printf("3. ���������\n");
	colum_n(24);  printf("4. ������������\n");
	colum_n(24);  printf("5. һά����\n");
	colum_n(24);  printf("6. ��ά����\n");
	colum_n(24);  printf("7. �ַ�����\n");
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
*/

//��˳���������֪ʶ��
/*void m2_5_1(void) {   //1.�����Ķ���
	system("cls");
	printf("\n\n    �����Ķ���\n\n");
	printf("���������һ����ʽΪ��\n");
	printf("����˵���� ������(������)\n");
	printf("{\n");
	printf("    ������\n");
	printf("}\n");
	printf("ע���������Ǳ�ʶ�������������Ϊ�ա�\n");
	printf("����\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("ע��max�Ǻ�������a��b�ǲ������������е�����Ǻ����Ĺ��ܡ�\n");
	getchar();
*/
void m2_6_1(void) {   //1.����Ķ���
	system("cls");
	printf("\n\n    ����Ķ���\n\n");
	printf("������һ�������ͬ���͵�����Ԫ�صļ��ϡ�\n");
	printf("����Ķ�����ʽΪ��\n");
	printf("����˵���� ������[�������ʽ];\n");
	printf("ע���������Ǳ�ʶ�����������ʽ������ĳ��ȡ�\n");
	printf("����\n");
	printf("int a[10];\n");
	printf("ע��a����������10������ĳ��ȡ�\n");
	getchar();
}
void m2_6_2(void) {   //2.����ĳ�ʼ��
	system("cls");
	printf("\n\n    ����ĳ�ʼ��\n\n");
	printf("����ĳ�ʼ����ʽΪ��\n");
	printf("����˵���� ������[�������ʽ]={�������ʽ,�������ʽ,...};\n");
	printf("ע���������Ǳ�ʶ�����������ʽ������ĳ��ȣ��������ʽ�������Ԫ�ء�\n");
	printf("����\n");
	printf("int a[10]={1,2,3,4,5,6,7,8,9,10};\n");
	printf("ע��a����������10������ĳ��ȣ�1,2,3,4,5,6,7,8,9,10�������Ԫ�ء�\n");
	getchar();
}
void m2_6_3(void) {   //3.���������
	system("cls");
	printf("\n\n    ���������\n\n");
	printf("�����������ʽΪ��\n");
	printf("������[�������ʽ];\n");
	printf("ע���������Ǳ�ʶ�����������ʽ��������±ꡣ\n");
	printf("����\n");
	printf("int a[10]={1,2,3,4,5,6,7,8,9,10};\n");
	printf("a[0]=a[1]+a[2];\n");
	printf("ע��a����������10������ĳ��ȣ�1,2,3,4,5,6,7,8,9,10�������Ԫ�ء�\n");
	getchar();
}
void m2_6_4(void) {   //4.������������
	system("cls");
	printf("\n\n    ������������\n\n");
	printf("��������������ʽΪ��\n");
	printf("scanf(\"��ʽ���Ʒ�\",&������[�������ʽ]);\n");
	printf("printf(\"��ʽ���Ʒ�\",������[�������ʽ]);\n");
	printf("ע���������Ǳ�ʶ�����������ʽ��������±ꡣ\n");
	printf("����\n");
	printf("int a[10];\n");
	printf("scanf(\"%d\",&a[0]);\n");
	printf("printf(\"%d\",a[0]);\n");
	printf("ע��a����������10������ĳ��ȣ�0��������±ꡣ\n");
	getchar();
}
void m2_6_5(void) {   //5.һά����
	system("cls");
	printf("\n\n    һά����\n\n");
	printf("һά����Ķ�����ʽΪ��\n");
	printf("����˵���� ������[�������ʽ];\n");
	printf("ע���������Ǳ�ʶ�����������ʽ������ĳ��ȡ�\n");
	printf("����\n");
	printf("int a[10];\n");
	printf("ע��a����������10������ĳ��ȡ�\n");
	getchar();
}
void m2_6_6(void) {   //6.��ά����
	system("cls");
	printf("\n\n    ��ά����\n\n");
	printf("��ά����Ķ�����ʽΪ��\n");
	printf("����˵���� ������[�������ʽ][�������ʽ];\n");
	printf("ע���������Ǳ�ʶ�����������ʽ��������������������ʽ�������������\n");
	printf("����\n");
	printf("int a[10][10];\n");
	printf("ע��a����������10�������������10�������������\n");
	getchar();
}
void m2_6_7(void) {   //7.�ַ�����
	system("cls");
	printf("\n\n    �ַ�����\n\n");
	printf("�ַ�����Ķ�����ʽΪ��\n");
	printf("����˵���� ������[�������ʽ];\n");
	printf("ע���������Ǳ�ʶ�����������ʽ������ĳ��ȡ�\n");
	printf("����\n");
	printf("char a[10];\n");
	printf("ע��a����������10������ĳ��ȡ�\n");
	getchar();
}
