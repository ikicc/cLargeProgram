//menu2_3.cpp -- 2.3分支结构
#include <stdio.h>
#include <iostream>
void m2_3_1(void) { //1.if语句
	system("cls");
	printf("\n\n    if语句\n\n");
	printf("if(条件表达式)\n");
	printf("    语句1;\n");
	printf("else\n");
	printf("    语句2;\n");
	printf("注：条件表达式为真时执行语句1，否则执行语句2。\n");
	printf("例：\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else\n");
	printf("    c=b;\n");
	printf("注：如果a>b为真，则执行c=a，否则执行c=b。\n");
	getchar();
	rewind(stdin);
}

void m2_3_2(void) {  //2.if-else语句
	system("cls");
	printf("\n\n    if-else语句\n\n");
	printf("if(条件表达式)\n");
	printf("    语句1;\n");
	printf("else if(条件表达式)\n");
	printf("    语句2;\n");
	printf("else\n");
	printf("    语句3;\n");
	printf("注：条件表达式为真时执行语句1，否则判断条件表达式2，为真时执行语句2，否则执行语句3。\n");
	printf("例：\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else if(a<b)\n");
	printf("    c=b;\n");
	printf("else\n");
	printf("    c=0;\n");
	printf("注：如果a>b为真，则执行c=a，否则判断a<b，为真则执行c=b，否则执行c=0。\n");
	getchar();
	rewind(stdin);
}
void m2_3_3(void) {  //3.if-else if语句
	system("cls");
	printf("\n\n    if-else if语句\n\n");
	printf("if(条件表达式)\n");
	printf("    语句1;\n");
	printf("else if(条件表达式)\n");
	printf("    语句2;\n");
	printf("else if(条件表达式)\n");
	printf("    语句3;\n");
	printf("else\n");
	printf("    语句4;\n");
	printf("注：条件表达式为真时执行语句1，否则判断条件表达式2，为真时执行语句2，否则判断条件表达式3，为真时执行语句3，否则执行语句4。\n");
	printf("例：\n");
	printf("if(a>b)\n");
	printf("    c=a;\n");
	printf("else if(a<b)\n");
	printf("    c=b;\n");
	printf("else if(a==b)\n");
	printf("    c=0;\n");
	printf("else\n");
	printf("    c=-1;\n");
	printf("注：如果a>b为真，则执行c=a，否则判断a<b，为真则执行c=b，否则判断a==b，为真则执行c=0，否则执行c=-1。\n");
	getchar();
	rewind(stdin);
}
void m2_3_4(void) {  //4.switch语句
	system("cls");
	printf("\n\n    switch语句\n\n");
	printf("switch(表达式)\n");
	printf("{\n");
	printf("    case 常量1:语句1;\n");
	printf("    case 常量2:语句2;\n");
	printf("    case 常量3:语句3;\n");
	printf("    ……\n");
	printf("    default:语句n;\n");
	printf("}\n");
	printf("注：表达式的值与常量1、常量2、常量3……进行比较，如果相等，则执行相应的语句，如果都不相等，则执行default后的语句。\n");
	printf("例：\n");
	printf("switch(a)\n");
	printf("{\n");
	printf("    case 1:printf(\"a=1\");break;\n");
	printf("    case 2:printf(\"a=2\");break;\n");
	printf("    case 3:printf(\"a=3\");break;\n");
	printf("    default:printf(\"a=0\");break;\n");
	printf("}\n");
	printf("注：如果a=1，则输出a=1，如果a=2，则输出a=2，如果a=3，则输出a=3，如果a不等于1、2、3，则输出a=0。\n");
	getchar();
	rewind(stdin);
}
void m2_3_5(void) {  //5.goto语句
	system("cls");
	printf("\n\n    goto语句\n\n");
	printf("goto 标号;\n");
	printf("注：跳转到标号处执行。\n");
	printf("例：\n");
	printf("goto a;\n");
	printf("printf(\"a\");\n");
	printf("a:printf(\"b\");\n");
	printf("注：输出b。\n");
	getchar();
	rewind(stdin);
}
void m2_3_6(void) {  //6.break语句
	system("cls");
	printf("\n\n    break语句\n\n");
	printf("break;\n");
	printf("注：跳出当前循环。\n");
	printf("例：\n");
	printf("for(i=0;i<10;i++)\n");
	printf("{\n");
	printf("    if(i==5)\n");
	printf("        break;\n");
	printf("    printf(\"%d\",i);\n");
	printf("}\n");
	printf("注：输出01234。\n");
	getchar();
	rewind(stdin);
}
void m2_3_7(void) {  //7.continue语句
	system("cls");
	printf("\n\n    continue语句\n\n");
	printf("continue;\n");
	printf("注：跳过当前循环。\n");
	printf("例：\n");
	printf("for(i=0;i<10;i++)\n");
	printf("{\n");
	printf("    if(i==5)\n");
	printf("        continue;\n");
	printf("    printf(\"%d\",i);\n");
	printf("}\n");
	printf("注：输出01236789。\n");
	getchar();
	rewind(stdin);
}