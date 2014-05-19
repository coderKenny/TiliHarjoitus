#include "LuotollinenTili.h"


LuotollinenTili::LuotollinenTili(void)
{
}

LuotollinenTili::LuotollinenTili(double saldo)
{
	this->saldo=saldo;
}


LuotollinenTili::~LuotollinenTili(void)
{
}


void LuotollinenTili::setLuottoraja(double amount)
{
	luottoRaja=amount;
}

bool LuotollinenTili::Nosto(double amount)
{
	if((saldo+luottoRaja)<amount)
	{
		cout<<"Et voi ylittaa luottorajaasi joka on "<<luottoRaja<<endl;
		return false;
	}


	else
	{
		cout<<"OK nosto !\n";
		saldo-=amount;
		cout<<"Saldo on nyt : "<<saldo;
		return true;
	}
}