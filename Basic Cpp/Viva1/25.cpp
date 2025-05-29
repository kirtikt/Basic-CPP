//3) Given
//
//class Module1
//{
//	int duration;
//public:
//	Module1(int k)
//	{
//		duration = k;
//	}
//};
//
//class Module2
//{
//	int duration;
//public:
//	Module2(int k)
//	{
//		duration = k;
//	}
//};
//
//write a global function "check" which will take 2 modules(i.e.Module1 and Module2) 
// and check whether Modules are same or not.
//call this "check" function from main function.

//#include<iostream>
//using namespace std;
//
//class Module2;
//
//class Module1 {
//
//public:
//	int duration;
//
//public:
//	Module1(int k)
//			{
//				duration = k;
//			}
//
//	friend bool check();
//};
//
//class Module2 {
//
//public:
//	int duration;
//
//public:
//	Module2(int k) {
//		duration = k;
//	}
//
//	friend bool check();
//};
//
//bool check(Module1 m1, Module2 m2) {
//	
//	return m1.duration == m2.duration;
//
//	
//}
//
//int main() {
//	Module1 m1(5);
//	Module2 m2(8);
//
//	if (check(m1, m2)) {
//		cout << "same" << endl;
//	}
//	else {
//		cout << "diff" << endl;
//	}
//}