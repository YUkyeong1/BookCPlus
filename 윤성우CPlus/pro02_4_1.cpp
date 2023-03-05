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
		cout << "문자열이 같다" << endl;
	else
		cout << "문자열이 같지 안다" << endl;
	return 0;
}