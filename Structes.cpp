
#include <iostream>
#include <string>
using namespace std;

enum month
{
	Goodbye,
	January,
	February,
	March,
	April,
	May,
	June,
	July, 
	August,
	September,
	October,
	November,
	December
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int user_input=56;
	cout << "Введите номер месяца: ";
	while (user_input != 0) {
		cin >> user_input;
		switch (user_input) {
			case month::Goodbye:
				cout << "До свидания";
				break;
			case month::January:
				cout << "Январь" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::February:
				cout << "Февраль" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::March:
				cout << "Март" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::April:
				cout << "Апрель" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::May:
				cout << "Май" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::June:
				cout << "Июнь" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::July:
				cout << "Июль" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::August:
				cout << "Август" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::September:
				cout << "Сентябрь" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::October:
				cout << "Октябрь" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::November:
				cout << "Ноябрь" << endl;
				cout << "Введите номер месяца: ";
				break;
			case month::December:
				cout << "Декабрь" << endl;
				cout << "Введите номер месяца: ";
				break;
			default:
				cout << "Неправильный номер!" << endl;
				cout << "Введите номер месяца: ";
				break;
		}
	}
}