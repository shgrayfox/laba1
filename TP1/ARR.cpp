#include"ARR.h"
#include "AEROFLOT.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

ARRAY::ARRAY(){
	cout << "Введите " << NARR << " записей:" << endl << endl;
	aero = new AEROFLOT[NARR];
	cout << "\tСписок создан." << endl;
}

ARRAY::ARRAY(int d){
	aero = (AEROFLOT*)malloc(sizeof(AEROFLOT)*NARR);
	for (int i = 0; i < NARR; ++i)
		aero[i] = *(new AEROFLOT(i + 1));
	cout << "\tСписок по умолчанию создан." << endl;
}

ARRAY::~ARRAY() {
	//for (int i = 0; i < NARR; ++i)
	delete aero;
	cout << "Список удалён." << endl;
};

void ARRAY::show(){
	for (int i = 0; i < NARR; ++i)
		cout << i + 1 << ": " << *(aero + i);
}

void ARRAY::search(){
	cout << "Введите пункт назначения: ";
	char to[TOMAX];
	cin >> to;
	int mn = 0;
	char* n1;
	for (j = 0; j < NARR; ++j) {
		n1 = aero[j].getTo();
		if (strcmp(n1, to) == 0) {
			mn++;
			cout << j + 1 << ": " << *(aero + j);
		}
	}
	if (mn < 1)
		throw ERROR_400;
}

void ARRAY::sort(){
	int n1, n2;
	for (j = 0; j < (NARR - 1); ++j)
		for (k = j + 1; k < NARR; ++k){
			n1 = aero[j].getNumber();
			n2 = aero[k].getNumber();
			if (n1 > n2)
				swap(aero[k], aero[j]);
		}
	cout << "Сортировка завершена" << endl;
}
