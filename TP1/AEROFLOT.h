#pragma once
#include <iostream>
#define TOMAX 20
#define NMAX 5
#define TYPEMAX 15
using namespace std;

class AEROFLOT
{
private:
	char* to;
	char* number;
	char* type;
public:
	AEROFLOT();
	AEROFLOT(int n);
	AEROFLOT(const AEROFLOT &nt);
	~AEROFLOT();
	char* getTo() const;
	char* getNumber() const;
	char* getType() const;
	void setTo(char* t);
	void setNumber(char* num);
	void setType(char* ty);
	friend ostream& operator <<(ostream& output, AEROFLOT& ptr);
	friend void operator >> (istream& input, AEROFLOT& ptr);
};
