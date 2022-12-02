#pragma once
#include <iostream>
#include "../Residuos/Residuos.h"
#include <string>

class Liquidos : public Residuos
{
public:
    Liquidos(std::string nome, std::string descricao);
    ~Liquidos();

    /* virtual void descricao_residuo() override; */
};