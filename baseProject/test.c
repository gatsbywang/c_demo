#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void add(int num1,int num2) {
	
}


void mid(int num1, int num2) {

}

void opreate(void(method)(int,int),int num1,int num2) {
	method(num1,num2);
}

void method(void(*call)(int, int)) {
	call(1, 3);
}

struct AndroidBitmapInfo1
{
	int width;

}info;//定义了一个结构体变量 info

typedef struct 
{
	int width;

}AndroidBitmapInfo2;//定义了一个结构体别名 

void AndroidBitmap_getInfo(AndroidBitmapInfo2* bitmapInfo) {
	//通过指针在方法里赋值

	bitmapInfo->width = 200;
}


void set(char **str) {
	//strcpy(str,"darren");
	 ////*str = "darren";//操作的是str这个指针的地址
	printf("%p\n", str);
	printf("%p\n", *str);
	//printf("%s\n", **str);
}
/*
void main() {
	/*int arr[] = { 1,2,3,4 };

	opreate(add,1,2);
	opreate(mid, 1, 2);

	void(*call)(int, int) = add;
	call(1,3);
	method(call);

	AndroidBitmapInfo2 *androidBitmapInfo = (AndroidBitmapInfo2 *)malloc(sizeof(AndroidBitmapInfo2));

	AndroidBitmap_getInfo(androidBitmapInfo);

	//释放
	if (androidBitmapInfo !=NULL) {
		free(androidBitmapInfo);
		//避免野指针的情况
		androidBitmapInfo = NULL;
	}

	//

	char *p1 = NULL;	//NULL 也是个地方，相当于指向了0x00000000
	//但是我们并不能对0x00000000去操作，这块地方是c和c++编译器持有的
	strcpy(p1,"123456"); 
	
	
	//二级指针
	char *str1 = "123";
	printf("%p\n", &str1);
	char **str2 = &str1;
	printf("%p\n", str2);
	printf("%s\n", *str2);
	printf("%p\n", **str2);


	
	getchar();
}*/
