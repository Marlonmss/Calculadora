#include "Data.h"
#include <iostream>
using namespace std;

Data::Data(int ddia, int mmes, int aano)
{
	dia = ddia;
	mes = mmes;
	ano = aano;
}

void Data::print() const
{
    cout << dia << '/' << mes << '/' << ano << endl;
}