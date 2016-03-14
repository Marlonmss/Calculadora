#include "Financeira.h"

Financeira::Financeira() : valor_simples(0), valor_composto(0)
{}

Financeira::Financeira(const Financeira& c) : Calculadora(static_cast<Calculadora> (c))
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

void Financeira::imprimir() const
{
	cout << "Juros Simples: " << valor_simples << endl << "Juros Composto: " << valor_composto;
}

ostream &operator<<(ostream &output, const Financeira &imprime)
{
	output << static_cast<Calculadora> (imprime);
    output << imprime.valor_simples << ", " << imprime.valor_composto;
	imprime.imprimirTudo();
    return output;
}