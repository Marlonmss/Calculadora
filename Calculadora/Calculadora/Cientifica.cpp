#include "Cientifica.h"


Cientifica::Cientifica() : valor_seno(0), valor_cosseno(0), valor_tangente(0)
{}

Cientifica::Cientifica(const Cientifica& c)
{
    valor_seno = c.valor_seno;
    valor_cosseno = c.valor_cosseno;
    valor_tangente = c.valor_tangente;
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

double Cientifica::seno(const double& teta)
{
    return valor_seno = sin(teta);
}

double Cientifica::cosseno(const double& teta)
{
    return valor_cosseno = cos(teta);
}

double Cientifica::tangente(const double& teta)
{
    return valor_tangente = tan(teta);
}

ostream &operator<<(ostream &output, const Cientifica &imprime)
{
    output << imprime.valor_seno << ", " 
	<< imprime.valor_cosseno << ", " 
	<< imprime.valor_tangente << ", ";
	imprime.imprimirTudo();
    return output;
}

const Cientifica& Cientifica::operator=(const Cientifica& c)
{
	valor_seno = c.valor_seno;
    valor_cosseno = c.valor_cosseno;
    valor_tangente = c.valor_tangente;
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

void Cientifica::imprimir() const
{
	cout << "Valor do seno: " << valor_seno << endl
	<< "Valor do cosseno: " << valor_cosseno << endl
	<< "Valor da tangente" << valor_tangente;
}

void Cientifica::truncar()
{
	valor_seno = (int) valor_seno;
	valor_cosseno = (int) valor_cosseno;
	valor_tangente = (int) valor_tangente;
}