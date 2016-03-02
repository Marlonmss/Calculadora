#include "Cientifica.h"


Cientifica::Cientifica() : valor_seno(0), valor_cosseno(0), valor_tangente(0)
{}

Cientifica::Cientifica(const Cientifica& c)
{
    valor_seno = c.valor_seno;
    valor_cosseno = c.valor_cosseno;
    valor_tangente = c.valor_tangente;
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
    output << imprime.valor_seno << ", " << imprime.valor_cosseno << ", " << imprime.valor_tangente;
    return output;
}