#include "Fisica.h"
#include <string>
#include <iostream>

Fisica::Fisica(std::string _CPF, std::string _ocupacao)
{
    CPF = _CPF;
    ocupacao = _ocupacao;
}
Fisica::~Fisica(){};

std::string Fisica::get_CPF()
{
    return CPF;
}
std::string Fisica::get_ocupacao()
{
    return ocupacao;
}
