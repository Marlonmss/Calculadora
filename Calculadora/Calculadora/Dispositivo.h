#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

class Dispositivo
{
    public:
        Dispositivo();
        Dispositivo(const Dispositivo& c);
        ~Dispositivo();
        virtual void ligar();
        virtual void desligar();
        virtual void imprimir() const;
    protected:
        bool power;

};

#endif // DISPOSITIVO_H
