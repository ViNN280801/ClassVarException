#pragma once
#include<string>
#include"Structs.h"
using namespace std;
class Kvitancii
{
private:
	int shtraff;
	Gos number;
	date dob;
public:

	Kvitancii();
	Kvitancii(Gos number, date dob, int shtraff);
	Kvitancii operator=(Kvitancii obj);
	friend ostream &operator <<(ostream &os, Kvitancii obj);
	~Kvitancii();
};

