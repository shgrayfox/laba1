#include "ARR.h"
#include <iostream>
#include <windows.h>
#include <locale>
using namespace std;

int main(){
	int ch;
	char* to = "---";
	bool flag = false;
	system("chcp 1251>nul");
	ARRAY* a = new ARRAY(0);
	system("cls");
	a->sort();
	while (1) {
		cout << endl << "1: ����� ������ ������." << endl << "2: �������� ������ ������." << endl << "3: ����� ������ �� ������ ����������." << endl << "0: �����." << endl;
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
					cout << endl << "\t��� ������ � ������ ����� ����������." << endl;
					break;
				default:
					cout << endl << "\t����������� ������." << endl;
				}
			}
			break;
		case (0):
			delete a;
			return 0;
		default:
			cout << "��������� �������." << endl;
		}
	}
}