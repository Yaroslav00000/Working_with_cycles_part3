#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double min, max, num;
	cout << "������ �������� �������� ��������: ";
	cin >> min;
	cout << "������ ����������� �������� ��������: ";
	cin >> max;
	cout << "������ �����: ";
	cin >> num;
	if (num >= min && num <= max) {
		cout << "����� " << num << " ����������� � �������� �������" << endl;
	}
	else {
		cout << "����� " << num << " �� ����������� � �������� �������" << endl;
	}

	return 0;
}