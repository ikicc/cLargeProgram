//menu2_2.cpp -- 2.2.运算符
#include <stdio.h>
#include <iostream>
void m2_2_1(void) {  //1.格式符与格式串
	system("cls");     //调用系统命令，清屏
	printf("\n\n    格式符与格式串\n\n");
	printf("%%d:整型\n");
	printf("%%f:浮点型\n");
	printf("%%c:字符型\n");
	printf("%%s:字符串型\n");
	printf("%%x:十六进制\n");
	printf("%%o:八进制\n");
	printf("%%e:科学计数法\n");
	printf("%%p:指针\n");
	printf("%%u:无符号整型\n");
	printf("%%g:浮点型\n");
	printf("%%lf:双精度浮点型\n");
	printf("%%ld:长整型\n");
	printf("%%lu:无符号长整型\n");
	printf("%%hd:短整型\n");
	printf("%%hu:无符号短整型\n");
	getchar();
}
void m2_2_2(void) {  //2.键盘输入scanf()函数
	system("cls");     //调用系统命令，清屏
	printf("\n\n    键盘输入scanf()函数\n\n");
	printf("scanf()函数的格式：\n");
	printf("scanf(\"格式串\",变量地址表);\n");
	printf("scanf()函数的功能：\n");
	printf("从键盘输入数据，按格式串的格式，将数据存入变量地址表中。\n");
	printf("scanf()函数的返回值：\n");
	printf("成功返回读入的数据项数，失败返回0。\n");
	printf("scanf()函数的注意事项：\n");
	printf("格式串中的格式符与变量地址表中的变量一一对应。\n");
	getchar();

}
void m2_2_3(void) {  //3.屏幕输出printf()函数
	system("cls");     //调用系统命令，清屏
	printf("\n\n    屏幕输出printf()函数\n\n");
	printf("printf()函数的格式：\n");
	printf("printf(\"格式串\",变量表);\n");
	printf("printf()函数的功能：\n");
	printf("按格式串的格式，将变量表中的数据输出到屏幕上。\n");
	printf("printf()函数的返回值：\n");
	printf("成功返回输出的字符数，失败返回负值。\n");
	printf("printf()函数的注意事项：\n");
	printf("格式串中的格式符与变量表中的变量一一对应。\n");
	getchar();
}
void m2_2_4(void) {  //4.算术运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    算术运算符\n\n");
	printf("加法运算符：+\n");
	printf("减法运算符：-\n");
	printf("乘法运算符：*\n");
	printf("除法运算符：/\n");
	printf("求余运算符：% \n");
	printf("自增运算符：++\n");
	printf("自减运算符：--\n");
	getchar();
}
void m2_2_5(void) {  //5.逻辑运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    逻辑运算符\n\n");
	printf("逻辑与运算符：&&\n");
	printf("逻辑或运算符：||\n");
	printf("逻辑非运算符：!\n");
	getchar();

}
void m2_2_6(void) {  //6.关系运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    关系运算符\n\n");
	printf("大于运算符：>\n");
	printf("小于运算符：<\n");
	printf("大于等于运算符：>=\n");
	printf("小于等于运算符：<=\n");
	printf("等于运算符：==\n");
	printf("不等于运算符：!=\n");
	getchar();

}
void m2_2_7(void) {  //7.位运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    位运算符\n\n");
	printf("按位与运算符：&\n");
	printf("按位或运算符：|\n");
	printf("按位异或运算符：^\n");
	printf("按位取反运算符：~\n");
	printf("左移运算符：<<\n");
	printf("右移运算符：>>\n");
	getchar();


}
void m2_2_8(void) {  //8.赋值运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    赋值运算符\n\n");
	printf("赋值运算符：=\n");
	printf("加法赋值运算符：+=\n");
	printf("减法赋值运算符：-=\n");
	printf("乘法赋值运算符：*=\n");
	printf("除法赋值运算符：/=\n");
	printf("求余赋值运算符：%=\n");
	printf("左移赋值运算符：<<=\n");
	printf("右移赋值运算符：>>=\n");
	printf("按位与赋值运算符：&=\n");
	printf("按位或赋值运算符：|=\n");
	printf("按位异或赋值运算符：^=\n");
	getchar();

}
void m2_2_9(void) {  //9.运算符优先级
	system("cls");     //调用系统命令，清屏
	printf("\n\n    运算符优先级\n\n");
	printf("优先级：\n");
	printf("1.() [] -> .\n");
	printf("2.++ -- ! ~\n");
	printf("3.* / %\n");
	printf("4.+ -\n");
	printf("5.<< >>\n");
	printf("6.< <= > >=\n");
	printf("7.== !=\n");
	printf("8.&\n");
	printf("9.^\n");
	printf("10.|\n");
	printf("11.&&\n");
	printf("12.||\n");
	printf("13.?:\n");
	printf("14.= += -= *= /= %= <<= >>= &= ^= |=\n");
	getchar();
}
