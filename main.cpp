#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Chrismas_tree = 50;
	int New_year_cookies = 200;
	int Christmas_tree_toys = 500;
	int Christmas_tree_lights = 100;
	int Fireworks = 25;
	int tovar, summa = 0, quantity_tovar;
	cout << "³���� ��� � ������ ������� ��������� ������!" << endl;
	
	do
	{
		cout << "� �������� � ������� ������: " << endl;
		cout << "1. �������� ������ - " << Chrismas_tree << "��. - 1�� 1000 ���." << endl;
		cout << "2. �������� ������ - " << New_year_cookies << "��. - 1�� 25 ���." << endl;
		cout << "3. �������� ��� ������ - " << Christmas_tree_toys << "��. - 1�� 50 ���." << endl;
		cout << "4. �������� ������� - " << Christmas_tree_lights << "��. - 1�� 250 ���." << endl;
		cout << "5. �������� - " << Fireworks << "��. - 1�� 100 ���." << endl;
		cout << "0. ��������� ����������" << endl;
		cout << "������ ����� ������: ";
		cin >> tovar;
		if (tovar < 0 || tovar > 5)
		{
			cout << "������ ������ ����!" << endl;

			continue;
		}
		if (tovar == 0)
		{
			cout << "���� ����������: " << summa << " ���." << endl;
			cout << "������ �� �������!" << endl;
			return 0;
		}
		cout << "������ ������� ������: ";
		cin >> quantity_tovar;
		switch (tovar)
		{
		case 1:

			if (Chrismas_tree >= quantity_tovar)
			{
				Chrismas_tree -= quantity_tovar;
				summa += quantity_tovar * 1000;
			}
			else
			{
				cout << "�� ����� ����������� ������!" << endl;
			}
			break;
		case 2:
			if (New_year_cookies >= quantity_tovar)
			{
				New_year_cookies -= quantity_tovar;
				summa += quantity_tovar * 25;
			}
			else
			{
				cout << "�� ����� ����������� ������!" << endl;
			}
			break;
		case 3:
			if (Christmas_tree_toys >= quantity_tovar)
			{
				Christmas_tree_toys -= quantity_tovar;
				summa += quantity_tovar * 50;
			}
			else
			{
				cout << "�� ����� ����������� ������!" << endl;
			}
			break;
		case 4:
			if (Christmas_tree_lights >= quantity_tovar)
			{
				Christmas_tree_lights -= quantity_tovar;
				summa += quantity_tovar * 250;
			}
			else
			{
				cout << "�� ����� ����������� ������!" << endl;
			}
			break;
		case 5:
			if (Fireworks >= quantity_tovar)
			{
				Fireworks -= quantity_tovar;
				summa += quantity_tovar * 100;
			}
			else
			{
				cout << "�� ����� ����������� ������!" << endl;
			}
			break;
		case 0:
			cout << "���� ����������: " << summa << " ���." << endl;
			cout << "������ �� �������!" << endl;
			return 0;
			break;
		default:
			break;
		}
	} while (true);
	return 0;
}