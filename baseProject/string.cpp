#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int strlen_(char *str) {
	//这种方式不行
	printf("%d", sizeof(str) / sizeof(char));

	//应该利用末尾判断是否是 '\0'
	int len = 0;
	while (*str !='\0') {
		len++;
		str++;
	}


	return len;
}


//字符串转换
void change() {
	const char *str = "123";
	int number = atoi(str); //转换为int ,不能转换就是0，还有123xxx,转为123，会把xxx给除去

	const char *str1 = "12.3";
	float number1 = atof(str1);//转换为float

	const char *str2 = "12.3";
	double number2 = strtod(str2, NULL);//转换为double
}

//字符串比较
void cmp() {
	const char *str1 = "123";
	const char *str2 = "123";
	int rc = strcmp(str1,str2); //strcmp  区分大小写的
	if (rc==0) {
		printf("相等");
	}else {
		printf("不相等");
	}

	int rc = _strcmpi(str1, str2); //strcmpi  不区分大小写的  android.ndk 没有_strcmpi  使用strcasecmp代替
	if (rc == 0) {
		printf("相等");
	}
	else {
		printf("不相等");
	}

	//比较前几个
	int rc = strncmp(str1,str2,1);//count 代表比较字符串的个数，区分大小写

	int rc = _strnicmp(str1, str2, 1);//count 代表比较字符串的个数，不区分大小写
}

//查找
void find() {
	const char *str1 = "xxx 123123";
	const char *str2 = "123";
	const char *str3 = strstr(str1,str2); //返回的是字符串第一次出现的位置 其实就出现的位置指针

	//计算位置，指针相减
	int position = str3 - str2;

	//包含，判断str3是不是空

}

//拼接
void cat() {
	const char *str1 = "xxx 123123";

	const char *str2 = "1asdf";

	
	//copy
	char cpy[20];
	strcpy(cpy,str1);

	//拼接
	strcat(cpy, str1);

}


//截取
char *sub(char *str,int start,int end) {

	//开辟字符串内存
	int len = end - start;
	char *sub = (char *)malloc(sizeof(char)*len+1);
	
	//遍历赋值
	str += start;
	for (int i = 0; i < len;i++) {
		sub[i] = *str;
		str++;
	}
	sub[len] = '\0';

	return sub;
}

//大小写转换
void lower(char* dest,char* source) {
	//dest 用来存放结果，大小自己指定

	while (*source != '\0') {
		char ch = *source;
		*dest = tolower(ch);
		source++;
		dest++;
	}

}


void main() {

	printf("Hello world");

	//1、字符串结尾是‘\0’
	char str[] = { 'A','A','A','A','A','A','A','\0'};

	printf("%s",str);

	//2、char * 后面自动补0
	const char *str1 = "Darren";
	printf("%s", str1);

	//区别，一个能改 一个不能改
	str[2] = 'y';
	str1[2] = 'y';


	//字符串长度获取
	char *name = "Darren";
	printf("%d", strlen(name));//strlen 原理 是通过判断‘\0’

	getchar();
}

