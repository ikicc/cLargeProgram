//menu2_4.cpp -- 2.4循环语句
#include <stdio.h>
#include <iostream>
void m2_4_1(void) { //1.while语句
	system("cls");
	printf("\n\n    while语句\n\n");
	printf("while(条件表达式)\n");
	printf("    语句;\n");
	printf("注：条件表达式为真时执行语句，否则跳出循环。\n");
	printf("例：\n");
	printf("while(a<b)\n");
	printf("    c=a;\n");
	printf("注：如果a<b为真，则执行c=a，否则跳出循环。\n");
	getchar();
	rewind(stdin);
}
void m2_4_2(void) { //2.do-while语句
	system("cls");
	printf("\n\n    do-while语句\n\n");
	printf("do\n");
	printf("    语句;\n");
	printf("while(条件表达式);\n");
	printf("注：先执行语句，再判断条件表达式，为真时继续执行语句，否则跳出循环。\n");
	printf("例：\n");
	printf("do\n");
	printf("    c=a;\n");
	printf("while(a<b);\n");
	printf("注：先执行c=a，再判断a<b，为真时继续执行c=a，否则跳出循环。\n");
	getchar();
	rewind(stdin);
}
void m2_4_3(void) {   //3.for语句
	system("cls");
	printf("\n\n    for语句\n\n");
	printf("for(表达式1;条件表达式2;表达式3)\n");
	printf("    语句;\n");
	printf("注：先执行表达式1，再判断条件表达式2，为真时执行语句，再执行表达式3，再判断条件表达式2，为真时执行语句，否则跳出循环。\n");
	printf("例：\n");
	printf("for(i=0;i<10;i++)\n");
	printf("    c=a;\n");
	printf("注：先执行i=0，再判断i<10，为真时执行c=a，再执行i++，再判断i<10，为真时执行c=a，否则跳出循环。\n");
	getchar();
	rewind(stdin);
}
void m2_4_4(void) {   //4.break语句
	system("cls");
	printf("\n\n    break语句\n\n");
	printf("break;\n");
	printf("注：跳出当前循环。\n");
	printf("例：\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        break;\n");
	printf("注：如果a<b为真，再判断a==c，为真时跳出循环。\n");
	getchar();
	rewind(stdin);
}
void m2_4_5(void) {   //5.continue语句
	system("cls");
	printf("\n\n    continue语句\n\n");
	printf("continue;\n");
	printf("注：跳出当前循环，继续下一次循环。\n");
	printf("例：\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        continue;\n");
	printf("注：如果a<b为真，再判断a==c，为真时跳出循环，继续下一次循环。\n");
	getchar();
	rewind(stdin);
}
void m2_4_6(void) {   //6.goto语句
	system("cls");
	printf("\n\n    goto语句\n\n");
	printf("goto 标号;\n");
	printf("注：跳转到标号处。\n");
	printf("例：\n");
	printf("while(a<b)\n");
	printf("    if(a==c)\n");
	printf("        goto label;\n");
	printf("注：如果a<b为真，再判断a==c，为真时跳转到label处。\n");
	getchar();
	rewind(stdin);
}
void m2_4_7(void) {   //7.无限循环
	system("cls");
	printf("\n\n    无限循环\n\n");
	printf("for(;;)\n");
	printf("    语句;\n");
	printf("while(1)\n");
	printf("    语句;\n");
	printf("注：条件表达式永远为真，循环不会跳出。\n");
	printf("例：\n");
	printf("for(;;)\n");
	printf("    c=a;\n");
	printf("注：永远执行c=a。\n");
	getchar();
	rewind(stdin);
}
void m2_4_8(void) {   //8.循环嵌套
	system("cls");
	printf("\n\n    循环嵌套\n\n");
	printf("for(表达式1;条件表达式2;表达式3)\n");
	printf("    for(表达式4;条件表达式5;表达式6)\n");
	printf("        语句;\n");
	printf("注：表达式1、2、3、4、5、6可以是任意表达式。\n");
	printf("例：\n");
	printf("for(i=0;i<10;i++)\n");
	printf("    for(j=0;j<10;j++)\n");
	printf("        c=a;\n");
	printf("先执行内层循环，再执行外层循环，内层循环执行完毕后再执行外层循环，直到外层循环执行完毕。\n");
	getchar();
	rewind(stdin);
}

