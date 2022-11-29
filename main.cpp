#include <iostream>
#include "./PessoaJuridica/Juridico.h"
#include "./Usuario/Usuario.h"

int main()
{
    char c = 0;
    std::string _nome =  "";
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

        if (c == 's')
        {
            std::cout << "Digite seu nome completo: ";
            std::cin.ignore();
            std::getline(std::cin, _nome);

            std::cout << "\nSelecione uma opcao: " << std::endl;
            std::cout << std::endl;
            std::cout << "1. Pessoa Fisica" << std::endl;
            std::cout << "2. Pessoa Juridica\n" << std::endl;
            std::cin >> c;

            if (c == '2')
            {
                std::cout << "\nDigite seu CNPJ: ";
                std::cin >> _aux;

                Juridico user(_nome, _aux);
            }
        }
    }

    return 0;
}

