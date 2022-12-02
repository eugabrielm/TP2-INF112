#pragma once
#include <iostream>
#include "../Residuos/Residuos.h"
#include <string>


class Solidos : public Residuos
{
public:
    Solidos(std::string nome, std::string descricao);
    ~Solidos();

   /*  virtual void descricao_residuo() override; */
};