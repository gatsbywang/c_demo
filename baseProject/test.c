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

}info;//������һ���ṹ����� info

typedef struct 
{
	int width;

}AndroidBitmapInfo2;//������һ���ṹ����� 

void AndroidBitmap_getInfo(AndroidBitmapInfo2* bitmapInfo) {
	//ͨ��ָ���ڷ����︳ֵ

	bitmapInfo->width = 200;
}


void set(char **str) {
	//strcpy(str,"darren");
	 ////*str = "darren";//��������str���ָ��ĵ�ַ
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

	//�ͷ�
	if (androidBitmapInfo !=NULL) {
		free(androidBitmapInfo);
		//����Ұָ������
		androidBitmapInfo = NULL;
	}

	//

	char *p1 = NULL;	//NULL Ҳ�Ǹ��ط����൱��ָ����0x00000000
	//�������ǲ����ܶ�0x00000000ȥ���������ط���c��c++���������е�
	strcpy(p1,"123456"); 
	
	
	//����ָ��
	char *str1 = "123";
	printf("%p\n", &str1);
	char **str2 = &str1;
	printf("%p\n", str2);
	printf("%s\n", *str2);
	printf("%p\n", **str2);


	
	getchar();
}*/
