#include <iostream>

int main() {
	int num;
	
	std::cout << "���� �Է�: ";
	std::cin >> num;
	
	for (int i = 1; i <= 9; i++) {
		std::cout << i * num<<std::endl;
	}

	return 0;
}