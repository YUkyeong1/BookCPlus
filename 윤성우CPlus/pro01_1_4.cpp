#include <iostream>

int main() {
	int getMoney;
	int sellMoney;
	while (true) {
		std::cout<< "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sellMoney;
		if (sellMoney == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			return 0;
		}
		
		getMoney = 50 + sellMoney * 0.12;
		std::cout << "�̹��� �޿�: " << getMoney << "����" << std::endl;
	}
}