#include <math.h>
#include "Punto.cpp"

class Segmento
{
private:
    Punto p1;
    Punto p2;

public:
    Segmento();
    void setSegmento(float x1, float y1, float x2, float y2);
    float getLargo();
};

Segmento::Segmento() {}

void Segmento::setSegmento(float x1, float y1, float x2, float y2)
{
    this->p1.setCoords(x1, y1);
    this->p2.setCoords(x2, y2);
};

float Segmento::getLargo()
{
    float Dx = pow((p1.getX() - p2.getX()), 2);
    float Dy = pow((p1.getY() - p2.getY()), 2);
    return sqrt(Dx + Dy);
}
