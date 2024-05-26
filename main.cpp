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
	cout << "Вітаємо вас в нашому магазині новорічних товарів!" << endl;
	
	do
	{
		cout << "В наявності є наступні товари: " << endl;
		cout << "1. Новорічна ялинка - " << Chrismas_tree << "шт. - 1шт 1000 грн." << endl;
		cout << "2. Новорічне печиво - " << New_year_cookies << "шт. - 1шт 25 грн." << endl;
		cout << "3. Прикраси для ялинки - " << Christmas_tree_toys << "шт. - 1шт 50 грн." << endl;
		cout << "4. Новорічна гірлянда - " << Christmas_tree_lights << "шт. - 1шт 250 грн." << endl;
		cout << "5. Феєрверки - " << Fireworks << "шт. - 1шт 100 грн." << endl;
		cout << "0. Завершити замовлення" << endl;
		cout << "Введіть номер товару: ";
		cin >> tovar;
		if (tovar < 0 || tovar > 5)
		{
			cout << "Такого товару немає!" << endl;

			continue;
		}
		if (tovar == 0)
		{
			cout << "Сума замовлення: " << summa << " грн." << endl;
			cout << "Дякуємо за покупку!" << endl;
			return 0;
		}
		cout << "Введіть кількість товару: ";
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
				cout << "На складі недостатньо товару!" << endl;
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
				cout << "На складі недостатньо товару!" << endl;
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
				cout << "На складі недостатньо товару!" << endl;
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
				cout << "На складі недостатньо товару!" << endl;
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
				cout << "На складі недостатньо товару!" << endl;
			}
			break;
		case 0:
			cout << "Сума замовлення: " << summa << " грн." << endl;
			cout << "Дякуємо за покупку!" << endl;
			return 0;
			break;
		default:
			break;
		}
	} while (true);
	return 0;
}