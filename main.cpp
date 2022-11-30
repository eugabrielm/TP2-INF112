#include <iostream>
#include "./PessoaJuridica/Juridico.h"
#include "./Usuario/Usuario.h"
#include "./PessoaFisica/Fisica.h"
#include <vector>

std::vector<Fisica> pessoa_fisica;
std::vector<Juridico> pessoa_juridico;

int main()
{
    char c = 0;
    std::string _nome = "";
    std::string _aux;

    while (c != 'n')
    {
        std::cout << "-----BEM VINDO AO SISTEMA DE COLETA DE RESIDUOS! DESEJA SE CADASTRAR?-----" << std::endl;
        std::cout << "Digite 's' para SIM e digite 'n' para NAO." << std::endl;
        std::cin >> c;

        if (c == 'n')
        {
            std::cout << "TUDO BEM, VOLTE SEMPRE QUE QUISER!" << std::endl;
            break;
        }

        else if (c == 's')
        {
            std::cout << "Digite seu nome completo: ";
            std::cin.ignore();
            std::getline(std::cin, _nome);

            std::cout << "\nSelecione uma opcao: " << std::endl;
            std::cout << std::endl;
            std::cout << "1. Pessoa Fisica" << std::endl;
            std::cout << "2. Pessoa Juridica\n"
                      << std::endl;
            std::cin >> c;

            if (c == '1')
            {
                std::cout << "\nDigite seu CPF: ";
                std::cin >> _aux;

                pessoa_fisica.push_back(Fisica(_nome, _aux));
            }

            if (c == '2')
            {
                std::cout << "\nDigite seu CNPJ: ";
                std::cin >> _aux;

                pessoa_juridico.push_back(Juridico(_nome, _aux));
            }
        }
    }

    return 0;
}
