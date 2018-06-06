#include <stdlib.h>
#include <stdio.h>
#include "Student.h"
#include <iostream> //C++ 的包


/*
void swap(int *number1, int *number2) {
	int temp = 0;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}

//引用
void swap(int &number1, int &number2) {
	int temp = 0;
	temp = number1;
	number1 = number2;
	number2 = temp;
}

//struct Student
//{
//	char name[20];
//	int age;
//};

//C++允许函数重载，C不允许
int add(int num1, int num2) {

}

int add(int num1, int num2, int num3) {

}
//C++ 可以带有默认参数 ，kotlin也可以
int add(int num1, int num2, int num3, int num4 = 300) {

}

//类
//class Student {
//
//private:
//	char* name;
//	int age;
//
//public:
//	void setAge(int age) {
//		this -> age = age;
//	}
//
//};
void main() {

	//c++ 的打印方式
	std::cout << "Hello World" << std::endl;


	//通过地址改变值
	int number = 10;
	int *nump = &number;
	*nump = 20;
	std::cout << number << std::endl;


	// 更换
	int number1 = 10;
	int number2 = 20;
	swap(number1, number2);

	//
	bool a;


	//new 关键字,不过需要释放，跟malloc free一样
	//开发中应该怎么写？
	Student *stu = new Student();


	getchar();
}*/