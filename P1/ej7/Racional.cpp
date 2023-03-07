#include "Racional.h"

Racional::Racional()
{
    this->p = 0;
    this->q = 1;
};

Racional::Racional(int n)
{
    this->p = n;
    this->q = 1;
};

Racional::Racional(int p, int q)
{
    this->p = p;
    this->q = q;
};

Racional Racional::operator+(const Racional &r)
{
    Racional res;

    res.p = this->p * r.q + r.p * this->q;
    res.q = this->q * r.q;
    return res;
};

Racional Racional::operator-(const Racional &r)
{
    Racional res;

    res.p = this->p * r.q - r.p * this->q;
    res.q = this->q * r.q;
    return res;
};

Racional Racional::operator*(const Racional &r)
{
    Racional res;

    res.p = this->p * r.p;
    res.q = this->q * r.q;
    return res;
};

Racional Racional::operator/(const Racional &r)
{
    Racional res;

    res.p = this->p * r.q;
    res.q = this->q * r.p;
    return res;
};

Racional Racional::operator=(const Racional &r)
{
    Racional res;

    res.p = r.p;
    res.q = r.q;
    return res;
};

bool Racional::operator==(const Racional &r) { return this->p == r.p && this->q == r.q; }

bool Racional::operator!=(const Racional &r) { return this->p != r.p && this->q != r.q; }

// setters y getters

void Racional::setRacional(int p, int q)
{
    this->p = p;
    this->q = q;
}

int Racional::getp() { return this->p; };

int Racional::getq() { return this->q; };

/**/
