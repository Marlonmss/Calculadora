#ifndef FINANCEIRA_H
#define FINANCEIRA_H
#include <cmath>
#include "Calculadora.h"
using namespace std;

class Financeira : public Calculadora
{
    friend ostream &operator<<(ostream &, const Financeira &);
    public:
        Financeira();
        Financeira(const Financeira& c);
        double juros_simples(const double& capital, const double& taxa, const int& periodos);
        double juros_compostos(const double& capital, const double& taxa, const int& periodos);
		const Financeira& operator=(const Financeira& c);
		virtual void imprimir() const;
		virtual void truncar();
        virtual bool ligar();
        virtual bool desligar();
	protected:
		double valor_simples;
        double valor_composto;
        bool power;
};

#endif // FINANCEIRA_H
