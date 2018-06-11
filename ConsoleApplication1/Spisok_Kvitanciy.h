#pragma once
#include"Structs.h"
#include<list>
#include"Kvitancii.h"
class Spisok_Kvitanciy
{
private:
	Gos number;
	list<Kvitancii> spisok;

public:
	Spisok_Kvitanciy();
	int getNumber_Avto();
	void setKvitanciya(Kvitancii obj);
	void show_Spisoc_Kvitanciy();


	~Spisok_Kvitanciy();
};

