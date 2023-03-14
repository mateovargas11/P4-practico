#include <iostream>

using namespace std;

class Empleado
{
private:
    string nom;
    // char *nombre;

public:
    string getNombre();
    void setNombre(string) = 0;
    virtual float getTotal() = 0;
};

class Jornalero : public Empleado
{
private:
    int horas;
    float val;

public:
    Jornalero();
    Jornalero(string nombre, int, float);
    int getHoras();
    float getVal();
    float getTotal();
};

class Comun : public Empleado
{
private:
    float sueldo;

public:
    Comun();
    Comun(string, float);
    float getSueldo();
    void setSueldo(float sueldo);
    float getTotal();
};

string Empleado::getNombre() { return this->nom; };

void Empleado::setNombre(string nom) { this->nom = nom; }

Jornalero::Jornalero()
{
    this->setNombre("");
    this->horas = 0;
    this->val = 0;
};

Jornalero::Jornalero(string nom, int horas, float val)
{
    this->setNombre(nom);
    this->horas = horas;
    this->val = val;
};

float Jornalero::getTotal()
{
    return this->horas * this->val;
};

int Jornalero::getHoras()
{
    return this->horas;
};

float Jornalero::getVal()
{
    return this->val;
}

Comun::Comun()
{
    this->setNombre("");
    this->sueldo = 0;
};

Comun::Comun(string nom, float sueldo)
{
    this->setNombre(nom);
    this->sueldo = sueldo;
};

float Comun::getTotal() { return this->sueldo; };
