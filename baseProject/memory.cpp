#include<stdio.h>
#include<stdlib.h>

//��̬�����ڴ�
void staticlloc() {
	int arr[5];
	int i = 0;
	for (; i < 5;i++) {
		arr[i] = i;
		printf("%d,%p\n",arr[i],arr+i);
	}
}


//��̬�����ڴ�
void dynamiclloc() {
	int *arr = (int *)malloc(10 * 1024 * 1024 * sizeof(int));

	//�ֶ��ͷ�
	free(arr);
}

//ʹ�ó���
/*void handle() {
	int num;
	int *arr = (int *)malloc(sizeof(int)*num);

	//��̬�����ڴ棬�ڴ治�������ڴ�
	//Ĭ������£��¿��ٵ��ڴ�ռ��ͷ��ַ ��ԭ�����ڴ�ռ��ͷ��ַһ��
	//��Щ����£����ԭ���Ĳ�һ����������������ڴ治�������£�����˵������Ӧ��ռ�ã�
	//�п��ܻ�ʧ�ܣ����ص�null
	arr = (int *)realloc(arr, sizeof(int)*num*2);
	if (arr) { //if(arr != NULL)���߶Ե�

	}

	
	//��Ҫ����ȥ�ͷţ���ַһ�����ͷž��п��ܻᱻ�µ�Ӧ��ռ�á�
	free(arr);
}*/



/*void main() {
	//��ᷢ��Stack overflow ջ���
	// ����ж�һ���ڴ�����û��д�����ݣ�
	//int arr[10 * 1024 * 1024]; //�ڴ���٣����� 10MB��intռ��4�ֽڣ�40M�ռ�

	//C�з���������ģ�ͣ�ջ����
	//ջ��ռ���ڴ�ռ����ֵ2M�������ڴ淽ʽ�Ǿ�̬�ڴ濪�٣������������Զ�����,�ڴ��С���ܸı�
	//�ѣ�ռ�ÿռ����ֵ 80%����̬�ڴ濪�٣������Զ����ձ����ֶ����ա�

	staticlloc();

	getchar();
}*/