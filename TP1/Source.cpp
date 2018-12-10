#include "ARR.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

class AEROFLOT {
private:
	string to;
	string number;
	string type;
public:
	string getTo() {
		return to;
	}
	string getNumber() {
		return number;
	}
	string getType() {
		return type;
	}
	/*string setTo(string t){
	to = t;
	}
	string setNumber(string n) {
	number = n;
	}
	string setType(string t) {
	type = t;
	}*/
	void operator++() {// добавление нового элемента префикс
		cout << "Создание нового рейса:\nВведите пункт назначения: ";
		cin >> to;
		cout << "Введите номер рейса: ";
		cin >> number;
		cout << "Введите тип самолета: ";
		cin >> type;
	}

	void show(int curr_n) {// вывод данных
		printf("  | %-16s | %-11s | %-12s | ", to.c_str(), number.c_str(), type.c_str());
		printf("\n");
	}
};

void main(void) {
	AEROFLOT aero[7];
	AEROFLOT *reis = aero;
	int req, exit;
	int cur = 0;
	string current_to;
	system("chcp 1251>nul");
request:
	cout << "Введите номер пункта меню:" << endl << "1: создать спсок рейсов;" << endl << "2: Показать общий список;" << endl << "3: Показать список рейсов для заданного пункта назначения;" << endl << "0: Завершение работы" << endl;
	cin >> req;
	switch (req) {
	case 0: // завершение работы
		return;
	case 1: //++
		for (int i = 0; i < 7; ++i)
			++aero[i];
		goto request;
	case 2: // вывод общего списка 
		cout << "  | Пункт назначения | Номер рейса | Тип самолета |" << endl;
		for (int i = 0; i < 7; ++i)
			(&aero[i])->show(i);
		goto request;
	case 3: // список рейсов для заданного пункта назначения
		cout << "Введите пункт назначения: ";
		cin >> current_to;
		cout << "Список рейсов для заданного пункта назначения:" << endl << endl;
		cur = 0;
		for (int i = 0; i < 7; ++i)
			if (((&aero[i])->getTo()) == current_to) {
				(&aero[i])->show(i);
				cur++;
			}
		if (cur == 0)
			cout << "Рейсы не найдены" << endl << endl;
		goto request;
	default:
		goto error;
	}
error:
	cout << "Ошибка ввода.\nДля возвращения в главное меню введите 1, для завершения работы введите 0:" << endl;
	cin >> exit;
	switch (exit) {
	case 1:
		goto request;
	case 0:
		return;
	default:
		goto error;
	}
	system("pause>nul");
}