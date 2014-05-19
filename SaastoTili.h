#pragma once
#include "tili.h"
class SaastoTili : public Tili
{
public:
	SaastoTili(void);

	SaastoTili(double saldo);
	~SaastoTili(void);

	bool Nosto(double amount);
	

	void setYlaraja(double raja);

	void Talleta (double euroja );  // Override virtual member
	double Saldo(void);				// Override virtual member

private:
	double nostoYlaraja;
};

