#include <iostream>
#include "Calculadora.h"
#include "Cientifica.h"
#include "Financeira.h"
#include <vector>
using namespace std;

int main()
{
    const int n = 3;
	
	vector<Calculadora *> vteste(n);
	
	vteste[0] = new Cientifica();
	vteste[1] = new Cientifica();
	vteste[2] = new Financeira();
    
    for(int i = 0; i < n; i++)
	{
        Cientifica *pontcien = dynamic_cast < Cientifica * > (vteste[i]);
		Financeira *pontfinan = dynamic_cast < Financeira * > (vteste[i]);

        if(pontcien)
        {
		   double temp;
           cout << "Digite um valor para calcular o seno: ";
		   cin >> temp;
		   pontcien->seno(temp);
		   cout << "Digite um valor para calcular o cosseno: ";
		   cin >> temp;
		   pontcien->cosseno(temp);
		   cout << "Digite um valor para calcular a tangente: ";
		   cin >> temp;
		   pontcien->tangente(temp);
		}
		
		if(pontfinan)
		{
			double p, i, n;
			cout << "Digite o capital, taxa e o periodo para calcular os juros simples e compostos: ";
			cin >> p >> i >> n;
			pontfinan->juros_simples(p,i,n);
			pontfinan->juros_compostos(p,i,n);
		}
		vteste[i]->imprimir();
		cout << endl;
	}
	
	vteste[0]->truncar();
	cout << "\nO valor truncado e:\n";
	vteste[0]->imprimir();
	return 0;
}
