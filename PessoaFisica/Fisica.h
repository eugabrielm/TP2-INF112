#pragma once
#include <iostream>
#include "../Usuario/Usuario.h"
#include <string>

class Fisica: public Usuario
{
private:
    std::string _CPF;

public:
    // Construtor
    Fisica(std::string nome, std::string CPF);
    // Destrutor
    ~Fisica();
        // Metodos

    std::string get_CPF();
};