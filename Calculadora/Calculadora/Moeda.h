#ifndef MOEDA_H
#define MOEDA_H
#include<iostream>
#include "Financeira.h"

class Moeda : public Financeira
{
	friend ostream &operator<<(ostream &, const Moeda &);
	public:
		Moeda();
		Moeda(const Moeda& c);
		~Moeda();
		double converter_para_real(const double& dol, const double& fator);
		double converter_para_dolar(const double& rea, const double& fator);
	private:
		double real;
		double dolar;
};

#endif // MOEDA_H
