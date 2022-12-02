#include "Fisica.h"
#include "../Usuario/Usuario.h"
#include <string>
#include <iostream>

Fisica::Fisica(std::string nome, std::string CPF,std::string coleta):
Usuario(nome,coleta), _CPF(CPF) {};

Fisica::~Fisica()
{
};

std::string Fisica::get_CPF()
{
    return this-> _CPF;
}

