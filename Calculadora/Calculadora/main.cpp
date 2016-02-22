#include <iostream>
#include <Calculadora.h>
using namespace std;

int main()
{
	Calculadora A, B(2.0,3.0,4.5), C(15,3,1999);
	Ponto T(1,2,3,4,5), R(1,1,1,1,1),S;
	A.atribuir(2.4,56.77,9.0);
	C.atribuir(3.0,1.0,0.0);
	
	cout << "A soma dos valores de C e: " << C.somar() << endl;
	cout << "A multiplicacao dos valores de A e: " << A.multiplicar() << endl;
	cout << "O modulo de T e: " << T.calcModulo() << endl;
	cout << "A betagem de B e: " << B.betar() << endl;
	cout << "o valor de beta: " << Calculadora::retorna_beta() << endl;
	S = T+R;
	cout << "O ponto S: ";
	S.imprimir();
	cout << "Os valores de A: ";
	A.imprimir();
	A.operarPontos();
	cout << "Os pontos de A: " << endl;
	A.imprimirPontos();
	cout << "A data de C: ";
	C.imprimirData();
	
	Calculadora::divertir("sapinho_zoeirinho");

	return 0;
}
