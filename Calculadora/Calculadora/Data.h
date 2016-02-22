#ifndef DATA_H
#define DATA_H

class Data
{
	public:
		Data(int ddia = 11, int mmes = 11, int aano = 5011);
        void print() const;
    private:
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H