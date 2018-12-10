#pragma once
#include "AEROFLOT.h"
#define NARR 7
#define ERROR_404 404

class ARRAY{
private:
	AEROFLOT* aero;
	int i, j, k;
public:
	ARRAY();
	ARRAY(int d);
	~ARRAY();
	void show();
	void search(char* t);
	void sort();
};