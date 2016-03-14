#include "Moeda.h"

Moeda::Moeda() : real(0), dolar(0)
{}

Moeda::~Moeda()
{
}

Moeda::Moeda(const Moeda& c) : Financeira(static_cast<Financeira> (c))
{
	real = c.real;
	dolar = c.dolar;
	valor_simples = c.valor_simples;
	valor_composto = c.valor_composto;
}

double Moeda::converter_para_real(const double& dol, const double& fator)
{
	return real = fator/dol;
}

double Moeda::converter_para_dolar(const double& rea, const double& fator)
{
	return dolar = fator*rea;
}

ostream &operator<<(ostream &output, const Moeda &imprime)
{
	output << static_cast<Financeira> (imprime);
    output << "Valor em reais: " << imprime.real << endl << "Valor em dolares: " << imprime.dolar;
	imprime.imprimir();
    return output;
}