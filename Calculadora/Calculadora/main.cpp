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
    bool cientifica1 = vteste[0] -> ligar();
    cout << "Calculadora Cientifica 1 está ligada." << endl;
	vteste[1] = new Cientifica();
    bool cientifica2 = vteste[1] -> ligar();
    cout << "Calculadora Cientifica 2 está ligada." << endl;
	vteste[2] = new Financeira();
    bool financeira1 = vteste[2] -> ligar();
    cout << "Calculadora Financeira 1 está ligada." << endl;
    
    for(int i = 0; i < n; i++)
	{
        Cientifica *pontcien = dynamic_cast < Cientifica * > (vteste[i]);
		Financeira *pontfinan = dynamic_cast < Financeira * > (vteste[i]);

        if(pontcien && cientifica1 && cientifica2)
        {
			cout << "\n\tCalculadora Cientifica "<< i+1 << ": " << endl;
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
		
		if(pontfinan && financeira1)
		{
			cout << "\n\tCalculadora Financeira 1: " << endl;
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
    
    for(int i=0; i<n; i++)
        vteste[0] -> desligar();
        
    cout << "\n\nAs Calculadoras desligaram." << endl;

	return 0;
}
