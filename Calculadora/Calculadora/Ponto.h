#ifndef PONTO_H
#define PONTO_H

class Ponto
{
    public:
        Ponto();
        Ponto(const double& xx, const double& yy, const double& zz, const double& tt, const double& uu);

        double calcModulo() const;
        void imprimir() const;

        Ponto operator+(Ponto B);
        Ponto operator+(const double& n);
        Ponto operator-(Ponto B);
        Ponto operator-(const double& n);
        Ponto operator*(Ponto B);
        Ponto operator*(const double& n);
        Ponto operator/(Ponto B);
        Ponto operator/(const double& n);

    private:
        double x;
		double y;
		double z;
		double t;
		double u;
};

#endif // PONTO_H