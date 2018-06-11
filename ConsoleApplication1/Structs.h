#pragma once
#include<string>
#include"Spisok_Kvitanciy.h"
using namespace std;
struct date
{
	int day;
	int month;
	int year;
};
struct Gos
{
	int Gos_Nomer;
	int region;
	string seriya;
};
struct Element_BI_Derevo
{
	int number;
	Element_BI_Derevo *left;
	Element_BI_Derevo *right;
	Spisok_Kvitanciy spisok;
};
