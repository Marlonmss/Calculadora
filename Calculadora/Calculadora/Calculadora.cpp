#include "Calculadora.h"
#include <iostream>
using std::cout;
using std::endl;

const string Calculadora::easter_egg = "\t\tnice meme";

Calculadora::Calculadora() : a(0), b(0), c(0)
{}

Calculadora::Calculadora(const double& aa, const double& bb, const double& cc) : a(aa), b(bb), c(cc)
{}

Calculadora::Calculadora(const Calculadora& co)
{
    a = co.a;
    b = co.b;
    c = co.c;
}

Calculadora::Calculadora(const int& dia, const int& mes, const int& ano) : ligou(dia,mes,ano)
{}

void Calculadora::atribuir(const double& aa, const double& bb, const double& cc)
{
    a = aa;
    b = bb;
    c = cc;
}

void Calculadora::imprimir() const
{
    cout << "Valor a = " << a << "  Valor b = " << b << "  Valor c = " << c << endl;
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
    return a+b+c;
}

double Calculadora::multiplicar() const
{
    return a*b*c;
}

double Calculadora::betar() const
{
    return beta*a*b*c;
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
    alpha = alpha + a;
    alpha = alpha + b;
    alpha = alpha + c;
    gama = gama + a;
    gama = gama + b;
    gama = gama + c;
    delta = delta + a;
    delta = delta + b;
    delta = delta + c;
}