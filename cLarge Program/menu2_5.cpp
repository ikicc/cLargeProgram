//menu2_5.cpp -- 2.5����
#include <stdio.h>
#include <iostream>
void m2_5_1(void) {   //1.�����Ķ���
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
	rewind(stdin);

}
void m2_5_2(void) {   //2.�����ĵ���
	system("cls");
	printf("\n\n    �����ĵ���\n\n");
	printf("�������õ�һ����ʽΪ��\n");
	printf("������(������);\n");
	printf("ע���������Ǳ�ʶ�������������Ϊ�ա�\n");
	printf("����\n");
	printf("max(a,b);\n");
	printf("ע��max�Ǻ�������a��b�ǲ�����\n");
	getchar();
	rewind(stdin);
}
void m2_5_3(void) {   //3.�����Ĳ�������
	system("cls");
	printf("\n\n    �����Ĳ�������\n\n");
	printf("�����Ĳ������������ַ�ʽ��\n");
	printf("1.ֵ���ݣ�ʵ�ε�ֵ���ݸ��βΡ�\n");
	printf("2.��ַ���ݣ�ʵ�εĵ�ַ���ݸ��βΡ�\n");
	printf("ע��C������ֻ��ֵ���ݣ�û�е�ַ���ݡ�\n");
	printf("����\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c;\n");
	printf("    a=5;\n");
	printf("    b=6;\n");
	printf("    c=max(a,b);\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("ע��max�����е�a��b���βΣ�main�����е�a��b��ʵ�Ρ�\n");
	getchar();
	rewind(stdin);
}
void m2_5_4(void) {   //4.�����ķ���ֵ
	system("cls");
	printf("\n\n    �����ķ���ֵ\n\n");
	printf("�����ķ���ֵ�����ַ�ʽ��\n");
	printf("1.ֵ���أ������ķ���ֵͨ��return��䷵�ء�\n");
	printf("2.��ַ���أ������ķ���ֵͨ��ָ�뷵�ء�\n");
	printf("ע��C������ֻ��ֵ���أ�û�е�ַ���ء�\n");
	printf("����\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c;\n");
	printf("    a=5;\n");
	printf("    b=6;\n");
	printf("    c=max(a,b);\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("ע��max�����е�return a;��return b;��ֵ���أ�main�����е�c=max(a,b);��ֵ���ݡ�\n");
	getchar();
	rewind(stdin);
}
void m2_5_5(void) {   //5.�����ĵݹ����
	system("cls");
	printf("\n\n    �����ĵݹ����\n\n");
	printf("�����ĵݹ������ָ������������\n");
	printf("����\n");
	printf("int fact(int n)\n");
	printf("{\n");
	printf("    if(n==0)\n");
	printf("        return 1;\n");
	printf("    else\n");
	printf("        return n*fact(n-1);\n");
	printf("}\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int n;\n");
	printf("    printf(\"������һ��������\");\n");
	printf("    scanf(\"%d\",&n);\n");
	printf("    printf(\"%d!=%d\\n\",n,fact(n));\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("ע��fact�����е�fact(n-1)�Ǻ����ĵݹ���á�\n");
	getchar();
	rewind(stdin);
}
void m2_5_6(void) {   //6.����������
	system("cls");
	printf("\n\n    ����������\n\n");
	printf("������������ָ�ں�������֮ǰ�������������ͺͲ�����\n");
	printf("����\n");
	printf("int max(int a,int b);\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c;\n");
	printf("    a=5;\n");
	printf("    b=6;\n");
	printf("    c=max(a,b);\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("ע��max������������main����֮ǰ��\n");
	getchar();
	rewind(stdin);
}
void m2_5_7(void) {    //7.����������
	system("cls");
	printf("\n\n    ����������\n\n");
	printf("������������ָ�ں�������֮ǰ�������������ͺͲ�����\n");
	printf("����\n");
	printf("int max(int a,int b);\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c;\n");
	printf("    a=5;\n");
	printf("    b=6;\n");
	printf("    c=max(a,b);\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("ע��max������������main����֮ǰ��\n");
	getchar();
	rewind(stdin);

}
