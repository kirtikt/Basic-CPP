//3) create a structure "Employee"
//with members
//int id
//char name[20];
//char desig[20];
//now access it using
//a) array
//b) DMA

//#include<iostream>
//using namespace std;
//
//struct Employee {
//	int id;
//	char name[20];
//	char desig[20];
//};
//
//int main() {
//	struct Employee* ptr;
//	cout << "How many records?";
//
//	int rec;
//
//	cin >> rec;
//
//	ptr = new Employee[rec];
//
//	for (int i = 0; i < rec; i++) {
//		cin >> ptr[i].id >> ptr[i].name >> ptr[i].desig;
//
//	}
//
//	for (int i = 0; i < rec; i++) {
//		cout << ptr[i].id << ptr[i].name << ptr[i].desig << endl;
//	}
//
//	delete[] ptr;
//}