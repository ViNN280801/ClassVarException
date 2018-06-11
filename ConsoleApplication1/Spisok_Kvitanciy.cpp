#include "stdafx.h"
#include "Spisok_Kvitanciy.h"
#include <iostream>

Spisok_Kvitanciy::Spisok_Kvitanciy()
{
}

int Spisok_Kvitanciy::getNumber_Avto()
{
	return (number.Gos_Nomer);
}

void Spisok_Kvitanciy::setKvitanciya(Kvitancii obj)
{
	spisok.push_back(obj);
}

void Spisok_Kvitanciy::show_Spisoc_Kvitanciy()
{
	list <Kvitancii>::iterator Iter;
	for (Iter = spisok.begin(); Iter != spisok.end(); Iter++)
		cout << " " << *Iter;

}


Spisok_Kvitanciy::~Spisok_Kvitanciy()
{
}


