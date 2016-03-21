#include "Dispositivo.h"

Dispositivo::Dispositivo() : power(0)
{}

Dispositivo::Dispositivo(const Dispositivo& c)
{
    power = c.power;
}


void Dispositivo::ligar()
{
    power = 1;
}

void Dispositivo::desligar()
{
    power = 0;
}

void Dispositivo::imprimir()
{
	cout << power;
}

ostream &operator<<(ostream &output, const Dispositivo &imprime)
{
	if(imprime.power)
		output << "Calculadora ligada.";
	else
		output << "Calculadora desligada.";
}