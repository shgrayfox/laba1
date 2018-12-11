#pragma once
#include <iostream>
#define TOMAX 20
#define TYPEMAX 15
using namespace std;

class AEROFLOT{
private:
	char* to;
	int number;
	char* type;
public:
	AEROFLOT();
	AEROFLOT(int n);
	AEROFLOT(const AEROFLOT &nt);
	~AEROFLOT();
	char* getTo() const;
	int getNumber() const;
	char* getType() const;
	void setTo(char* t);
	void setNumber(int num);
	void setType(char* ty);
	friend ostream& operator <<(ostream& output, AEROFLOT& ptr);
	friend void operator >> (istream& input, AEROFLOT& ptr);
};
