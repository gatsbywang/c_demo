#include<stdio.h>
#include<stdlib.h>

//静态开辟内存
void staticlloc() {
	int arr[5];
	int i = 0;
	for (; i < 5;i++) {
		arr[i] = i;
		printf("%d,%p\n",arr[i],arr+i);
	}
}


//动态开辟内存
void dynamiclloc() {
	int *arr = (int *)malloc(10 * 1024 * 1024 * sizeof(int));

	//手动释放
	free(arr);
}

//使用场景
/*void handle() {
	int num;
	int *arr = (int *)malloc(sizeof(int)*num);

	//动态生成内存，内存不够，加内存
	//默认情况下，新开辟的内存空间的头地址 跟原来的内存空间的头地址一样
	//有些情况下，会和原来的不一样，比如后面连续内存不足的情况下（比如说被其他应用占用）
	//有可能会失败，返回的null
	arr = (int *)realloc(arr, sizeof(int)*num*2);
	if (arr) { //if(arr != NULL)两者对等

	}

	
	//不要反复去释放，地址一旦被释放就有可能会被新的应用占用。
	free(arr);
}*/



/*void main() {
	//这会发生Stack overflow 栈溢出
	// 如何判断一块内存中有没有写入数据？
	//int arr[10 * 1024 * 1024]; //内存多少？数组 10MB，int占用4字节，40M空间

	//C有分区，四驱模型，栈，堆
	//栈：占用内存空间最大值2M，开辟内存方式是静态内存开辟，方法结束会自动回收,内存大小不能改变
	//堆：占用空间最大值 80%，动态内存开辟，不会自动回收必须手动回收。

	staticlloc();

	getchar();
}*/