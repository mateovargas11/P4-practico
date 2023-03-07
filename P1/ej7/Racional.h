#ifndef RACIONAL
#define RACIONAL

#include <iostream>
using namespace std;

class Racional
{
private:
    int p, q;

public:
    Racional();
    Racional(int);
    Racional(int, int);
    Racional operator+(const Racional &);
    Racional operator-(const Racional &);
    Racional operator*(const Racional &);
    Racional operator/(const Racional &);
    Racional operator=(const Racional &);
    bool operator==(const Racional &);
    bool operator!=(const Racional &);
    void setRacional(int, int);
    int getp();
    int getq();
};

#endif