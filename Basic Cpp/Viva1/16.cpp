//2) create a class with constructors and destructor.
//create 2 instances on stack and 1 instance on heap.
//observe the invocation of constructors and destructors.

//#include<iostream>
//using namespace std;
//
//class demo {
//	int id;
//
//public:
//	demo(int i) {
//		id = i;
//		cout << "Before" << id << endl;
//	}
//
//	~demo() {
//		cout << "after" << id << endl;
//	}
//};
//
//int main() {
//	demo obj1(1);
//	demo obj2(2);
//
//	demo* obj3 = new demo(3);
//
//	cout << "final" << endl;
//
//	delete obj3;
//
//	cout << "After deletion" << endl;
//
//
//
//}