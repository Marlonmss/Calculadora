#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Data.h"
#include "Ponto.h"
#include "Memoria.h"
#include "Dispositivo.h"
#include <string>
#include <iostream>
using namespace std;

class Calculadora : public Dispositivo
{
    friend ostream &operator<<(ostream &, const Calculadora &);
	
    public:
        Calculadora();
        Calculadora(const double& aa, const double& bb, const double& cc);
        Calculadora(const Calculadora& co);
        Calculadora(const int& dia, const int& mes, const int& ano);
        virtual void atribuir(const double& aa, const double& bb, const double& cc);
        virtual void imprimir() const;
		virtual void imprimirPontos() const;
		virtual void imprimirData() const;
		virtual void imprimirTudo() const;
        virtual double somar() const;
        virtual double multiplicar() const;
        virtual double betar() const;
        static double retorna_beta();
        static void divertir(const string& meme);
        virtual void operarPontos();
		virtual void guardarAntigos();
		virtual void adicionarPonto(const Ponto& pont);
		const Calculadora& operator=(const Calculadora& co);
		
	protected:
		double variavel_a;
        double variavel_b;
        double variavel_c;
        Ponto alpha;
        Ponto gama;
        Ponto delta;
		Ponto* lista;
		Memoria memo;
		int dim;
		
    private:
        const static string easter_egg;
        const static double beta = 1.6646234298426847;
        const Data ligou;
};

#endif // CALCULADORA_H