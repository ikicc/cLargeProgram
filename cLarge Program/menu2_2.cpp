//menu2_2.cpp -- 2.2.运算符
#include <stdio.h>
#include <iostream>
void m2_2_1(void) {   //1.程序结构
	system("cls");
	printf("\n\n    程序结构\n\n");
	printf("程序结构：程序由函数组成，函数由语句组成，语句由表达式组成。\n");
	printf("例：\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c;\n");
	printf("    a=1;\n");
	printf("    b=2;\n");
	printf("    c=a+b;\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("注：程序由main函数组成，main函数由语句组成，语句由表达式组成。\n");
	getchar();
	//清空输入缓冲区
    rewind(stdin);

}
void m2_2_2(void) {   //2.语句与复合
	system("cls");
	printf("\n\n    语句与复合\n\n");
	printf("语句：语句是C语言程序的基本单位，语句由表达式组成。\n");
	printf("例：\n");
	printf("a=1;\n");
	printf("注：a=1为表达式，a=1;为语句。\n");
	printf("复合语句：用花括号括起来的语句序列。\n");
	printf("例：\n");
	printf("{\n");
	printf("    a=1;\n");
	printf("    b=2;\n");
	printf("    c=a+b;\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("}\n");
	printf("注：上述语句序列为复合语句。\n");
	getchar();
	rewind(stdin);

}
void m2_2_3(void) {   //3.ASCll码
	system("cls");
	printf("\n\n    ASCll码\n\n");
	printf("ASCll码：计算机内部用二进制数表示字符，每个字符都有一个对应的二进制数。\n");
	printf("例：\n");//ASCll码以10进制数表示
	printf("字符    ASCll码\n");
	printf("A       65\n");
	printf("B       66\n");
	printf("C       67\n");
	printf("D       68\n");
	printf("E       69\n");
	printf("F       70\n");
	printf("G       71\n");
	printf("H       72\n");
	printf("I       73\n");
	printf("J       74\n");
	printf("K       75\n");
	printf("L       76\n");
	printf("M       77\n");
	printf("N       78\n");
	printf("O       79\n");
	printf("P       80\n");
	printf("Q       81\n");
	printf("R       82\n");
	printf("S       83\n");
	printf("T       84\n");
	printf("U       85\n");
	printf("V       86\n");
	printf("W       87\n");
	printf("X       88\n");
	printf("Y       89\n");
	printf("Z       90\n");
	printf("注：上述为大写字母的ASCll码。\n");
	getchar();
	rewind(stdin);
}
void m2_2_4(void) {   //4.周长与面积
	system("cls");
	printf("\n\n    周长与面积\n\n");
	printf("周长与面积：\n");
	printf("周长=2*（长+宽）\n");
	printf("面积=长*宽\n");
	printf("例：\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    int a,b,c,s;\n");
	printf("    a=3;\n");
	printf("    b=4;\n");
	printf("    c=2*(a+b);\n");
	printf("    s=a*b;\n");
	printf("    printf(\"c=%d\\n\",c);\n");
	printf("    printf(\"s=%d\\n\",s);\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("注：上述程序计算长为3，宽为4的矩形的周长与面积。\n");
	getchar();
	rewind(stdin);
}
void m2_2_5(void) {   //5.输出图案
	system("cls");
	printf("\n\n    输出图案\n\n");
	printf("输出图案：\n");
	printf("例：\n");
	printf("int main(void)\n");
	printf("{\n");
	printf("    printf(\"*****\\n\");\n"); 
	printf("    printf(\"*****\\n\");\n");
	printf("    printf(\"*****\\n\");\n");
	printf("    printf(\"*****\\n\");\n");
	printf("    printf(\"*****\\n\");\n");
	printf("    return 0;\n");
	printf("}\n");
	printf("注：上述程序输出一个5行5列的星号图案。\n");
	getchar();
	rewind(stdin);
}
