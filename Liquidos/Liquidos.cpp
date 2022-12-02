#include "Liquidos.h"
#include <iostream>
#include <string>
#include "../Residuos/Residuos.h"

Liquidos::Liquidos(std::string nome, std::string descricao):
Residuos(nome, descricao) {};


Liquidos::~Liquidos()
{
}

/* void Liquidos::descricao_residuo()
{
    std::cout << "O metodo de descarte deste Liquido é: \n";
    std::cout << descricao << std::endl;
} */