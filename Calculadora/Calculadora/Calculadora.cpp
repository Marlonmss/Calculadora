#include "Calculadora.h"
#include <iostream>
using std::cout;
using std::endl;

const string Calculadora::easter_egg = "\t\tnice meme";

Calculadora::Calculadora() : variavel_a(0), variavel_b(0), variavel_c(0), alpha(0,0,0,0,0), gama(0,0,0,0,0), delta(0,0,0,0,0)
{}

Calculadora::Calculadora(const double& aa, const double& bb, const double& cc) 
: variavel_a(aa), variavel_b(bb), variavel_c(cc), alpha(0,0,0,0,0), gama(0,0,0,0,0), delta(0,0,0,0,0)
{}

Calculadora::Calculadora(const Calculadora& co)
{
    variavel_a = co.variavel_a;
    variavel_b = co.variavel_b;
    variavel_c = co.variavel_c;
	alpha = co.alpha;
	gama = co.gama;
	delta = co.delta;
}

Calculadora::Calculadora(const int& dia, const int& mes, const int& ano) : ligou(dia,mes,ano)
{}

void Calculadora::atribuir(const double& aa, const double& bb, const double& cc)
{
    variavel_a = aa;
    variavel_b = bb;
    variavel_c = cc;
}

void Calculadora::imprimir() const
{
    cout << "Valor a = " << variavel_a << "  Valor b = " << variavel_b << "  Valor c = " << variavel_c << endl;
}

void Calculadora::imprimirPontos() const
{
	alpha.imprimir();
	gama.imprimir();
	delta.imprimir();
}

void Calculadora::imprimirData() const
{
	ligou.print();
}

double Calculadora::somar() const
{
    return variavel_a+variavel_b+variavel_c;
}

double Calculadora::multiplicar() const
{
    return variavel_a*variavel_b*variavel_c;
}

double Calculadora::betar() const
{
    return beta*variavel_a*variavel_b*variavel_c;
}

double Calculadora::retorna_beta()
{
    return beta;
}

void Calculadora::divertir(const string& meme)
{
    cout << '\n' << meme << easter_egg << endl;
}

void Calculadora::operarPontos()
{
    alpha = alpha + variavel_a;
    alpha = alpha + variavel_b;
    alpha = alpha + variavel_c;
    gama = gama + variavel_a;
    gama = gama + variavel_b;
    gama = gama + variavel_c;
    delta = delta + variavel_a;
    delta = delta + variavel_b;
    delta = delta + variavel_c;
}

void Calculadora::guardarAntigos()
{
	memorizar(variavel_a, variavel_b, variavel_c);
}