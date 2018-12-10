#include"ARR.h"
#include "AEROFLOT.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
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
		delete aero;
};

void ARRAY::show(){
	for (int i = 0; i < NARR; ++i)
		cout << i + 1 << ": " << *(aero + i);
}

void ARRAY::search(char* t){
	int mn = 0;
		for (i = 0; i < NARR; ++i)
			if (strcmp(aero[i].getTo(), t) == 0) {
				mn++;
				cout << mn << ": " << aero[i];
			}
		if (mn == 0)
			cout << endl << "Нет искомых рейсов." << endl;
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
