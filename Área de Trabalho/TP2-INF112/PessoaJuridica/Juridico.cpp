#include "Juridico.h"
#include "../Usuario/Usuario.h"

Juridico::Juridico(std::string nome, std::string CNPJ,std::string coleta):
Usuario(nome,coleta), _CNPJ(CNPJ) {};


std::string Juridico::get_CNPJ()
{
    return _CNPJ;
}

Juridico::~Juridico()
{
}