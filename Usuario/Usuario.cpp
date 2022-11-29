#include <iostream>
#include "Usuario.h"

Usuario::Usuario(std::string nome)
{
    _nome = nome;
}

std::string Usuario::get_nome()
{
    return _nome;
}

Usuario::~Usuario()
{
}