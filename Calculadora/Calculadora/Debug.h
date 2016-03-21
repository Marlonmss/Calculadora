#ifndef DEBUG_H
#define DEBUG_H
#include <ctime>
#include "Calculadora.h"

class Debug : public Calculadora
{
	public:
		Debug(const Debug& c);
		virtual void tempoExecucao();
	protected:
		time_t tempo;
};

#endif // DEBUG_H
