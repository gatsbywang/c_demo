#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  FILE
{
	char *fileName;
	int length;
};

void print3(char **strs,int len) {
	for (int i = 0; i < len; i++) {
		printf("%s\n", strs[i]);
		//printf("%s\n", *(strs+i)); //相当于++ ，二级指针++ 存在步长问题
	}
}

void initParams(char*** params) {
	int number = 3;

	char **tempParams = malloc(sizeof(char*)*number);
	for (int i = 0; i < number; i++) {
		tempParams[i] = malloc(sizeof(char*) * 100);
		sprintf(tempParams[i], "i = %d", i);
	}
	*params = tempParams;
}

void initParamss(char** params) {
	int number = 3;

	char **tempParams = malloc(sizeof(char*)*number);
	for (int i = 0; i < number; i++) {
		tempParams[i] = malloc(sizeof(char*) * 100);
		sprintf(tempParams[i], "i = %d", i);
	}
	*params = tempParams;
}

/*void main() {
	//二级指针
	//char *str1 = "123";
	//printf("%p\n", &str1);
	//char **str2 = &str1;
	//printf("%p\n", str2);//&str1 指针的地址
	//printf("%s\n", *str2);//123 指针所指向的值
	//printf("%p\n", **str2);//str1 指针所指向的地址

//	FILE *file[2] = {{"in.mp4"},{ "out.mp4"}};
//	FILE **file1;//指针数组，二级指针
	//数组指针指向的是数组元素的首地址


	//第一种方式
	//下面这种打印会出错
	/*char **name = {"darren"};
			char *name[10] = {"darren"}; //值在静态常量区
	for (int i = 0; i < 1;i++) {
		printf("%s\n", name[i]);
	}
	//如果char **name  直接这种进行直接初始化，会把它当作二级指针。
	//指针指向的是地址，像这种直接初始化是不能打印其中的值的
	//如果是char* name[] = {} 这种代表是指针数组，数组是有元素 ，这种是可以打印的。
	


	//第二种方式
	char name[10][30] = {"123","321","12345"}; //从静态常量区copy到栈的buffer里面。

	//第三种方式
	int number= 3;
	char **params = malloc(sizeof(char*)*number); //第二个是 乘号  开辟二维数组
	for (int i = 0; i < number;i++) {
		params[i] =malloc(sizeof(char)*100);
		sprintf(params[i],"i = %d",i);
	}
	//printf("%s", params);

	char **paramss = NULL;
	initParams(&paramss);
	print3(paramss,3);

	char *paramsss = NULL;
	initParamss(&paramsss);
	

	getchar();

}*/