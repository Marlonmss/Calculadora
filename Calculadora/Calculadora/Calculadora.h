#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Data.h"
#include "Ponto.h"
#include <string>
using std::string;

class Calculadora
{
    public:
        Calculadora();
        Calculadora(const double& aa, const double& bb, const double& cc);
        Calculadora(const Calculadora& co);
        Calculadora(const int& dia, const int& mes, const int& ano);
        void atribuir(const double& aa, const double& bb, const double& cc);
        void imprimir() const;
		void imprimirPontos() const;
		void imprimirData() const;
        double somar() const;
        double multiplicar() const;
        double betar() const;
        static double retorna_beta();
        static void divertir(const string& meme);
        void operarPontos();
        void listarPontos(Ponto* pont);
    private:
        double a;
        double b;
        double c;
        Ponto alpha;
        Ponto gama;
        Ponto delta;
        const static string easter_egg;
        const static double beta = 1.6646234298426847;
        const Data ligou;
};

#endif // CALCULADORA_H