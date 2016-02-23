#include "Memoria.h"

Memoria::Memoria() : reg1(0),  reg2(0), reg3(0)
{}

void Memoria::memorizar(const double& a, const double& b, const double& c)
{
	reg1 = a;
	reg2 = b;
	reg3 = c;
}