#include <vector>
#include <iostream>
#include "Residuos.h"

Residuos::Residuos(std::string residuos)
{
    _residuos = residuos;
}
std::string Residuos::get_residuos()
{
    return this-> _residuos;
}
void Residuos::set_residuos(std::string nome_residuo){
_residuos = nome_residuo;

}

Residuos::~Residuos()
{
}