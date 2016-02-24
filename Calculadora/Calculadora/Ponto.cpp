#include "Ponto.h"
#include<cmath>
#include<iostream>
using namespace std;

Ponto::Ponto() : x(0), y(0), z(0), t(0), u(0)
{}

Ponto::Ponto(const double& xx, const double& yy, const double& zz, const double& tt, const double& uu) : x(xx), y(yy), z(zz), t(tt), u(uu)
{}

void Ponto::imprimir() const
{
	cout << '(' << x << ", " << y << ", " << z << ", " << t << ", " << u << ')' << endl;
}

double Ponto::calcModulo() const
{
    return sqrt(x*x+y*y+z*z+t*t+u*u);
}

Ponto Ponto::operator+(Ponto B)
{
    return Ponto(x+B.x,y+B.y,z+B.z,t+B.t,u+B.u);
}
Ponto Ponto::operator+(const double& n)
{
    return Ponto(x+n,y+n,z+n,t+n,u+n);
}
Ponto Ponto::operator-(Ponto B)
{
    return Ponto(x-B.x,y-B.y,z-B.z,t-B.t,u-B.u);
}
Ponto Ponto::operator-(const double& n)
{
    return Ponto(x-n,y-n,z-n,t-n,u-n);
}
Ponto Ponto::operator*(Ponto B)
{
    return Ponto(x*B.x,y*B.y,z*B.z,t*B.t,u*B.u);
}
Ponto Ponto::operator*(const double& n)
{
    return Ponto(x*n,y*n,z*n,t*n,u*n);
}
Ponto Ponto::operator/(Ponto B)
{
    return Ponto(x/B.x,y/B.y,z/B.z,t/B.t,u/B.u);
}
Ponto Ponto::operator/(const double& n)
{
    return Ponto(x/n,y/n,z/n,t/n,u/n);
}

bool Ponto::operator==(const Ponto& B)
{
    if(x==B.x && y==B.y && z==B.z && t==B.t && u==B.u)
        return true;
    return false;
}

void Ponto::operator=(const Ponto& B)
{
    x = B.x;
    y = B.y;
    z = B.z;
    t = B.t;
    u = B.u;
}

