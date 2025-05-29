//1) class Number
//{
//    int num;
//   }
//In the main function,
//Number n1(8), n2(4), n3(20), n4(6), n5;
//n5 = n1 - n2
//n5 = n3 / n4;
//n5 = n1 * n3

//#include<iostream>
//using namespace std;
//
//class Number {
//	int num;
//
//public:
//	Number(int n = 0) {
//		num = n;
//	}
//
//	Number operator- (Number n) {
//		return (num - n.num);
//	}
//
//	Number operator* (Number n) {
//		return (num * n.num);
//	}
//
//	Number operator/ (Number n) {
//		if (n.num == 0) {
//			cout << "Error" << endl;
//		}
//		else {
//			return (num / n.num);
//		}
//	}
//
//	void display() {
//		cout << "value: " << num << endl;
//	}
//
//};
//
//int main() {
//	Number n1(8), n2(4), n3(20), n4(6), n5;
//
//	n5 = n1 - n2;
//	n5.display();
//
//	n5 = n3/n4;
//	n5.display();
//
//	n5 = n1*n3;
//	n5.display();
//}