#include "Financeira.h"

Financeira::Financeira() : valor_simples(0), valor_composto(0)
{}

Financeira::Financeira(const Financeira& c)
{
    valor_simples = c.valor_simples;
    valor_composto = c.valor_composto;
	variavel_a = c.variavel_a;
	variavel_b = c.variavel_b;
	variavel_c = c.variavel_c;
	alpha = c.alpha;
	gama = c.gama;
	delta = c.delta;
	lista = new Ponto[dim];
	for(int i=0; i<dim; i++)
		lista[i] = c.lista[i];
	memo = c.memo;
}

double Financeira::juros_simples(const double& capital, const double& taxa, const int& periodos)
{
	return valor_simples = capital * taxa * periodos;
}

double Financeira::juros_compostos(const double& capital, const double& taxa, const int& periodos)
{
	double montante = capital*pow((1+taxa), periodos);
	return valor_composto = montante - capital;
}

void Financeira::imprimir() const
{
	cout << "Juros Simples: " << valor_simples << endl << "Juros Composto: " << valor_composto;
}

ostream &operator<<(ostream &output, const Financeira &imprime)
{
    output << imprime.valor_simples << ", " << imprime.valor_composto;
	imprime.imprimirTudo();
    return output;
}

const Financeira& Financeira::operator=(const Financeira& c)
{
	valor_simples = c.valor_simples;
    valor_composto = c.valor_composto;
	variavel_a = c.variavel_a;
	variavel_b = c.variavel_b;
	variavel_c = c.variavel_c;
	alpha = c.alpha;
	gama = c.gama;
	delta = c.delta;
	lista = new Ponto[dim];
	for(int i=0; i<dim; i++)
		lista[i] = c.lista[i];
	memo = c.memo;
}

void Financeira::truncar()
{
	valor_simples = (int) valor_simples;
	valor_composto = (int) valor_composto;
}

bool Financeira::ligar()
{
    return power = 1;
}

bool Financeira::desligar()
{
    return power = 0;
}