//2)
//class First
//{
//	int a;
//};
//class Second
//{
//public:
//	void fun1() {}
//	void fun2() {}
//	void fun3() {}
//};
//
//Above code is incomplete.
//Make sure that all the member functions of "Second" will access "a".

//#include<iostream>
//using namespace std;
//
//class second;
//
//class First {
//public:
//	int a;
//
//
//	friend class second;
//public:
//	First(int x) {
//
//	a=x;
//
//	}
//	
//};
//
//class second {
//public:
//	void fun1(First f) {
//		cout << f.a << endl;
//	}
//	void fun2(First f) {
//		cout << f.a << endl;
//	}
//	void fun3(First f) {
//		cout << f.a << endl;
//	}
//
//	
//};
//
//int main() {
//	First ob(3);
//	second obj;
//
//	obj.fun1(ob);
//	obj.fun2(ob);
//	obj.fun3(ob);
//}
