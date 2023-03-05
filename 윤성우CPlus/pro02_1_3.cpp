#include <iostream>
using namespace std;

void SwapPointer(int* (&val1), int* (&val2)) {
	int *temp;
	temp = val1;
	val1 = val2;
	val2 = temp;
}


int main() {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);
	
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}