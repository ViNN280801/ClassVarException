#include "stdafx.h"
#include "Dps.h"
#include "Structs.h"


void Dps::rec(Element_BI_Derevo * obj, Spisok_Kvitanciy spisok)
{
	if (obj != NULL)
	{
		if (obj->number < spisok.getNumber_Avto())
		{
			rec(obj->right, spisok);
		}
		else
		{
			rec(obj->left, spisok);
		}
	}
	else
	{
		obj = new Element_BI_Derevo;
		obj->number = spisok.getNumber_Avto();
		obj->spisok=spisok.setKvitanciya
	}
		
}

Dps::Dps()
{
}

void Dps::push(Spisok_Kvitanciy obj)
{
	rec(root,obj);
}


void Dps::show_All()
{

}

Dps::~Dps()
{
}
