#include <iostream>
#include "./PessoaJuridica/Juridico.h"
#include "./Usuario/Usuario.h"
#include "./PessoaFisica/Fisica.h"
#include "./Residuos/Residuos.h"
#include <vector>

std::vector<Fisica> doador_fisica;
std::vector<Fisica> receptor_fisica;
std::vector<Juridico> doador_juridico;
std::vector<Juridico> receptor_juridico;
std::vector<Residuos> tipos_de_residuos;

void exibir_lista_residuos(){ //ainda nao foi terminado a funcao.
    tipos_de_residuos.push_back(Residuos("Metais"));
    tipos_de_residuos.push_back(Residuos("Papeis"));
    tipos_de_residuos.push_back(Residuos("Plasticos"));
    tipos_de_residuos.push_back(Residuos("Vidro"));
    tipos_de_residuos.push_back(Residuos("Lixo Hospitalar"));

    std::cout << "\n-----LISTA DE RESIDUOS -----\n";

    /* for (int i=0; i < tipos_de_residuos.size(); i++)
    {
        std::cout << i << ". " << tipos_de_residuos[i];
    } */

}

int main()
{
    char c = 0;
    std::string _nome;
    std::string _aux;
    std::string _residuo;


    while (c != 'n')
    {
        std::cout << "-----BEM VINDO AO SISTEMA DE COLETA DE RESIDUOS! DESEJA SE CADASTRAR?-----" << std::endl;
        std::cout << "\nDigite 's' para SIM e digite 'n' para NAO.\n" << std::endl;
        std::cin >> c;

        if (c == 'n')
        {
            std::cout << "TUDO BEM, VOLTE SEMPRE QUE QUISER!" << std::endl;
            break;
        }

        if (c == 's')
        {
            std::cout << "\nDigite seu nome completo: ";
            std::cin.ignore();
            std::getline(std::cin, _nome);

            std::cout << "\nSelecione uma opcao: " << std::endl;
            std::cout << std::endl;
            std::cout << "1. Pessoa Fisica" << std::endl;
            std::cout << "2. Pessoa Juridica\n" << std::endl;
            std::cin >> c;

            if (c == '1')
            {
                std::cout << "\nDigite seu CPF: ";
                std::cin >> _aux;

                std::cout << "\nVoce deseja ser doador ou receptor de residuos?" << std::endl;
                std::cout << std::endl;
                std::cout << "1. Doador" << std::endl;
                std::cout << "2. Receptor\n" << std::endl;
                std::cin >> c;

                if (c == '1')
                {
                    std::cout << "\nQual o material que voce deseja doar?\n";
                    exibir_lista_residuos();

                }

                

            }

            if (c == '2')
            {
                std::cout << "\nDigite seu CNPJ: ";
                std::cin >> _aux;

                std::cout << "\nVoce deseja ser doador ou receptor de residuos?" << std::endl;
                std::cout << std::endl;
                std::cout << "1. Doador" << std::endl;
                std::cout << "2. Receptor\n" << std::endl;
                std::cin >> c;

                if (c == '1')
                {
                    std::cout << "\nQual o material que voce deseja doar? ";
                    exibir_lista_residuos();
                }
            }
        }
    }

    return 0;
}

