#include <stdio.h>
#include "Segmento.cpp"
/*
OBSERVACION

Para que sea correcto lo de include file, tendria que definirme los .h
y hacer #include "archivo.h"
*/

int main()
{
    Punto *pto = new Punto();

    pto->setCoords(2, 3);
    float x = pto->getX();
    float y = pto->getY();

    printf("CoordX: %f CoordY: %f", x, y);

    Segmento *seg = new Segmento();
    seg->setSegmento(2, 3, 7.4, 1.1);
    float largo = seg->getLargo();

    printf("\nLargo: %f", largo);
}