#ifndef TP2_USUARIO
#define TP2_USUARIO

#include <string>

class Usuario
{
private:
    std::string _nome;
    std::string _coleta;
public:
    Usuario(std::string nome,std::string coleta);
    ~Usuario();
    std::string get_nome();
    std::string get_coleta();
};

#endif

