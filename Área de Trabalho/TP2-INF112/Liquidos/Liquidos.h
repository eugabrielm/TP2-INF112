#pragma once
#include <iostream>
#include "../Residuos/Residuos.h"
#include <string>

class Liquidos : public Residuos
{
private:
std::string descricao;

public:

Liquidos(std::string nome,std::string _descricao);
~Liquidos();

virtual void descricao_residuo();

};