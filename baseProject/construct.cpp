#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Student
{
public:
	//���캯��
	Student() {
		cout << "�ղι��캯��" << endl;
	}

	/*Student(char *name) {
		cout << "һ���������캯��" << endl;
	}*/

	//Student(char *name) :age(0) {// ��Ĭ�ϲ����Ĺ��캯��
	//	cout << "һ���������캯��" << endl;
	//}

	Student(char *name) :Student(name, 0) {//�ȵ������������Ĺ��캯����Ȼ��Ż�ָ��ǰ�Ĺ��캯��
		cout << "һ���������캯��" << endl;
	}

	Student( char *name, int age) {
		cout << "�����������캯��" << endl;
		this->name = (char *)malloc(sizeof(char)*100);
		strcpy(this->name, name);
		this->age = age;
	}

	//��������
	~Student()
	{
		cout << "��������" << endl;

		//�������ԣ����󱻻��յ�ʱ��ᱻ����
		//�ͷ��ڴ�
		free(this->name);
		this->name = NULL;
	}

	//�������캯����ϵͳĬ���и��������캯��
	Student(const Student& stu) {//����������
		cout << "�������캯��" << endl;
		//this->name = stu.name; //ǳ����
		this->age = stu.age;

		//�����̬�����ڴ棬һ��Ҫ���
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
	Student stu(name); //ջ������ִ���꣬�������ᱻ���գ����Ƿ��ֵ����˿������캯��
	return stu;	//�᷵��һ���µ�Student���󣬶�ջ�ڿ��ٵ�stu�Ļᱻ����
}

void printStudent(Student stu) {
	cout << stu.getName() << stu.getAge()<< endl;
}

void main() {
	cout << "Hello" << endl;

	//�޲ι��캯��
	/*Student stu;
	stu.setAge(24);
	char *name =(char *)malloc(10);
	strcpy(name,"huadai");
	stu.setName(name);*/


	//�вι��캯��
//	Student stu("huadai", 24);


	//ͨ��new �ؼ��֣�
//	Student *stu = new Student("huadai", 24);
//	cout << "Hello" << endl;

	//ͨ��malloc ��ʽ
//	Student *stu = (Student *)malloc(sizeof(Student));


	//�������캯��,���ַ�ʽĬ�ϵ��ÿ������캯��
//	Student stu1("huadai", 25);
//	Student stu2 = stu1; //���ֻ���ÿ������캯��
	//stu2 = stu1; //���ֲ�����ÿ������캯��


	//�������캯���ڶ�����ʽ,��Ϊ����ֵ
	//char *name = (char *)malloc(10);
	//strcpy(name, "123");
	//Student stu3 = getStudent(name);
	//cout << stu3.getName() << stu3.getAge() << endl;

	//�������캯����������ʽ����Ϊ��������
	char *name = (char *)malloc(10);
	strcpy(name, "huadei");
	Student stu4(name, 26);
	printStudent(stu4);

	getchar();
}