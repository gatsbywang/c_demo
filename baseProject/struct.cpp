#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//1、结构体定义和使用 （相当于java的类）
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

//属性结构体
struct Worker3
{
	char name[10];
	int age;
	double salary;

	Worker worker;
}worker3;

//内部架构体
struct Worker4
{
	char name[10];
	int age;
	double salary;
	//相当于内部类
	struct Worker
	{
		char name[10];
		int age;
		double salary;
	};

	Worker worker;
}worker4;


//结构体别名
typedef Worker Worker_;
//结构体指针
typedef Worker* Worker_1;


//联合体，和结构体用法一样
//减少内存，只会存在一个，什么意思呢？就是最后赋值的属性才有值，其他的属性都是乱的。
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
	 Worker_1 worker = (Worker_ *)malloc(sizeof(Worker));//指针别名

	 //9、联合体 计算（取最大值并累加到能被最大基本数据类型（比如最大基本类型为8，那就应该被8整除）整除）
	 Person person;
	 int sizeunion = sizeof(person);

	 //10、


	getchar();
}
