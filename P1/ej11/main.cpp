#include "Empleado.cpp"
#include <iostream>

using namespace std;

int main()
{
    Empleado *empleados[5];

    empleados[0] = new Jornalero("Roberto", 95, 165);

    empleados[1] = new Comun("Alonso", 36560);
    empleados[2] = new Jornalero("Martin", 73, 115);
    empleados[3] = new Comun("Ana", 18500);
    empleados[4] = new Jornalero("Luiciana", 115, 215);

    float t = 0;
    for (int i = 0; i < 5; i++)
    {
        t += (empleados[i])->getTotal();
        cout << "Nombre " << (empleados[i])->getNombre() << " Sueldo: " << (empleados[i])->getTotal() << endl;
    }

    cout << "El total es: " << t << endl;
}