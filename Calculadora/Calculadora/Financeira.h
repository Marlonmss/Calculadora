#ifndef FINANCEIRA_H
#define FINANCEIRA_H
#include "Calculadora.h"
using namespace std;

class Financeira : public Calculadora
{
    friend ostream &operator<<(ostream &, const Financeira &);
    public:
        Financeira();
        Financeira(const Financeira& c);
        double calcJuros_simples(const double& capital, const double& taxa, const int& periodos);
        double calcjuros_composta(const double& capital, const double& taxa, const int& periodos);
		const Financeira& operator=(const Financeira& c);
		virtual void imprimir() const;
		virtual void truncar();
	protected:
		double valor_simples;
        double valor_composto;
};

#endif // FINANCEIRA_H
