#ifndef TP2_PESSOA_JURIDICA
#define TP2_PESSOA_JURIDICA

#include "../Usuario/Usuario.h"

class Juridico : public Usuario
{
private:
    std::string _CNPJ;
public:
    Juridico(std::string nome, std::string CNPJ,std::string coleta);
    ~Juridico();
    std::string get_CNPJ();
};

#endif

