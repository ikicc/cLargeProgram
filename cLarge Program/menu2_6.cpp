#include <stdio.h>
#include <iostream>
/*void dispMenu2_6(void) {
	local(2, 20);  printf("C数组结构\n");
	local(1, 24);  printf("1. 数组的定义\n");
	colum_n(24);  printf("2. 数组的初始化\n");
	colum_n(24);  printf("3. 数组的引用\n");
	colum_n(24);  printf("4. 数组的输入输出\n");
	colum_n(24);  printf("5. 一维数组\n");
	colum_n(24);  printf("6. 二维数组\n");
	colum_n(24);  printf("7. 字符数组\n");
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}
*/

//按顺序介绍以上知识点
/*void m2_5_1(void) {   //1.函数的定义
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
*/
void m2_6_1(void) {   //1.数组的定义
	system("cls");
	printf("\n\n    数组的定义\n\n");
	printf("数组是一组具有相同类型的数据元素的集合。\n");
	printf("数组的定义形式为：\n");
	printf("类型说明符 数组名[常量表达式];\n");
	printf("注：数组名是标识符，常量表达式是数组的长度。\n");
	printf("例：\n");
	printf("int a[10];\n");
	printf("注：a是数组名，10是数组的长度。\n");
	getchar();
}
void m2_6_2(void) {   //2.数组的初始化
	system("cls");
	printf("\n\n    数组的初始化\n\n");
	printf("数组的初始化形式为：\n");
	printf("类型说明符 数组名[常量表达式]={常量表达式,常量表达式,...};\n");
	printf("注：数组名是标识符，常量表达式是数组的长度，常量表达式是数组的元素。\n");
	printf("例：\n");
	printf("int a[10]={1,2,3,4,5,6,7,8,9,10};\n");
	printf("注：a是数组名，10是数组的长度，1,2,3,4,5,6,7,8,9,10是数组的元素。\n");
	getchar();
}
void m2_6_3(void) {   //3.数组的引用
	system("cls");
	printf("\n\n    数组的引用\n\n");
	printf("数组的引用形式为：\n");
	printf("数组名[常量表达式];\n");
	printf("注：数组名是标识符，常量表达式是数组的下标。\n");
	printf("例：\n");
	printf("int a[10]={1,2,3,4,5,6,7,8,9,10};\n");
	printf("a[0]=a[1]+a[2];\n");
	printf("注：a是数组名，10是数组的长度，1,2,3,4,5,6,7,8,9,10是数组的元素。\n");
	getchar();
}
void m2_6_4(void) {   //4.数组的输入输出
	system("cls");
	printf("\n\n    数组的输入输出\n\n");
	printf("数组的输入输出形式为：\n");
	printf("scanf(\"格式控制符\",&数组名[常量表达式]);\n");
	printf("printf(\"格式控制符\",数组名[常量表达式]);\n");
	printf("注：数组名是标识符，常量表达式是数组的下标。\n");
	printf("例：\n");
	printf("int a[10];\n");
	printf("scanf(\"%d\",&a[0]);\n");
	printf("printf(\"%d\",a[0]);\n");
	printf("注：a是数组名，10是数组的长度，0是数组的下标。\n");
	getchar();
}
void m2_6_5(void) {   //5.一维数组
	system("cls");
	printf("\n\n    一维数组\n\n");
	printf("一维数组的定义形式为：\n");
	printf("类型说明符 数组名[常量表达式];\n");
	printf("注：数组名是标识符，常量表达式是数组的长度。\n");
	printf("例：\n");
	printf("int a[10];\n");
	printf("注：a是数组名，10是数组的长度。\n");
	getchar();
}
void m2_6_6(void) {   //6.二维数组
	system("cls");
	printf("\n\n    二维数组\n\n");
	printf("二维数组的定义形式为：\n");
	printf("类型说明符 数组名[常量表达式][常量表达式];\n");
	printf("注：数组名是标识符，常量表达式是数组的行数，常量表达式是数组的列数。\n");
	printf("例：\n");
	printf("int a[10][10];\n");
	printf("注：a是数组名，10是数组的行数，10是数组的列数。\n");
	getchar();
}
void m2_6_7(void) {   //7.字符数组
	system("cls");
	printf("\n\n    字符数组\n\n");
	printf("字符数组的定义形式为：\n");
	printf("类型说明符 数组名[常量表达式];\n");
	printf("注：数组名是标识符，常量表达式是数组的长度。\n");
	printf("例：\n");
	printf("char a[10];\n");
	printf("注：a是数组名，10是数组的长度。\n");
	getchar();
}
