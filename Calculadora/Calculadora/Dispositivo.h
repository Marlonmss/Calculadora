#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H
#include <iostream>
using namespace std;

class Dispositivo
{
    friend ostream &operator<<(ostream &, const Dispositivo &);
	public:
        Dispositivo();
        Dispositivo(const Dispositivo& c);
        virtual void ligar();
        virtual void desligar();
		virtual void imprimir();
    protected:
        bool power;

};

#endif // DISPOSITIVO_H
