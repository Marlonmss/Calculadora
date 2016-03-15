#ifndef MEMORIA_H
#define MEMORIA_H
#include <iostream>
using namespace std;

class Memoria
{
	public:
		Memoria();
		void memorizar(const double& a, const double& b, const double& c);
		void imprimir() const;
		const Memoria& operator=(const Memoria& co);
	private:
		double reg1;
		double reg2;
		double reg3;
};

#endif // MEMORIA_H
