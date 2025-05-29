//4)Define three classes A, B, C carrying one integer member in each of them.
//Let C be derived from A and B.Write constructors and destructors in each of 
//these classes that prompt some message from each class.Also the constructor of
//C should accept three values, one for its own member and other two for A and B.
//The C constructor should see that the two values goes to respective constructors of A and B.
//What is the order in which constructors and destructors get called upon ?
//How can you change this order ?


//#include<iostream>
//using namespace std;
//
//class A {
//
//	int a;
//
//public:
//	A(int k) {
//		k = a;
//		cout << "Constructor of A" << endl;
//	}
//
//	~A() {
//		cout<<"Destructor of A" << endl;
//	}
//};
//
//class B {
//	int b;
//public:
//	B(int l) {
//		l = b;
//		cout << "Constructor of B" << endl;
//	}
//
//	~B() {
//		cout << "Destructor of B" << endl;
//	}
//};
//
//class C :A, B {
//	int c;
//
//public:
//	C(int k,int l,int m):A(k),B(l) {
//		m=c;
//		cout << "Constructor of C" << endl;
//	}
//
//	~C() {
//		cout << "Destructor of C" << endl;
//	}
//
//};
//
//int main() {
//	C ob(9, 8, 7);
//}