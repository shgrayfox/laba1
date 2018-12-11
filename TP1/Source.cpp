#include "ARR.h"
#include <iostream>
#include <windows.h>
#include <locale>
using namespace std;

int main(){
	int ch;
	bool flag = false;
	system("chcp 1251>nul");
	ARRAY* a = new ARRAY(0);
	a->sort();
	system("cls");
	while (1) {
		cout << endl << "1: Вывод списка рейсов." << endl << "2: Изменить список рейсов." << endl << "3: Поиск рейсов по пункту назначения." << endl << "0: Выход." << endl;
		cin >> ch;
		switch (ch) {
		case (1):
			a->show();
			break;
		case (2):
			delete a;
			cout << endl;
			a = new ARRAY;
			a->sort();
			break;
		case (3):
			try{
				a->search();
			}
			catch (int error){
				switch (error) {
				case ERROR_400:
					cout << endl << "\tНет рейсов в данный пункт назначения." << endl;
					break;
				default:
					cout << endl << "\tНеизвестная ошибка." << endl;
				}
			}
			break;
		case (0):
			delete a;
			return 0;
		default:
			cout << "Повторите попытку." << endl;
		}
	}
}