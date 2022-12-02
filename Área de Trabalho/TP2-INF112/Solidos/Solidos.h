#pragma once
#include <iostream>
#include "../Residuos/Residuos.h"
#include <string>


class Solidos : public Residuos
{
private:

    std::string descricao;
    

public:
    Solidos(std::string _nome, std::string _descricao);
    ~Solidos();

   virtual void descricao_residuo();
};