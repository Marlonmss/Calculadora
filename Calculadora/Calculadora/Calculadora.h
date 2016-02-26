#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Data.h"
#include "Ponto.h"
#include "Memoria.h"
#include <string>
#include <iostream>
#include <ios>
using std::string;

class Calculadora
{
    friend ostream &operator<<(ostream &, const Calculadora &);
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
		void guardarAntigos();
		void adicionarPonto(const Ponto& pont, int& n, Ponto lista[]);
    private:
        double variavel_a;
        double variavel_b;
        double variavel_c;
        Ponto alpha;
        Ponto gama;
        Ponto delta;
		Ponto Lista[];
		Memoria variaveis;
        const static string easter_egg;
        const static double beta = 1.6646234298426847;
        const Data ligou;
};

#endif // CALCULADORA_H