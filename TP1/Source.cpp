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
	void operator++() {// ���������� ������ �������� �������
		cout << "�������� ������ �����:\n������� ����� ����������: ";
		cin >> to;
		cout << "������� ����� �����: ";
		cin >> number;
		cout << "������� ��� ��������: ";
		cin >> type;
	}

	void show(int curr_n) {// ����� ������
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
	cout << "������� ����� ������ ����:" << endl << "1: ������� ����� ������;" << endl << "2: �������� ����� ������;" << endl << "3: �������� ������ ������ ��� ��������� ������ ����������;" << endl << "0: ���������� ������" << endl;
	cin >> req;
	switch (req) {
	case 0: // ���������� ������
		return;
	case 1: //++
		for (int i = 0; i < 7; ++i)
			++aero[i];
		goto request;
	case 2: // ����� ������ ������ 
		cout << "  | ����� ���������� | ����� ����� | ��� �������� |" << endl;
		for (int i = 0; i < 7; ++i)
			(&aero[i])->show(i);
		goto request;
	case 3: // ������ ������ ��� ��������� ������ ����������
		cout << "������� ����� ����������: ";
		cin >> current_to;
		cout << "������ ������ ��� ��������� ������ ����������:" << endl << endl;
		cur = 0;
		for (int i = 0; i < 7; ++i)
			if (((&aero[i])->getTo()) == current_to) {
				(&aero[i])->show(i);
				cur++;
			}
		if (cur == 0)
			cout << "����� �� �������" << endl << endl;
		goto request;
	default:
		goto error;
	}
error:
	cout << "������ �����.\n��� ����������� � ������� ���� ������� 1, ��� ���������� ������ ������� 0:" << endl;
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