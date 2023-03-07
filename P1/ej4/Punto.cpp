class Punto
{
private:
    float coordX,
        coordY;

public:
    Punto();
    void setCoords(int x, int y);
    float getX();
    float getY();
};

Punto::Punto(){};

void Punto::setCoords(int x, int y)
{
    coordX = x;
    coordY = y;
};
float Punto::getX()
{
    return coordX;
};
float Punto::getY()
{
    return coordY;
}
