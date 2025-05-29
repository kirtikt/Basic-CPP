//9)write a function which takes 3 arguments
//variable, pointer and a reference.(any datatype)
//invoke this function and show how "call by value", 
//"call by address" and "call by reference" will work.

//#include<iostream>
//using namespace std;
//
//void disp(int a, int* ptr, int& c) {
//	a = a + 10;
//	*ptr = *ptr + 10;
//	c = c + 10;
//
//	cout << a << endl;
//	cout << ptr << endl;
//	cout << c << endl;
//}
//
//int main() {
//	int k = 7, l = 8, m = 9;
//
//	cout << "Before func calling" << endl;
//	cout << k << endl;
//	cout << l << endl;
//	cout << m << endl;
//
//
//	disp(k, &l, m);
//
//	cout << "After func calling" << endl;
//	cout << k << endl;
//	cout << l << endl;
//	cout << m << endl;
//
//	return 0;
//
//}