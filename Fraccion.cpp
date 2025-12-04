#include "Fraccion.h"

int Fraccion::get_num()
{
    return num;
}

int Fraccion::get_den()
{
    return den;
}

void Fraccion::set_num(int num)
{
    this->num = num;
}

void Fraccion::set_den(int den)
{
    this->den = den;
}

double Fraccion::calc_valor_real()
{
    return double(num) / den;
}

Fraccion Fraccion::sumar(Fraccion& f)
{
    int nuevo_num = num * f.den + den * f.num;
    int nuevo_den = den * f.den;
    return Fraccion(nuevo_num, nuevo_den);
}

string Fraccion::to_string()
{
    return std::to_string(num) + "/" + std::to_string(den) + " (" + std::to_string(calc_valor_real()) + ")";
}