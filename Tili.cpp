#include "Tili.h"


Tili::Tili(void)
{
}


Tili::~Tili(void)
{
}

void Tili::Talleta (double euroja )
{
	this->saldo+=euroja;
				
}

double Tili::Saldo(void)
{
	return saldo;
}