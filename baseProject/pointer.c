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
		//printf("%s\n", *(strs+i)); //�൱��++ ������ָ��++ ���ڲ�������
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
	//����ָ��
	//char *str1 = "123";
	//printf("%p\n", &str1);
	//char **str2 = &str1;
	//printf("%p\n", str2);//&str1 ָ��ĵ�ַ
	//printf("%s\n", *str2);//123 ָ����ָ���ֵ
	//printf("%p\n", **str2);//str1 ָ����ָ��ĵ�ַ

//	FILE *file[2] = {{"in.mp4"},{ "out.mp4"}};
//	FILE **file1;//ָ�����飬����ָ��
	//����ָ��ָ���������Ԫ�ص��׵�ַ


	//��һ�ַ�ʽ
	//�������ִ�ӡ�����
	/*char **name = {"darren"};
			char *name[10] = {"darren"}; //ֵ�ھ�̬������
	for (int i = 0; i < 1;i++) {
		printf("%s\n", name[i]);
	}
	//���char **name  ֱ�����ֽ���ֱ�ӳ�ʼ�����������������ָ�롣
	//ָ��ָ����ǵ�ַ��������ֱ�ӳ�ʼ���ǲ��ܴ�ӡ���е�ֵ��
	//�����char* name[] = {} ���ִ�����ָ�����飬��������Ԫ�� �������ǿ��Դ�ӡ�ġ�
	


	//�ڶ��ַ�ʽ
	char name[10][30] = {"123","321","12345"}; //�Ӿ�̬������copy��ջ��buffer���档

	//�����ַ�ʽ
	int number= 3;
	char **params = malloc(sizeof(char*)*number); //�ڶ����� �˺�  ���ٶ�ά����
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