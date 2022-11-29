#include "Juridico.h"
#include "../Usuario/Usuario.h"

Juridico::Juridico(std::string nome, std::string CNPJ):
Usuario(nome), _CNPJ(CNPJ) {};


std::string Juridico::get_CNPJ()
{
    return _CNPJ;
}

Juridico::~Juridico()
{
}