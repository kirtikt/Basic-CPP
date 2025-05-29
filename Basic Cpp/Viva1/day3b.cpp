//3)create a class "MyClass1"
//with members and member function "disp1().
//create another class "MyClass2"
//with members and member function "disp2().
//now try to invoke disp1() from disp2()
//in the main() function, create instances of both the classes and invoke their member functions.

//#include<iostream>
//using namespace std;
//
//class MyClass1 {
//
//	int y;
//	
//public:
//	void disp1() {
//
//		cout << "f" << endl;
//	}
//	
//};
//
//class MyClass2 {
//
//	int d;
//
//public:
//	void disp2(MyClass1 &ref) {
//		
//		ref.disp1();
//		cout << "g" << endl;
//	}
//
//};
//
//int main() {
//	MyClass1 ob;
//	
//
//	MyClass2 nj;
//	nj.disp2(ob);
//
//
//}