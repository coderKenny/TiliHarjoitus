#include "SaastoTili.h"


SaastoTili::SaastoTili(void)
{
}

SaastoTili::SaastoTili(double saldo)
{
	this->saldo=saldo;
}


SaastoTili::~SaastoTili(void)
{
}

void SaastoTili::setYlaraja(double raja)
{
	this->nostoYlaraja=raja;
}

void SaastoTili::Talleta (double euroja )
{
	saldo=euroja; // Protected member
}

double SaastoTili::Saldo(void)
{
	return saldo;
}


bool SaastoTili::Nosto(double amount)
{
	if(amount >nostoYlaraja)
	{
		cout<<"Noston ylaraja "<<nostoYlaraja<<" saavuttu !!\n";
		cout<<"Nostetaan maksimi maara ( "<<this->nostoYlaraja<<" )\n\n";
		amount=nostoYlaraja;
	}


	if((saldo-amount)==0)
	{
		cout<<"Tili menee tyhjaksi\n";
		cout<<"Nostit "<<amount;
		saldo=0;
		cout<<endl;
		cout<<"Saldo on nyt : "<<saldo;
		return true;
	}

	else if((saldo-amount)<0)
	{
		cout<<"Tilin saldo alittuisi !";
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