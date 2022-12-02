#include "Agendamento.h"
#include <string>
#include <iostream>

Agendamento::Agendamento(std::string _coleta_1, std::string _coleta_2)
{

    coleta_1 = _coleta_1;
    coleta_2 = _coleta_2;
};
Agendamento::~Agendamento(){};

bool Agendamento::existe_agendamento()
{

    if (coleta_1 == coleta_2)
        return true;
    else
        return false;
}