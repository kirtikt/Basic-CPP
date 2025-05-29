//5) create a class Base with "int num1", parameterized constructor and destructor.
//Derive class Sub1 from Base with "int num2", parameterized constructor and destructor.
//Now derive class Sub2 from Sub1 with "int num3", parameterized constructor and destructor.
//in the main function create the object of Sub1 and notice constructor and destructor invocation.

//#include<iostream>
//using namespace std;
//
//class Base {
//	int num1;
//
//public:
//	Base(int x) {
//		num1=x;
//
//		cout << "oyee" << num1<< endl;
//	}
//
//	~Base() {
//		cout << "byee" << endl;
//	}
//};
//
//class sub1 :Base {
//	int num2;
//
//public:
//	sub1(int y, int x):Base(x) {
//		num2=y;
//
//		cout << "yee" << num2<< endl;
//	}
//
//	~sub1() {
//		cout << "yayayy" << endl;
//	}
//};
//
//
//class sub2 :sub1 {
//	int num3;
//
//public:
//	sub2(int z, int y, int x) :sub1(y,x) {
//		num3=z;
//
//		cout << "y" << num3 << endl;
//	}
//
//	~sub2() {
//		cout << "j" << endl;
//	}
//};
//
//int main() {
//	sub1 ob(4,5);
//
//}