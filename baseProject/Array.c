#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//дһ����ӡ����ķ���
void print(int* arr,int length){
	//������Ϊ�������޷���ȡ����,ֻ��ͨ���������ݷ�ʽ���ѳ��ȴ��ݵ�������
	//int length = sizeof(arr) / sizeof(int);

	printf("length = %d", length);
}

struct MyStruct
{
	char* name;
};
typedef struct MyStruct Student;//��MyStruct ȡ�������� Student



char* getStr3() {
	char buff[128]; //��̬�����ڴ棨�ֲ�����ջ�У�������������ʱ�򱻻����ˣ���Ȼ�õ��׵�ַ�������Ѿ�û�����ݣ����Դ�ӡ��������
					//�������malloc ����new����ڶ�������ʹ����������Ҳ���ᱻ����
	strcpy(buff, "12345");
	return buff;
}

void main() {
	int arr[] = { 1,2,3,4,5 };

	//1��������Ĵ�С
	int size = sizeof(arr) / sizeof(int);
	printf("size = %d", size);
	print(arr,10);

	getchar();
}