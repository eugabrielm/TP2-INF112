#ifndef TP2_USUARIO
#define TP2_USUARIO

#include <string>

class Usuario
{
private:
    std::string _nome;
public:
    Usuario(std::string nome);
    ~Usuario();
    std::string get_nome();
};

#endif

