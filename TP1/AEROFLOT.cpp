#include "AEROFLOT.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
using namespace std;

AEROFLOT::AEROFLOT(){
	cin >> *this;
	cout << "\t���� ������." << endl << endl;
};

AEROFLOT::AEROFLOT(int n){
	bool flag = false;
	switch (n) {
	case 1:
		to = "������";
		number = "174";
		type = "��-134";
		flag = true;
		break;
	case 2:
		to = "������";
		number = "231";
		type = "�����-777";
		flag = true;
		break;
	case 3:
		to = "�����-���������";
		number = "175";
		type = "��-134";
		flag = true;
		break;
	case 4:
		to = "�����-���������";
		number = "232";
		type = "�����-777";
		flag = true;
		break;
	case 5:
		to = "������";
		number = "64";
		type = "��-86";
		flag = true;
		break;
	case 6:
		to = "������";
		number = "74";
		type = "��-86";
		flag = true;
		break;
	case 7:
		to = "�����-���������";
		number = "774";
		type = "�����-767";
		flag = true;
		break;
	case 0:
		break;
	default:
		to = "-";
		number = "-";
		type = "-";
	}
	if (flag == true)
		cout << "\t���� �� ��������� ������." << endl;
	else
		cout << "\t������ ������ �������." << endl;
};

AEROFLOT::AEROFLOT(const AEROFLOT &nt){
	to = new char[sizeof(nt.getTo())];
	number = new char[sizeof(nt.getNumber())];
	type = new char[sizeof(nt.getType())];
	cout << "\t������ ����������." << endl;
}

AEROFLOT::~AEROFLOT(){
	cout << "\t������ �������." << endl;
};

void AEROFLOT::setTo(char* t) { to = t; };
void AEROFLOT::setNumber(char* num) { number = num; };
void AEROFLOT::setType(char* ty) { type = ty; };
char* AEROFLOT::getTo() const { return to; }
char* AEROFLOT::getNumber() const { return number; }
char* AEROFLOT::getType() const { return type; }

ostream& operator <<(ostream& output, AEROFLOT& ptr)
{
	cout << ptr.to << ptr.number << ptr.type << endl;
	return output;
}
void operator >> (istream& input, AEROFLOT& ptr)
{
	ptr.to = new char[TOMAX];
	ptr.number = new char[NMAX];
	ptr.type = new char[TYPEMAX];
	cout << "�������� ������ ����������: ";	
	cin >> ptr.to;
	cout << "����� �����: ";
	cin >> ptr.number;
	cout << "��� ��������: ";
	cin >> ptr.type;
}

