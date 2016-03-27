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
        void atribuir(const double& aa, const double& bb, const double& cc);
        virtual void imprimir() const = 0;
		void imprimirPontos() const;
		void imprimirData() const;
		void imprimirTudo() const;
        double somar() const;
        double multiplicar() const;
        double betar() const;
        static double retorna_beta();
        static void divertir(const string& meme);
        void operarPontos();
		void guardarAntigos();
		void adicionarPonto(const Ponto& pont);
		const Calculadora& operator=(const Calculadora& co);
		virtual void ligar();
		virtual void desligar();
		virtual void truncar() = 0;
		
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