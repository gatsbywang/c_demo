#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//1���ṹ�嶨���ʹ�� ���൱��java���ࣩ
struct Worker
{
	char name[10];
	int age;
	double salary;
};

struct Worker2
{
	char name[10];
	int age;
	double salary;
}huadaiworker1,huadaiworker2{"hiworker",100,20};

//���Խṹ��
struct Worker3
{
	char name[10];
	int age;
	double salary;

	Worker worker;
}worker3;

//�ڲ��ܹ���
struct Worker4
{
	char name[10];
	int age;
	double salary;
	//�൱���ڲ���
	struct Worker
	{
		char name[10];
		int age;
		double salary;
	};

	Worker worker;
}worker4;


//�ṹ�����
typedef Worker Worker_;
//�ṹ��ָ��
typedef Worker* Worker_1;


//�����壬�ͽṹ���÷�һ��
//�����ڴ棬ֻ�����һ����ʲô��˼�أ��������ֵ�����Բ���ֵ�����������Զ����ҵġ�
union  Person
{
	char *name;

	int age;
};

enum CommentType
{
	TEXT,TEXT_IMAGE,IMAGE
};

void main() {
	//1��
	struct Worker worker = { "huadai",23,1000};
	
	worker.age = 24;
	//worker.name = "huadai2";
	strcpy_s(worker.name,"huadai2");


	printf("name = %s,age=%d,salary=%lf",worker.name,worker.age,worker.salary);


//	struct Worker worker; //�޳�ʼ����������������Զ�û�г�ʼֵ

	//2��
	strcpy_s(huadaiworker1.name, "huadai100");//ֱ��ָ��huadaiworker���������Զ��г�ʼֵ��
	printf("name = %s,age=%d,salary=%lf", huadaiworker1.name, huadaiworker1.age, huadaiworker1.salary);


	//3��
	struct Worker3 worker3 = { "huadai3",100,2000,{"huadai",50,51} };
	printf("name = %s,age=%d,salary=%lf", worker3.worker.name, worker3.worker.age, worker3.worker.salary);

	//4���ṹ��ָ��
	struct Worker *worker4 = &worker;
	//ͨ���ṹ��ָ��ȥ��������
	worker4->age = 24;
	strcpy_s(worker4->name , "aaaa");

	//5���ṹ���ʼ��
	struct Worker *worker5 = (Worker *)malloc(sizeof(Worker));
	worker5->age = 18;
	if (worker5) {
		free(worker5);
		worker5 = NULL;
	}

	//6���ṹ������
	Worker worker6[10] = { {},{},{},{},{} }; //��̬����
	Worker *worker7 =(Worker *)malloc(sizeof(Worker)*10);

	//7��
	//�ṹ���ܴ�С�������Ծ��������ֽڶ��룬��������ֽڶ��루ȡ����ֽ����������ʱ��ֻ����������������
	//���������������£���������ֽ��������������Ƿ��ܹ�����������Ե��ֽ�������������������ۼӣ�һֱ�ӵ�������Ϊֹ��
	int size = sizeof(Worker);
	int intarr[10];
	printf("int arr = %d", sizeof(intarr));


	//8��������ʽ
	 Worker_ worker8 = { "huadai",23,1000 };
	 Worker_1 worker = (Worker_ *)malloc(sizeof(Worker));//ָ�����

	 //9�������� ���㣨ȡ���ֵ���ۼӵ��ܱ��������������ͣ���������������Ϊ8���Ǿ�Ӧ�ñ�8������������
	 Person person;
	 int sizeunion = sizeof(person);

	 //10��


	getchar();
}
