#include "stdafx.h"
#include "Kvitancii.h"


Kvitancii::Kvitancii()
{
}

Kvitancii::Kvitancii(Gos number, date dob, int shtraff)
{
	this->shtraff = shtraff;
	this->dob.day = dob.day;
	this->dob.month = dob.month;
	this->dob.year = dob.year;
	this->number.Gos_Nomer = number.Gos_Nomer;
	this->number.region = number.region;
	this->number.seriya = number.seriya;
}

Kvitancii Kvitancii::operator=(Kvitancii obj)
{
	this->shtraff = obj.shtraff;
	this->dob.day = obj.dob.day;
	this->dob.month = obj.dob.month;
	this->dob.year = obj.dob.year;
	this->number.Gos_Nomer = obj.number.Gos_Nomer;
	this->number.region = obj.number.region;
	this->number.seriya = obj.number.seriya;
	return *this;
}


Kvitancii::~Kvitancii()
{
}

ostream & operator<<(ostream & os, Kvitancii obj)
{
	os << obj.shtraff;
	os << obj.number.Gos_Nomer;
	os << obj.number.region;
	os << obj.number.seriya;
	os << obj.dob.day;
	os << obj.dob.month;
	os << obj.dob.year;
}
