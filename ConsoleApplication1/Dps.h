#pragma once
#include"Kvitancii.h"
#include"Spisok_Kvitanciy.h"
#include"Structs.h"
class Dps
{
	Element_BI_Derevo *root;
	void rec(Element_BI_Derevo *obj, Spisok_Kvitanciy spisok);
public:
	Dps();
	void push(Spisok_Kvitanciy obj);
		/*	- ������ ���������� ���� ������(�� ������� ����� � ������ ��������������, ���������� �� ����);
		-���������� ������ �� ��������� ������;
		-���������� ������ �� ��������� �������.*/
		void show_All();
		void show_number(Gos number);
		void show_Diapozon_Number(Gos number1, Gos Number2);

	~Dps();
};

