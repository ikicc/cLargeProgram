//menu2_1.cpp
#include <stdio.h>
#include <iostream>
void m2_1_1(void) {    //1. 数据分类——肖洪生 

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C数据分类 \n\n  ");
	printf("分为 整形 int ,实型 float，字符型 char\n");
	printf("\t  int又分为 short、int、long \n");
	printf(" 每种整形又分为 signed和unsigned \n");
	printf("故整形细分有六种");
    getchar();
}
void m2_1_2(void) {    //2. 取值范围
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C取值范围 \n\n  ");
	printf("整形取值范围：\n");
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
void m2_1_3(void) {    //3. 存储字节
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C存储字节 \n\n  ");
	printf("整形存储字节：\n");
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
void m2_1_4(void){      //4.算数算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C算数算符 \n\n  ");
	printf("算数算符：\n");
	printf("加法：+\n");
	printf("减法：-\n");
	printf("乘法：*\n");
	printf("除法：/\n");
	printf("求余：%%\n");
	printf("自加：++\n");
	printf("自减：--\n");
	getchar();
}
void m2_1_5(void){      //5.类型转换
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C类型转换 \n\n  ");
	printf("类型转换：\n");
	printf("强制类型转换：(类型名)表达式\n");
	printf("自动类型转换：\n");
	printf("1.当两个操作数中有一个为double型时，另一个操作数转换为double型\n");
	printf("2.当两个操作数中有一个为float型时，另一个操作数转换为float型\n");
	printf("3.当两个操作数中有一个为long型时，另一个操作数转换为long型\n");
	printf("4.当两个操作数中有一个为unsigned int型时，另一个操作数转换为unsigned int型\n");
	printf("5.当两个操作数中有一个为int型时，另一个操作数转换为int型\n");
	printf("6.当两个操作数中有一个为short型时，另一个操作数转换为short型\n");
	printf("7.当两个操作数中有一个为char型时，另一个操作数转换为char型\n");
	getchar();
}
void m2_1_6(void) {     //6. I/O类型控制
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C I/O类型控制 \n\n  ");
	printf("I/O类型控制：\n"); 
	//格式化输入/输出函数
	printf("格式化输入/输出函数：\n");
	printf("printf(\"格式控制字符串\",输出项列表)\n");
	printf("scanf(\"格式控制字符串\",&输入项列表)\n");
	//标准化输入/输出函数
	printf("标准化输入/输出函数：\n");
	printf("getchar()  //从键盘输入一个字符\n");
	printf("putchar()  //向显示器输出一个字符\n");
	printf("gets()     //从键盘输入一个字符串\n");
	printf("puts()     //向显示器输出一个字符串\n");
	getchar();
}
void m2_1_7(void) {  //7.printf函数
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C printf函数 \n\n  ");
	printf("printf函数：\n");
	printf("printf(\"%%d\",a);  //输出十进制整数\n");
	printf("printf(\"%%o\",a);  //输出八进制整数\n");
	printf("printf(\"%%x\",a);  //输出十六进制整数\n");
	printf("printf(\"%%f\",a);  //输出浮点数\n");
	printf("printf(\"%%e\",a);  //输出科学计数法\n");
	printf("printf(\"%%c\",a);  //输出字符\n");
	printf("printf(\"%%s\",a);  //输出字符串\n");
	printf("printf(\"%%p\",a);  //输出指针\n");
	printf("printf(\"%%u\",a);  //输出无符号十进制整数\n");
	printf("printf(\"%%g\",a);  //输出浮点数%%e或%%f\n");
	printf("printf(\"%%i\",a);  //输出十进制、八进制、十六进制整数\n");
	printf("printf(\"%%hd\",a);  //输出短整数\n");
	printf("printf(\"%%ld\",a);  //输出长整数\n");
	printf("printf(\"%%lu\",a);  //输出无符号长整数\n");
	printf("printf(\"%%le\",a);  //输出长浮点数\n");
	printf("printf(\"%%lf\",a);  //输出双精度浮点数\n");
	printf("printf(\"%%c\",a);  //输出字符\n");
	printf("printf(\"%%s\",a);  //输出字符串\n");
	printf("printf(\"%%p\",a);  //输出指针\n");
	getchar();
}
void m2_1_8(void) {  //8.scanf()函数
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C scanf函数 \n\n  ");
	printf("scanf函数：\n");
	printf("scanf(\"%%d\",&a);  //输入十进制整数\n");
	printf("scanf(\"%%o\",&a);  //输入八进制整数\n");
	printf("scanf(\"%%x\",&a);  //输入十六进制整数\n");
	printf("scanf(\"%%f\",&a);  //输入浮点数\n");
	printf("scanf(\"%%e\",&a);  //输入科学计数法\n");
	printf("scanf(\"%%c\",&a);  //输入字符\n");
	printf("scanf(\"%%s\",&a);  //输入字符串\n");
	printf("scanf(\"%%p\",&a);  //输入指针\n");
	printf("scanf(\"%%u\",&a);  //输入无符号十进制整数\n");
	printf("scanf(\"%%g\",&a);  //输入浮点数%%e或%%f\n");
	printf("scanf(\"%%i\",&a);  //输入十进制、八进制、十六进制整数\n");
	printf("scanf(\"%%hd\",&a);  //输入短整数\n");
	printf("scanf(\"%%ld\",&a);  //输入长整数\n");
	printf("scanf(\"%%lu\",&a);  //输入无符号长整数\n");
	printf("scanf(\"%%le\",&a);  //输入长浮点数\n");
	printf("scanf(\"%%lf\",&a);  //输入双精度浮点数\n");
	printf("scanf(\"%%c\",&a);  //输入字符\n");
	printf("scanf(\"%%s\",&a);  //输入字符串\n");
	printf("scanf(\"%%p\",&a);  //输入指针\n");
	getchar();
}
void m2_1_9(void) {   //9.字符I/O
	system("cls");     //调用系统命令，清屏
	printf("\n\n    C 字符I/O \n\n  ");
	printf("字符I/O：\n");
	printf("getchar();\n");
	printf("putchar();\n");
	printf("gets();\n");
	printf("puts();\n");
	getchar();
}