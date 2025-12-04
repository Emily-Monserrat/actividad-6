#ifndef FRACCION_H
#define FRACCION_H

#include<string>
using std::string;

class Fraccion
{
    int num;
    int den;

    public:
        Fraccion(): num(1), den(2)
        {}

        Fraccion(int num, int den): num{num}, den{den}
        {}

        int get_num();
        int get_den();

        void set_num(int num);
        void set_den(int den);

        double calc_valor_real();
        Fraccion sumar(Fraccion& f);
        string to_string();
};

#endif