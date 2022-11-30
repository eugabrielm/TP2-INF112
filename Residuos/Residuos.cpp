#include <vector>
#include <iostream>
#include "Residuos.h"

Residuos::Residuos(std::string residuos)
{
    _residuos = residuos;
}

std::string Residuos::get_residuos()
{
    return _residuos;
}

Residuos::~Residuos()
{
}