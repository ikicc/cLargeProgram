//menu2_5.cpp -- 2.5函数
#include <stdio.h>
#include <iostream>
void m2_5_1(void) {   //1.函数的定义
	system("cls");
	printf("\n\n    函数的定义\n\n");
	printf("函数定义的一般形式为：\n");
	printf("类型说明符 函数名(参数表)\n");
	printf("{\n");
	printf("    函数体\n");
	printf("}\n");
	printf("注：函数名是标识符，参数表可以为空。\n");
	printf("例：\n");
	printf("int max(int a,int b)\n");
	printf("{\n");
	printf("    if(a>b)\n");
	printf("        return a;\n");
	printf("    else\n");
	printf("        return b;\n");
	printf("}\n");
	printf("注：max是函数名，a和b是参数，函数体中的语句是函数的功能。\n");
	getchar();
	rewind(stdin);

}
void m2_5_2(void) {   //2.函数的调用
	system("cls");
	printf("\n\n    函数的调用\n\n");
	printf("函数调用的一般形式为：\n");
	printf("函数名(参数表);\n");
	printf("注：函数名是标识符，参数表可以为空。\n");
	printf("例：\n");
	printf("max(a,b);\n");
	printf("注：max是函数名，a和b是参数。\n");
	getchar();
	rewind(stdin);
}
void m2_5_3(void) {   //3.函数的参数传递
	system("cls");
	printf("\n\n    函数的参数传递\n\n");
	printf("函数的参数传递有两种方式：\n");
	printf("1.值传递：实参的值传递给形参。\n");
	printf("2.地址传递：实参的地址传递给形参。\n");
	printf("注：C语言中只有值传递，没有地址传递。\n");
	printf("例：\n");
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
	printf("注：max函数中的a和b是形参，main函数中的a和b是实参。\n");
	getchar();
	rewind(stdin);
}
void m2_5_4(void) {   //4.函数的返回值
	system("cls");
	printf("\n\n    函数的返回值\n\n");
	printf("函数的返回值有两种方式：\n");
	printf("1.值返回：函数的返回值通过return语句返回。\n");
	printf("2.地址返回：函数的返回值通过指针返回。\n");
	printf("注：C语言中只有值返回，没有地址返回。\n");
	printf("例：\n");
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
	printf("注：max函数中的return a;和return b;是值返回，main函数中的c=max(a,b);是值传递。\n");
	getchar();
	rewind(stdin);
}
void m2_5_5(void) {   //5.函数的递归调用
	system("cls");
	printf("\n\n    函数的递归调用\n\n");
	printf("函数的递归调用是指函数调用自身。\n");
	printf("例：\n");
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
	printf("    printf(\"请输入一个整数：\");\n");
	printf("    scanf(\"%d\",&n);\n");
	printf("    printf(\"%d!=%d\\n\",n,fact(n));\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("注：fact函数中的fact(n-1)是函数的递归调用。\n");
	getchar();
	rewind(stdin);
}
void m2_5_6(void) {   //6.函数的声明
	system("cls");
	printf("\n\n    函数的声明\n\n");
	printf("函数的声明是指在函数调用之前声明函数的类型和参数表。\n");
	printf("例：\n");
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
	printf("注：max函数的声明在main函数之前。\n");
	getchar();
	rewind(stdin);
}
void m2_5_7(void) {    //7.函数的声明
	system("cls");
	printf("\n\n    函数的声明\n\n");
	printf("函数的声明是指在函数调用之前声明函数的类型和参数表。\n");
	printf("例：\n");
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
	printf("注：max函数的声明在main函数之前。\n");
	getchar();
	rewind(stdin);

}
