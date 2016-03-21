#include "Debug.h"

Debug::Debug(const Debug& c) : Calculadora(static_cast<Calculadora> (c))
{
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

void Debug::tempoExecucao()
{
	time(&tempo);
}