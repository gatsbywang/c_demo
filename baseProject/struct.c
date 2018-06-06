#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

////1、结构体定义和使用 （相当于java的类）
//struct Worker
//{
//	char name[10];
//	int age;
//	double salary;
//};
//
//struct Worker2
//{
//	char name[10];
//	int age;
//	double salary;
//}huadaiworker1;
//
////属性结构体
//struct Worker3
//{
//	char name[10];
//	int age;
//	double salary;
//
//	Worker worker;
//}worker3;
//
////内部架构体
//struct Worker4
//{
//	char name[10];
//	int age;
//	double salary;
//	//相当于内部类
//	struct Worker
//	{
//		char name[10];
//		int age;
//		double salary;
//	};
//
//	Worker worker;
//}worker4;
//
//
////结构体别名
//typedef Worker Worker_;
////结构体指针
//typedef Worker* Worker_1;
//
//
////联合体，和结构体用法一样
////减少内存，只会存在一个，什么意思呢？就是最后赋值的属性才有值，其他的属性都是乱的。
//union  Person
//{
//	char *name;
//
//	int age;
//};
//
//enum CommentType
//{
//	TEXT, TEXT_IMAGE, IMAGE
//};
//
//
//
//struct Worker5
//{
//	int year;
//	int month;
//	int day;
//	char name[5];
//};
//
//struct Worker6
//{
//	int number;
//	char sex;
//	int age;
//	char name[10];
//
//	Worker5 worker;
//};

/*void main() {
	//1、
	struct Worker worker = { "huadai",23,1000};

	worker.age = 24;
	//worker.name = "huadai2";
	strcpy_s(worker.name,"huadai2");


	printf("name = %s,age=%d,salary=%lf",worker.name,worker.age,worker.salary);


//	struct Worker worker; //无初始化的情况，所有属性都没有初始值

	//2、
	strcpy_s(huadaiworker1.name, "huadai100");//直接指定huadaiworker，所有属性都有初始值。
	printf("name = %s,age=%d,salary=%lf", huadaiworker1.name, huadaiworker1.age, huadaiworker1.salary);


	//3、
	struct Worker3 worker3 = { "huadai3",100,2000,{"huadai",50,51} };
	printf("name = %s,age=%d,salary=%lf", worker3.worker.name, worker3.worker.age, worker3.worker.salary);

	//4、结构体指针
	struct Worker *worker4 = &worker;
	//通过结构体指针去操作数据
	worker4->age = 24;
	strcpy_s(worker4->name , "aaaa");

	//5、结构体初始化
	struct Worker *worker5 = (Worker *)malloc(sizeof(Worker));
	worker5->age = 18;
	if (worker5) {
		free(worker5);
		worker5 = NULL;
	}

	//6、结构体数组
	Worker worker6[10] = { {},{},{},{},{} }; //静态开辟
	Worker *worker7 =(Worker *)malloc(sizeof(Worker)*10);

	//7、
	//结构体总大小，由属性决定，并字节对齐，计算规则：字节对齐（取最大字节数），算的时候只会计算基本数据类型
	//属性数组存在情况下，会把所有字节数加起来，看是否能够整除最大属性的字节数，如果不够，继续累加，一直加到能整除为止。
	int size = sizeof(Worker);
	int intarr[10];
	printf("int arr = %d", sizeof(intarr));


	//8、别名方式
	 Worker_ worker8 = { "huadai",23,1000 };
	// Worker_1 worker = (Worker_ *)malloc(sizeof(Worker));//指针别名

	 //9、联合体 计算（取最大值并累加到能被最大基本数据类型（比如最大基本类型为8，那就应该被8整除）整除）
	 Person person;
	 int sizeunion = sizeof(person);

	 //10、
	 printf("size = %d", sizeof(Worker6)); sizeof(Worker6);



	getchar();
}*/


typedef struct {
	char* name;//定义一个name指针，可以赋任何String值,结构体的大小如何计算？
	int age;
}Student;

typedef struct  {
	char a;
	char b;
	char c;
}date;

typedef struct {
	char sex; //4
	double number;  //8
	int age;  //4
	char name[10];//12
	date birthday;//4

	 //26+1+3
}student;

void copyTo(Student *from,Student *to) {
	*to = *from; //指针的赋值运输是一个浅拷贝

	//深拷贝,就是值赋值，to和from的那么此时就不上指向同一个地址。
	to->name = (char *)malloc(100);
	strcpy(to->name, from->name);

	printf("%s,%s\n", from->name,to->name);
}

/*
void main() {

	Student stu1 = { "Huadai",24 };
	Student stu2;

	stu2 = stu1; // = 赋值操作
	printf("%p,%p \n", &stu1, &stu2);
	printf("%p,%p",&(stu1.name), &(stu2.name));

	//结构体套指针
	//Student stu3 = {"Huahua",24};
	//stu3.name = "Huadai";
	//strcpy(stu3.name,"Huadai");


	//注意这两种区别，给指针指向一块内存地址，是可以进行内容拷贝的。
	//如果一开始内容指向的是常量区，无法将常量区的内容更换，这是需要注意的
	//char *a = malloc(sizeof(char)*10);
	//strcpy(a, "Huadai");
	//char *a = "123445677";
	//strcpy(a, "Huadai");


	//深拷贝和浅拷贝
	Student stu3 = { "Huadai",24 };
	
	Student stu4;
	copyTo(&stu3,&stu4);



	//结构体的偏移量强化
	student* stu = NULL;
	int size = sizeof(stu);
	printf("\n%d", &(stu->birthday)-(int)stu);
	printf("\n%d", sizeof(student));

	//释放内存
	
	getchar();


}*/
