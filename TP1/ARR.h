#pragma once
#include "AEROFLOT.h"
#define N 7
#define ERROR_301 301
#define ERROR_302 302

class ARRAY{
private:
	AEROFLOT* arr;
	int i, j, k;
public:
	ARRAY();
	ARRAY(int d);
	~ARRAY();
	void show();
	void search(int m);
	void sort();
	void operator++();
	void operator--(int num);
};