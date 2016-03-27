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
        virtual void ligar() = 0;
        virtual void desligar() = 0;
    protected:
        bool power;

};

#endif // DISPOSITIVO_H
