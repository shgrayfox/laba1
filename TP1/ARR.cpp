#include"ARR.h"
#include "AEROFLOT.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

ARRAY::ARRAY(){
	cout << "������� " << NARR << " �������:" << endl << endl;
	aero = new AEROFLOT[NARR];
	cout << "\t������ ������." << endl;
}

ARRAY::ARRAY(int d){
	aero = (AEROFLOT*)malloc(sizeof(AEROFLOT)*NARR);
	for (int i = 0; i < NARR; ++i)
		aero[i] = *(new AEROFLOT(i + 1));
	cout << "\t������ �� ��������� ������." << endl;
}

ARRAY::~ARRAY() {
	for (i = NARR-1; i >0; --i) {
		AEROFLOT ptr = aero[i];
			delete &ptr;
		}
		cout << "\t������ �����." << endl;
};

void ARRAY::show(){
	for (int i = 0; i < NARR; ++i)
		cout << i + 1 << ": " << *(aero + i);
}

void ARRAY::search(){
	cout << "������� ����� ����������: ";
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
	cout << "���������� ���������" << endl;
}
