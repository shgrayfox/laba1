#include "AEROFLOT.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
using namespace std;

AEROFLOT::AEROFLOT(){
	cin >> *this;
	cout << "\tРейс создан." << endl << endl;
};

AEROFLOT::AEROFLOT(int n){
	bool flag = false;
	switch (n) {
	case 1:
		to = "Москва";
		number = "174";
		type = "Ту-134";
		flag = true;
		break;
	case 2:
		to = "Москва";
		number = "231";
		type = "Боинг-777";
		flag = true;
		break;
	case 3:
		to = "Санкт-Петербург";
		number = "175";
		type = "Ту-134";
		flag = true;
		break;
	case 4:
		to = "Санкт-Петербург";
		number = "232";
		type = "Боинг-777";
		flag = true;
		break;
	case 5:
		to = "Москва";
		number = "64";
		type = "ИЛ-86";
		flag = true;
		break;
	case 6:
		to = "Курган";
		number = "74";
		type = "ИЛ-86";
		flag = true;
		break;
	case 7:
		to = "Санкт-Петербург";
		number = "774";
		type = "Боинг-767";
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
		cout << "\tРейс по умолчанию создан." << endl;
	else
		cout << "\tПустая запись создана." << endl;
};

AEROFLOT::AEROFLOT(const AEROFLOT &nt){
	to = new char[sizeof(nt.getTo())];
	number = new char[sizeof(nt.getNumber())];
	type = new char[sizeof(nt.getType())];
	cout << "\tЗапись копирована." << endl;
}

AEROFLOT::~AEROFLOT(){
	cout << "\tЗапись удалена." << endl;
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
	cout << "Название пункта назначения: ";	
	cin >> ptr.to;
	cout << "Номер рейса: ";
	cin >> ptr.number;
	cout << "Тип самолета: ";
	cin >> ptr.type;
}

