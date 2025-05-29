//5) Define a class with constructor and member function
//
//create object, call member function
//now create a reference to that object, and using that reference try to 
//call member function

#include<iostream>
using namespace std;

class Myclass {
	int x;

public:
	Myclass(int k) {
		k = x;
		cout << "Cons" << endl;
	}

	void disp() {
		cout << "disp" << endl;
		
	}
};

int main() {
	Myclass b(9);
	b.disp();

	Myclass& ref = b;
	ref.disp();

}