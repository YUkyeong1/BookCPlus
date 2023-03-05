#include <iostream>
using namespace std;

void PlusOne(int& val) {
	val++;
}

void ChangeVal(int& val) {
	val *= -1;
}

int main() {
	int num = 20;

	PlusOne(num);
	cout << "num: " << num << endl;
	
	ChangeVal(num);
	cout << "num: " << num << endl;

	return 0;
}