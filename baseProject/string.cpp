#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int strlen_(char *str) {
	//���ַ�ʽ����
	printf("%d", sizeof(str) / sizeof(char));

	//Ӧ������ĩβ�ж��Ƿ��� '\0'
	int len = 0;
	while (*str !='\0') {
		len++;
		str++;
	}


	return len;
}


//�ַ���ת��
void change() {
	const char *str = "123";
	int number = atoi(str); //ת��Ϊint ,����ת������0������123xxx,תΪ123�����xxx����ȥ

	const char *str1 = "12.3";
	float number1 = atof(str1);//ת��Ϊfloat

	const char *str2 = "12.3";
	double number2 = strtod(str2, NULL);//ת��Ϊdouble
}

//�ַ����Ƚ�
void cmp() {
	const char *str1 = "123";
	const char *str2 = "123";
	int rc = strcmp(str1,str2); //strcmp  ���ִ�Сд��
	if (rc==0) {
		printf("���");
	}else {
		printf("�����");
	}

	int rc = _strcmpi(str1, str2); //strcmpi  �����ִ�Сд��  android.ndk û��_strcmpi  ʹ��strcasecmp����
	if (rc == 0) {
		printf("���");
	}
	else {
		printf("�����");
	}

	//�Ƚ�ǰ����
	int rc = strncmp(str1,str2,1);//count ����Ƚ��ַ����ĸ��������ִ�Сд

	int rc = _strnicmp(str1, str2, 1);//count ����Ƚ��ַ����ĸ����������ִ�Сд
}

//����
void find() {
	const char *str1 = "xxx 123123";
	const char *str2 = "123";
	const char *str3 = strstr(str1,str2); //���ص����ַ�����һ�γ��ֵ�λ�� ��ʵ�ͳ��ֵ�λ��ָ��

	//����λ�ã�ָ�����
	int position = str3 - str2;

	//�������ж�str3�ǲ��ǿ�

}

//ƴ��
void cat() {
	const char *str1 = "xxx 123123";

	const char *str2 = "1asdf";

	
	//copy
	char cpy[20];
	strcpy(cpy,str1);

	//ƴ��
	strcat(cpy, str1);

}


//��ȡ
char *sub(char *str,int start,int end) {

	//�����ַ����ڴ�
	int len = end - start;
	char *sub = (char *)malloc(sizeof(char)*len+1);
	
	//������ֵ
	str += start;
	for (int i = 0; i < len;i++) {
		sub[i] = *str;
		str++;
	}
	sub[len] = '\0';

	return sub;
}

//��Сдת��
void lower(char* dest,char* source) {
	//dest ������Ž������С�Լ�ָ��

	while (*source != '\0') {
		char ch = *source;
		*dest = tolower(ch);
		source++;
		dest++;
	}

}


void main() {

	printf("Hello world");

	//1���ַ�����β�ǡ�\0��
	char str[] = { 'A','A','A','A','A','A','A','\0'};

	printf("%s",str);

	//2��char * �����Զ���0
	const char *str1 = "Darren";
	printf("%s", str1);

	//����һ���ܸ� һ�����ܸ�
	str[2] = 'y';
	str1[2] = 'y';


	//�ַ������Ȼ�ȡ
	char *name = "Darren";
	printf("%d", strlen(name));//strlen ԭ�� ��ͨ���жϡ�\0��

	getchar();
}

