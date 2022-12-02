#ifndef RESIDUOS_TP2
#define RESIDUOS_TP2

#include <vector>

class Residuos
{
private:
    std::string _residuos;
    std::string _descricao;
public:
    Residuos(std::string residuos, std::string descricao);
    ~Residuos();
    std::string get_residuos();
    void set_residuos(std::string nome_residuo);
    void set_descricao(std::string descricao);
};

#endif

