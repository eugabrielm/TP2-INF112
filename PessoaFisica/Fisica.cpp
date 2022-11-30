#include "Fisica.h"
#include "../Usuario/Usuario.h"
#include <string>
#include <iostream>

Fisica::Fisica(std::string nome, std::string CPF):
Usuario(nome), _CPF(CPF) {};

Fisica::~Fisica()
{
};

std::string Fisica::get_CPF()
{
    return _CPF;
}

