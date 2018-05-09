#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//写一个打印数组的方法
void print(int* arr,int length){
	//数组作为参数，无法获取长度,只能通过参数传递方式，把长度传递到函数中
	//int length = sizeof(arr) / sizeof(int);

	printf("length = %d", length);
}

struct MyStruct
{
	char* name;
};
typedef struct MyStruct Student;//给MyStruct 取个别名叫 Student



char* getStr3() {
	char buff[128]; //静态开辟内存（局部放在栈中），函数结束的时候被回收了，虽然拿到首地址，但是已经没有数据，所以打印的是乱码
					//如果采用malloc 或者new则放在堆区，即使函数结束，也不会被回收
	strcpy(buff, "12345");
	return buff;
}

void main() {
	int arr[] = { 1,2,3,4,5 };

	//1、求数组的大小
	int size = sizeof(arr) / sizeof(int);
	printf("size = %d", size);
	print(arr,10);

	getchar();
}