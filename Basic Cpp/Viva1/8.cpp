//2) create following structure
//struct book
//{
//	char bid[5];
//	char name[30];
//	int price;
//};
//ask user how many records he wants to create and accordingly allocate memory.
//accept values from user and display.
//(Hint :-use  "new" operator)

//#include<iostream>
//using namespace std;
//struct Student {
//	char bid[5];
//	char name[30];
//	int price;
//};
//
//int main() {
//	struct Student* ptr;
//	cout << "How may Records?" << endl;
//	int rec;
//	cin >> rec;
//
//	ptr = new Student[rec];
//
//	for (int i = 0; i < rec; i++) {
//		cin >> ptr[i].bid >> ptr[i].name >> ptr[i].price;
//	}
//
//	for (int i = 0; i < rec; i++) {
//		cout << ptr[i].bid << ptr[i].name << ptr[i].price << endl;
//	}
//
//	delete[] ptr;
//
//}