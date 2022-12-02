#include <vector>
#include <iostream>
#include "Residuos.h"

Residuos::Residuos(std::string residuos, std::string descricao)
{
    _residuos = residuos;
    _descricao;
}
std::string Residuos::get_residuos()
{
    return this->_residuos;
}
void Residuos::set_residuos(std::string nome_residuo)
{
    _residuos = nome_residuo;
}

Residuos::~Residuos()
{
}