#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char* str1 = "ABC 123 ";
	const char* str2 = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	strcpy_s(str3, str1);
	cout << str3 << endl;
	strcat_s(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "���ڿ��� ����" << endl;
	else
		cout << "���ڿ��� ���� �ȴ�" << endl;
	return 0;
}