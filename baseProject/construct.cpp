#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Student
{
public:
	//构造函数
	Student() {
		cout << "空参构造函数" << endl;
	}

	/*Student(char *name) {
		cout << "一个参数构造函数" << endl;
	}*/

	//Student(char *name) :age(0) {// 有默认参数的构造函数
	//	cout << "一个参数构造函数" << endl;
	//}

	Student(char *name) :Student(name, 0) {//先调用两个参数的构造函数，然后才会指向当前的构造函数
		cout << "一个参数构造函数" << endl;
	}

	Student( char *name, int age) {
		cout << "二个参数构造函数" << endl;
		this->name = (char *)malloc(sizeof(char)*100);
		strcpy(this->name, name);
		this->age = age;
	}

	//析构函数
	~Student()
	{
		cout << "析构函数" << endl;

		//临终遗言，对象被回收的时候会被调用
		//释放内存
		free(this->name);
		this->name = NULL;
	}

	//拷贝构造函数，系统默认有个拷贝构造函数
	Student(const Student& stu) {//常量的引用
		cout << "拷贝构造函数" << endl;
		//this->name = stu.name; //浅拷贝
		this->age = stu.age;

		//如果动态开辟内存，一定要深拷贝
		this->name = (char *)malloc(sizeof(char) * 100);
		strcpy(this->name, stu.name );
	}

private:
	int age;
	char* name;

public:
	int getAge() {
		return this->age;
	}

	char *getName() {
		return this->name;
	}

	void setAge(int age) {
		this->age = age;
	}

	void setName(char *name) {
		this->name = name;
	}

};


Student getStudent(char *name) {
	Student stu(name); //栈，方法执行完，这个对象会被回收，但是发现调用了拷贝构造函数
	return stu;	//会返回一个新的Student对象，而栈内开辟的stu的会被回收
}

void printStudent(Student stu) {
	cout << stu.getName() << stu.getAge()<< endl;
}

void main() {
	cout << "Hello" << endl;

	//无参构造函数
	/*Student stu;
	stu.setAge(24);
	char *name =(char *)malloc(10);
	strcpy(name,"huadai");
	stu.setName(name);*/


	//有参构造函数
//	Student stu("huadai", 24);


	//通过new 关键字，
//	Student *stu = new Student("huadai", 24);
//	cout << "Hello" << endl;

	//通过malloc 方式
//	Student *stu = (Student *)malloc(sizeof(Student));


	//拷贝构造函数,这种方式默认调用拷贝构造函数
//	Student stu1("huadai", 25);
//	Student stu2 = stu1; //这种会调用拷贝构造函数
	//stu2 = stu1; //这种不会调用拷贝构造函数


	//拷贝构造函数第二个方式,作为返回值
	//char *name = (char *)malloc(10);
	//strcpy(name, "123");
	//Student stu3 = getStudent(name);
	//cout << stu3.getName() << stu3.getAge() << endl;

	//拷贝构造函数第三个方式，作为参数传递
	char *name = (char *)malloc(10);
	strcpy(name, "huadei");
	Student stu4(name, 26);
	printStudent(stu4);

	getchar();
}