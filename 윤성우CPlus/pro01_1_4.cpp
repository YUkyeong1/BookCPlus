#include <iostream>

int main() {
	int getMoney;
	int sellMoney;
	while (true) {
		std::cout<< "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sellMoney;
		if (sellMoney == -1) {
			std::cout << "프로그램을 종료합니다.";
			return 0;
		}
		
		getMoney = 50 + sellMoney * 0.12;
		std::cout << "이번달 급여: " << getMoney << "만원" << std::endl;
	}
}