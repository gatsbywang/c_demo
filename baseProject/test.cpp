#include <stdio.h>

void add(int num1,int num2) {
	
}


void mid(int num1, int num2) {

}

void opreate(void(method)(int,int),int num1,int num2) {
	method(num1,num2);
}

void method(void(*call)(int, int)) {
	call(1, 3);
}

/*void main() {
	int arr[] = { 1,2,3,4 };

	opreate(add,1,2);
	opreate(mid, 1, 2);

	void(*call)(int, int) = add;
	call(1,3);
	method(call);

	getchar();
}*/
