#pragma once

#include "Common.h"

class Tili
{
public:
	Tili(void);
	~Tili(void);


	void Talleta (double euroja );
	double Saldo(void);

protected:
	double saldo;
};

