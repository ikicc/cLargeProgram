//menu2_7.cpp --2.7 指针
#include <stdio.h>
#include <iostream>
void m2_7_1(void) {   //1.指针的定义
	system("cls");
	printf("\n\n    指针的定义\n\n");
	printf("指针是一个变量，其值为另一个变量的地址。\n");
	printf("指针的定义形式为：\n");
	printf("类型说明符 *指针名;\n");
	printf("注：类型说明符是指针所指向的变量的类型，指针名是标识符。\n");
	printf("例：\n");
	printf("int *p;\n");
	printf("注：p是指针名，int *是类型说明符。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_2(void) {   //2.指针的使用
	system("cls");
	printf("\n\n    指针的使用\n\n");
	printf("指针的使用形式为：\n");
	printf("指针名 = &变量名;\n");
	printf("注：&是取地址运算符。\n");
	printf("例：\n");
	printf("int a;\n");
	printf("int *p;\n");
	printf("p = &a;\n");
	printf("注：p是指针名，&a是a的地址。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_3(void) {   //3.指针的输入输出
	system("cls");
	printf("\n\n    指针的输入输出\n\n");
	printf("指针的输入输出形式为：\n");
	printf("printf(\"%%p\",指针名);\n");
	printf("scanf(\"%%p\",&指针名);\n");
	printf("注：%%p是输出指针的格式控制符，&是取地址运算符。\n");
	printf("例：\n");
	printf("int a;\n");
	printf("int *p;\n");
	printf("p = &a;\n");
	printf("printf(\"%%p\",p);\n");
	printf("scanf(\"%%p\",&p);\n");
	printf("注：p是指针名，&p是p的地址。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_4(void) {   //4.指针与数组
	system("cls");
	printf("\n\n    指针与数组\n\n");
	printf("指针与数组的关系：\n");
	printf("数组名是数组的首地址，指针可以指向数组的首地址。\n");
	printf("例：\n");
	printf("int a[10];\n");
	printf("int *p;\n");
	printf("p = a;\n");
	printf("注：a是数组名，p是指针名。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_5(void) {   //5.指针与函数
	system("cls");
	printf("\n\n    指针与函数\n\n");
	printf("指针与函数的关系：\n");
	printf("指针可以指向函数。\n");
	printf("例：\n");
	printf("int *p;\n");
	printf("p = main;\n");
	printf("注：p是指针名，main是main函数的地址。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_6(void) {   //6.指针与指针
	system("cls");
	printf("\n\n    指针与指针\n\n");
	printf("指针与指针的关系：\n");
	printf("指针可以指向指针。\n");
	printf("例：\n");
	printf("int *p;\n");
	printf("int **q;\n");
	printf("q = &p;\n");
	printf("注：p是指针名，q是指针名，&p是p的地址。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}
void m2_7_7(void) {   //7.main函数的参数
	system("cls");
	printf("\n\n    main函数的参数\n\n");
	printf("main函数的参数形式为：\n");
	printf("int main(int argc,char *argv[])\n");
	printf("注：argc是参数个数，argv是参数数组。\n");
	printf("例：\n");
	printf("int main(int argc,char *argv[])\n");
	printf("注：argc是参数个数，argv是参数数组。\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);
}