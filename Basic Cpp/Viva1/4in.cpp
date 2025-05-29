//4)Define three classes A, B, C carrying one integer member in each of them.
//Let C be derived from A and B.Write constructors and destructors in each of 
//these classes that prompt some message from each class.Also the constructor 
//of C should accept three values, one for its own member and other two for A and B.
//The C constructor should see that the two values goes to respective constructors of A 
//and B.What is the order in which constructors and destructors get called upon ? 
//How can you change this order ?


//#include<iostream>
//using namespace std;
//
//class A {
//	int x;
//
//public:
//	A(int k) {
//		k = x;
//		cout << "cons" << endl;
//	}
//
//	~A() {
//		cout << "des" << endl;
//	}
//};
//
//
//class B {
//	int y;
//
//public:
//	B(int l) {
//		l = y;
//		cout << "cons" << endl;
//	}
//
//	~B() {
//		cout << "de" << endl;
//	}
//};