#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double min, max, num;
	cout << "¬вед≥ть м≥н≥мальне значенн€ д≥апазону: ";
	cin >> min;
	cout << "¬вед≥ть максимальне значенн€ д≥апазону: ";
	cin >> max;
	cout << "¬вед≥ть число: ";
	cin >> num;
	if (num >= min && num <= max) {
		cout << "„исло " << num << " знаходитьс€ в заданому д≥апазон≥" << endl;
	}
	else {
		cout << "„исло " << num << " не знаходитьс€ в заданому д≥апазон≥" << endl;
	}

	return 0;
}