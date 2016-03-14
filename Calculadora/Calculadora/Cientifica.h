#ifndef CIENTIFICA_H
#define CIENTIFICA_H
#include <cmath>
#include "Calculadora.h"
using namespace std;

class Cientifica : public Calculadora
{
    friend ostream &operator<<(ostream &, const Cientifica &);
    public:
        Cientifica();
        Cientifica(const Cientifica& c);
        double seno(const double& teta);
        double cosseno(const double& teta);
        double tangente(const double& teta);
    private:
        double valor_seno;
        double valor_cosseno;
        double valor_tangente;
};

#endif // CIENTIFICA_H
