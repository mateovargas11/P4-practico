class Fecha
{
private:
    int dia, mes, anio;

public:
    Fecha(int, int, int);
    Fecha avanzar(int);
    Fecha retroceder(int);
    int diferencia(Fecha);
    bool iguales(Fecha);
};

Fecha::Fecha(int dia, int mes, int anio)
{
    this->anio = anio;
    this->mes = mes;
    this->dia = dia;
}

Fecha Fecha::avanzar(int cant)
{
    int ndia = dia + cant;
    int nmes = mes + ndia / 30;
    ndia = ndia % 30;
    int nanio = anio + nmes / 12;
    nmes = nmes % 12;

    return Fecha(ndia, nmes, nanio);
};

Fecha Fecha::retroceder(int cant)
{
    int ndia = dia - cant;
    int nmes = mes - ndia / 30;
    ndia = ndia % 30;
    int nanio = anio - nmes / 12;
    nmes = nmes % 12;

    return Fecha(ndia, nmes, nanio);
};

int Fecha::diferencia(Fecha f)
{
    long int f1 = f.dia + f.mes * 30 + f.anio * 12 * 30;
    long int f2 = this->dia + this->mes * 30 + this->anio * 12 * 30;

    return f2 - f1;
};

bool Fecha::iguales(Fecha f)
{
    return f.anio == this->anio && f.mes == this->mes && f.dia == this->dia;
}