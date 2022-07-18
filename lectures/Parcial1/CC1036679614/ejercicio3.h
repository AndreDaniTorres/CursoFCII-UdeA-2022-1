#include <iostream>

using namespace std;

class complejo
{
public:
	complejo(double, double); // el constructor
	void Suma(double, double); // Suma de n�meros complejos
	void Resta(double, double); // Resta de n�meros complejos
	void asignarDatos();
	void obtenerParteReal();
	void obtenerParteImaginaria();
	void Impresion();
	void Multiplicacion(double, double);
	void Division(double, double);

private:
	double parteImaginaria;
	double parteReal;

};

