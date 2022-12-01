#include <iostream>
#include "./PessoaJuridica/Juridico.h"
#include "./Usuario/Usuario.h"
#include "./PessoaFisica/Fisica.h"
#include "./Residuos/Residuos.h"
#include "./Solidos/Solidos.h"
#include "./Liquidos/Liquidos.h"
#include <vector>

std::vector<Fisica> doador_fisica;
std::vector<Fisica> receptor_fisica;
std::vector<Juridico> doador_juridico;
std::vector<Juridico> receptor_juridico;
std::vector<Solidos> residuos_solidos;
std::vector<Liquidos> residuos_liquidos;

void exibir_lista_residuos()
{ // ainda nao foi terminado a funcao.

    std::cout << "\n-----LISTA DE RESIDUOS -----\n";

    std::cout << "SOLIDOS:\n";
    for (int i = 0; i < residuos_solidos.size(); i++)
    {
        std::cout << i << ". " << residuos_solidos[i].get_residuos() << std::endl;
    }
    std::cout << "LIQUIDOS:\n";
    for (int i = 0; i < residuos_liquidos.size(); i++)
    {
        std::cout << i << ". " << residuos_liquidos[i].get_residuos() << std::endl;
    }
}

int main()
{
    char c = 0;
    int temp = -1;
    std::string _nome;
    std::string _aux;
    std::string _residuo;
    std::string adiciona_residuo;
    std::string descricao;
    residuos_solidos.push_back(Solidos("Metais", "Descarte-os no cesto de recicláveis ou no cesto específico (cor amarela)"));
    residuos_solidos.push_back(Solidos("Papeis", "O cesto para descarte de papel é azul, então, sempre que você for jogar fora, mesmo que não esteja em casa, já sabe como não errar."));
    residuos_solidos.push_back(Solidos("Plasticos", "O cesto para descarte de plastico é vermelho, então, sempre que você for jogar fora, mesmo que não esteja em casa, já sabe como não errar."));
    residuos_liquidos.push_back(Liquidos("Óleo", "Deve-se armazená-lo em uma garrafa de vidro ou de plástico, e levar até um posto de coleta para que ele seja assim reciclado."));
    residuos_liquidos.push_back(Liquidos("Tintas", "As latas de tinta vazias (ou mesmo as que ainda tiverem restos de tinta) devem ser levadas a uma Área de Transbordo e Triagem – ATT, que são áreas específicas para essa coleta, determinadas pela prefeitura de cada cidade"));

    while (c != 'n')
    {
        std::cout << "-----BEM VINDO AO SISTEMA DE COLETA DE RESIDUOS!-----" << std::endl;
        std::cout << "CONFIRA A LISTA DE RESIDOS QUE FAZEMOS COLETA: \n";
        exibir_lista_residuos();
        

        while (1)
        {
            std::cout << "DESEJA ADICIONAR MAIS ALGUM RESIDUO?: (s/n)\n";
            std::cin >> c;
            if (c == 'n')
                break;
            else

            {

                while (1)
                {
                    std::cout << "Qual tipo de residuo deseja adicionar?\n 1 - Residuo Sólido\n 2 - Residuo Liquido\n";
                    std::cin >> temp;
                    if(temp == 1 || temp == 2)
                    break;
                    else
                    std::cout << "Operação Inválida!\n";
                }
                if (temp == 1)
                {
                    std::cout << "DIGITE O NOME DO RESIDUO SÓLIDO, EM SEGUIDA DIGITE O MODO DE DESCARTE";
                    std::cin >> adiciona_residuo >> descricao;

                    residuos_solidos.push_back(Solidos(adiciona_residuo, descricao));
                }
                else
                {

                    std::cout << "DIGITE O NOME DO RESIDUO LIQUIDO, EM SEGUIDA DIGITE O MODO DE DESCARTE";
                    std::cin >> adiciona_residuo;
                    std::cin.ignore();
                    std::getline(std::cin,descricao);

                    residuos_liquidos.push_back(Liquidos(adiciona_residuo, descricao));
                }
            }
        }
            std::cout << "DESEJA SE CADASTRAR?\n";
            std::cout << "\nDigite 's' para SIM e digite 'n' para NAO.\n"
                      << std::endl;
            std::cin >> c;

            if (c == 'n')
            {
                std::cout << "TUDO BEM, VOLTE SEMPRE QUE QUISER!" << std::endl;
                break;
            }

            else
            {
                std::cout << "\nDigite seu nome completo: ";
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

                    std::cout << "\nVoce deseja ser doador ou receptor de residuos?" << std::endl;
                    std::cout << std::endl;
                    std::cout << "1. Doador" << std::endl;
                    std::cout << "2. Receptor\n"
                              << std::endl;
                    std::cin >> c;

                    if (c == '1')
                    {
                        std::cout << "\nQual o material que voce deseja doar?\n";
                        exibir_lista_residuos();
                        temp = -1;
                        while (1)
                        {
                            std::cout << "Digite o numero de qual residuo deseja doar:\n 1- Residuo Sólido \n 2 - Residuo Liquido";

                            std::cin >> temp;
                            if(temp == 1 || temp == 2)
                            break;
                            else
                            std::cout << "Operação Inválida!\n";
                        }
                        if (temp == 1)
                        {


                        }
                    }
                }

                if (c == '2')
                {
                    std::cout << "\nDigite seu CNPJ: ";
                    std::cin >> _aux;

                    std::cout << "\nVoce deseja ser doador ou receptor de residuos?" << std::endl;
                    std::cout << std::endl;
                    std::cout << "1. Doador" << std::endl;
                    std::cout << "2. Receptor\n"
                              << std::endl;
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
