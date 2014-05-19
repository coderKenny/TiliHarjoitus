#pragma once
#include "tili.h"
class LuotollinenTili : public Tili
{
public:
	LuotollinenTili(void);

	LuotollinenTili(double saldo);
	~LuotollinenTili(void);

	void setLuottoraja(double amount);

	bool Nosto(double amount);


private:
	double luottoRaja;
};

