#include <iostream>

int main() {
	
	int num;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "��° ���� �Է�: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "�հ�: " << sum;
	return 0;
}