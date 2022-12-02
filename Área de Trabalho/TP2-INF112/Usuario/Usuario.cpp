#include <iostream>
#include "Usuario.h"

Usuario::Usuario(std::string nome,std::string coleta)
{
    _coleta = coleta;
    _nome = nome;
}

std::string Usuario::get_nome()
{
    return this -> _nome;
}
std::string Usuario::get_coleta()
{
    return this-> _coleta;
}

Usuario::~Usuario()
{
}