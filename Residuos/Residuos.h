#pragma once
#include <iostream>


class Residuos
{
private:
    
    double quantidade;

public:
    Residuos(double _quantidade);
    ~Residuos();

    double get_quantidade();
};