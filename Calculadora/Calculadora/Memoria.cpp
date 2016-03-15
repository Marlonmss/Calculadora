#include "Memoria.h"

Memoria::Memoria() : reg1(0),  reg2(0), reg3(0)
{}

void Memoria::memorizar(const double& a, const double& b, const double& c)
{
	reg1 = a;
	reg2 = b;
	reg3 = c;
}

void Memoria::imprimir() const
{
	cout << "Memo 1 :" << reg1 << endl << "Memo 2 :" << reg2 << endl << "Memo 3 :" << reg3;
}

const Memoria& Memoria::operator=(const Memoria& co)
{
	reg1 = co.reg1;
	reg2 = co.reg2;
	reg3 = co.reg3;
}