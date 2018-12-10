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
		number = 174;
		type = "Ту-134";
		flag = true;
		break;
	case 2:
		to = "Санкт-Петербург";
		number = 175;
		type = "Ту-134";
		flag = true;
		break;
	case 3:
		to = "Москва";
		number = 246;
		type = "Боинг-747";
		flag = true;
		break;
	case 4:
		to = "Санкт-Петербург";
		number = 245;
		type = "Боинг-777";
		flag = true;
		break;
	case 5:
		to = "Курган";
		number = 178;
		type = "ИЛ-86";
		flag = true;
		break;
	case 6:
		to = "Курган";
		number = 74;
		type = "ИЛ-86";
		flag = true;
		break;
	case 7:
		to = "Москва";
		number = 14;
		type = "Ту-134";
		flag = true;
		break;
	case 0:
		break;
	default:
		to = "-";
		number = 0;
		type = "-";
	}
	if (flag == true)
		cout << "\tРейс по умолчанию создан." << endl;
	else
		cout << "\tПустая запись." << endl;
};

AEROFLOT::AEROFLOT(const AEROFLOT &nt){
	to = new char[sizeof(nt.getTo())];
	to = nt.getTo();
	number = nt.getNumber();
	type = new char[sizeof(nt.getType())];
	type = (nt.getType());
}

AEROFLOT::~AEROFLOT(){
		cout << "\tУспешное удаление." << endl;	
};

void AEROFLOT::setTo(char* t) { to = t; };
void AEROFLOT::setNumber(int num) { number = num; };
void AEROFLOT::setType(char* ty) { type = ty; };
char* AEROFLOT::getTo() const { return to; }
int AEROFLOT::getNumber() const { return number; }
char* AEROFLOT::getType() const { return type; }

ostream& operator <<(ostream& output, AEROFLOT& ptr){
	cout << "Название пункта назначения: " << ptr.to << endl << "Номер рейса: " << ptr.number << endl << "Тип самолета: " << ptr.type << endl << endl;
	return output;
}
void operator >> (istream& input, AEROFLOT& ptr){
	ptr.to = new char[TOMAX];
	ptr.number = 0;
	ptr.type = new char[TYPEMAX];
	cout << "Название пункта назначения: ";	
	cin >> ptr.to;
	cout << "Номер рейса: ";
	cin >> ptr.number;
	cout << "Тип самолета: ";
	cin >> ptr.type;
}

