#pragma once
#include <iostream>
#include "Usuario.h"
#include <string>

class Fisica: public Usuario
{
private:
    std::string CPF;
    std::string ocupacao;

public:
    // Construtor
    Fisica(std::string _CPF, std::string _ocupacao);
    // Destrutor
    ~Fisica();
        // Metodos

        std::string get_CPF();
    std::string get_ocupacao();
};