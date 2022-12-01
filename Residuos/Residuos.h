#ifndef RESIDUOS_TP2
#define RESIDUOS_TP2

#include <vector>

class Residuos
{
private:
    std::string _residuos;

public:
    Residuos(std::string residuos);
    ~Residuos();
    std::string get_residuos();
    void set_residuos(std::string nome_residuo);
    virtual void descricao_residuo() = 0;
};

#endif
