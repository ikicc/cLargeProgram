//menu2_1.cpp
#include <stdio.h>
#include <iostream>
void m2_1_1(void) {    //1. ���ݷ��ࡪ��Ф���� 

	system("cls");     //����ϵͳ�������
	printf("\n\n    C���ݷ��� \n\n  ");
	printf("��Ϊ ���� int ,ʵ�� float���ַ��� char\n");
	printf("\t  int�ַ�Ϊ short��int��long \n");
	printf(" ÿ�������ַ�Ϊ signed��unsigned \n");
	printf("������ϸ��������");
    getchar();
}
void m2_1_2(void) {    //2. ȡֵ��Χ
	system("cls");     //����ϵͳ�������
	printf("\n\n    Cȡֵ��Χ \n\n  ");
	printf("����ȡֵ��Χ��\n");
	printf("signed char: %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: %d ~ %d\n", 0, UCHAR_MAX);
	printf("signed short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %d ~ %d\n", 0, USHRT_MAX);
	printf("signed int: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int: %d ~ %u\n", 0, UINT_MAX);
	printf("signed long: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: %d ~ %lu\n", 0, ULONG_MAX);
	printf("float: %e ~ %e\n", FLT_MIN, FLT_MAX);
	printf("double: %e ~ %e\n", DBL_MIN, DBL_MAX);
	printf("long double: %Le ~ %Le\n", LDBL_MIN, LDBL_MAX);
	getchar();
}
void m2_1_3(void) {    //3. �洢�ֽ�
	system("cls");     //����ϵͳ�������
	printf("\n\n    C�洢�ֽ� \n\n  ");
	printf("���δ洢�ֽڣ�\n");
	printf("signed char: %d\n", sizeof(signed char));
	printf("unsigned char: %d\n", sizeof(unsigned char));
	printf("signed short: %d\n", sizeof(signed short));
	printf("unsigned short: %d\n", sizeof(unsigned short));
	printf("signed int: %d\n", sizeof(signed int));
	printf("unsigned int: %d\n", sizeof(unsigned int));
	printf("signed long: %d\n", sizeof(signed long));
	printf("unsigned long: %d\n", sizeof(unsigned long));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("long double: %d\n", sizeof(long double));
	getchar();
}
void m2_1_4(void){      //4.�������
	system("cls");     //����ϵͳ�������
	printf("\n\n    C������� \n\n  ");
	printf("���������\n");
	printf("�ӷ���+\n");
	printf("������-\n");
	printf("�˷���*\n");
	printf("������/\n");
	printf("���ࣺ%%\n");
	printf("�Լӣ�++\n");
	printf("�Լ���--\n");
	getchar();
}
void m2_1_5(void){      //5.����ת��
	system("cls");     //����ϵͳ�������
	printf("\n\n    C����ת�� \n\n  ");
	printf("����ת����\n");
	printf("ǿ������ת����(������)���ʽ\n");
	printf("�Զ�����ת����\n");
	printf("1.����������������һ��Ϊdouble��ʱ����һ��������ת��Ϊdouble��\n");
	printf("2.����������������һ��Ϊfloat��ʱ����һ��������ת��Ϊfloat��\n");
	printf("3.����������������һ��Ϊlong��ʱ����һ��������ת��Ϊlong��\n");
	printf("4.����������������һ��Ϊunsigned int��ʱ����һ��������ת��Ϊunsigned int��\n");
	printf("5.����������������һ��Ϊint��ʱ����һ��������ת��Ϊint��\n");
	printf("6.����������������һ��Ϊshort��ʱ����һ��������ת��Ϊshort��\n");
	printf("7.����������������һ��Ϊchar��ʱ����һ��������ת��Ϊchar��\n");
	getchar();
}
void m2_1_6(void) {     //6. I/O���Ϳ���
	system("cls");     //����ϵͳ�������
	printf("\n\n    C I/O���Ϳ��� \n\n  ");
	printf("I/O���Ϳ��ƣ�\n"); 
	//��ʽ������/�������
	printf("��ʽ������/���������\n");
	printf("printf(\"��ʽ�����ַ���\",������б�)\n");
	printf("scanf(\"��ʽ�����ַ���\",&�������б�)\n");
	//��׼������/�������
	printf("��׼������/���������\n");
	printf("getchar()  //�Ӽ�������һ���ַ�\n");
	printf("putchar()  //����ʾ�����һ���ַ�\n");
	printf("gets()     //�Ӽ�������һ���ַ���\n");
	printf("puts()     //����ʾ�����һ���ַ���\n");
	getchar();
}
void m2_1_7(void) {  //7.printf����
	system("cls");     //����ϵͳ�������
	printf("\n\n    C printf���� \n\n  ");
	printf("printf������\n");
	printf("printf(\"%%d\",a);  //���ʮ��������\n");
	printf("printf(\"%%o\",a);  //����˽�������\n");
	printf("printf(\"%%x\",a);  //���ʮ����������\n");
	printf("printf(\"%%f\",a);  //���������\n");
	printf("printf(\"%%e\",a);  //�����ѧ������\n");
	printf("printf(\"%%c\",a);  //����ַ�\n");
	printf("printf(\"%%s\",a);  //����ַ���\n");
	printf("printf(\"%%p\",a);  //���ָ��\n");
	printf("printf(\"%%u\",a);  //����޷���ʮ��������\n");
	printf("printf(\"%%g\",a);  //���������%%e��%%f\n");
	printf("printf(\"%%i\",a);  //���ʮ���ơ��˽��ơ�ʮ����������\n");
	printf("printf(\"%%hd\",a);  //���������\n");
	printf("printf(\"%%ld\",a);  //���������\n");
	printf("printf(\"%%lu\",a);  //����޷��ų�����\n");
	printf("printf(\"%%le\",a);  //�����������\n");
	printf("printf(\"%%lf\",a);  //���˫���ȸ�����\n");
	printf("printf(\"%%c\",a);  //����ַ�\n");
	printf("printf(\"%%s\",a);  //����ַ���\n");
	printf("printf(\"%%p\",a);  //���ָ��\n");
	getchar();
}
void m2_1_8(void) {  //8.scanf()����
	system("cls");     //����ϵͳ�������
	printf("\n\n    C scanf���� \n\n  ");
	printf("scanf������\n");
	printf("scanf(\"%%d\",&a);  //����ʮ��������\n");
	printf("scanf(\"%%o\",&a);  //����˽�������\n");
	printf("scanf(\"%%x\",&a);  //����ʮ����������\n");
	printf("scanf(\"%%f\",&a);  //���븡����\n");
	printf("scanf(\"%%e\",&a);  //�����ѧ������\n");
	printf("scanf(\"%%c\",&a);  //�����ַ�\n");
	printf("scanf(\"%%s\",&a);  //�����ַ���\n");
	printf("scanf(\"%%p\",&a);  //����ָ��\n");
	printf("scanf(\"%%u\",&a);  //�����޷���ʮ��������\n");
	printf("scanf(\"%%g\",&a);  //���븡����%%e��%%f\n");
	printf("scanf(\"%%i\",&a);  //����ʮ���ơ��˽��ơ�ʮ����������\n");
	printf("scanf(\"%%hd\",&a);  //���������\n");
	printf("scanf(\"%%ld\",&a);  //���볤����\n");
	printf("scanf(\"%%lu\",&a);  //�����޷��ų�����\n");
	printf("scanf(\"%%le\",&a);  //���볤������\n");
	printf("scanf(\"%%lf\",&a);  //����˫���ȸ�����\n");
	printf("scanf(\"%%c\",&a);  //�����ַ�\n");
	printf("scanf(\"%%s\",&a);  //�����ַ���\n");
	printf("scanf(\"%%p\",&a);  //����ָ��\n");
	getchar();
}
void m2_1_9(void) {   //9.�ַ�I/O
	system("cls");     //����ϵͳ�������
	printf("\n\n    C �ַ�I/O \n\n  ");
	printf("�ַ�I/O��\n");
	printf("getchar();\n");
	printf("putchar();\n");
	printf("gets();\n");
	printf("puts();\n");
	getchar();
}