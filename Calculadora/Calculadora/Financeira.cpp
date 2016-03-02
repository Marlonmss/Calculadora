#include "Financeira.h"

Financeira::Financeira() : valor_simples(0), valor_composto(0)
{}

Financeira::Financeira(const Financeira& c)
{
    valor_simples = c.valor_simples;
    valor_composto = c.valor_composto;
}

ostream &operator<<(ostream &output, const Financeira &imprime)
{
    output << imprime.valor_simples << ", " << imprime.valor_composto;
    return output;
}