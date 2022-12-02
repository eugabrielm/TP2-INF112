#include <iostream>
#include "./PessoaJuridica/Juridico.h"
#include "./Usuario/Usuario.h"
#include "./PessoaFisica/Fisica.h"
#include "./Residuos/Residuos.h"
#include "./Solidos/Solidos.h"
#include "./Liquidos/Liquidos.h"
#include "./Agendamento/Agendamento.h"
#include <vector>

using std::cin;
using std::cout;
using std::endl;

std::vector<Fisica> doador_fisica_solido;
std::vector<Fisica> doador_fisica_liquido;
std::vector<Juridico> doador_juridico_solido;
std::vector<Juridico> doador_juridico_liquido;
std::vector<Fisica> receptor_fisica_solidos;
std::vector<Fisica> receptor_fisica_liquidos;
std::vector<Juridico> receptor_juridico_liquidos;
std::vector<Juridico> receptor_juridico_solidos;
std::vector<Solidos> residuos_solidos;
std::vector<Liquidos> residuos_liquidos;
std::vector<Solidos> doacao_solidos_fisica;
std::vector<Solidos> doacao_solidos_juridica;
std::vector<Liquidos> doacao_liquidos_fisica;
std::vector<Liquidos> doacao_liquidos_juridica;
std::vector<std::string> tipo_receptor_solidos_fisico;
std::vector<std::string> tipo_receptor_liquidos_fisico;
std::vector<std::string> tipo_receptor_solidos_juridico;
std::vector<std::string> tipo_receptor_liquidos_juridico;
void exibir_lista_solidos()
{
    std::cout << "\n-----LISTA DE RESIDUOS -----\n";

    std::cout << "SOLIDOS:\n";
    for (int i = 0; i < residuos_solidos.size(); i++)
    {
        std::cout << i << ". " << residuos_solidos[i].get_residuos() << std::endl;
    }
}
void exibir_lista_liquidos()
{
    std::cout << "\n-----LISTA DE RESIDUOS -----\n";
    std::cout << "LIQUIDOS:\n";
    for (int i = 0; i < residuos_liquidos.size(); i++)
    {
        std::cout << i << ". " << residuos_liquidos[i].get_residuos() << std::endl;
    }
}
void exibir_lista_residuos()
{

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

void cadastro_doador(char c)
{
    int n = 0;
    std::string _nome;
    std::string _aux;
    std::string _local_coleta;

    std::cout << "\nDigite seu nome completo/nome da empresa: \n";
    std::cin.ignore();
    std::getline(std::cin, _nome);
    if (c == '1')
    {
        cout << "DIGITE SEU CPF:" << endl;
        cin >> _aux;
        cout << "DIGITE O LOCAL DE COLETA: \n"
             << endl;
        std::cin.ignore();
        std::getline(cin, _local_coleta);

        while (1)
        {
            cout << "Qual residuo você deseja doar?\n 1- Sólidos\n2 - Líquidos";
            cin >> n;
            if (n == 1 || n == 2)
                break;
            cout << "Você deve digitar 1 ou 2!" << endl;
        }

        if (n == 1)
        {
            doador_fisica_solido.push_back(Fisica(_nome, _aux, _local_coleta));
            exibir_lista_solidos();
            cout << "Digite o número do residuo a ser doado\n";
            cin >> n;
            doacao_solidos_fisica.push_back(residuos_solidos[n]);
        }
        else
        {
            doador_fisica_liquido.push_back(Fisica(_nome, _aux, _local_coleta));
            exibir_lista_liquidos();
            cout << "Digite o número do residuo a ser doado\n";
            cin >> n;
            doacao_liquidos_fisica.push_back(residuos_liquidos[n]);
        }
    }
    else
    {

        cout << "DIGITE SEU CNPJ:" << endl;
        cin >> _aux;
        cout << "DIGITE O LOCAL DE COLETA: \n";
        std::cin.ignore();
        std::getline(cin, _local_coleta);

        while (1)
        {
            cout << "Qual residuo você deseja doar?\n 1- Sólidos\n2 - Líquidos";
            cin >> n;
            if (n == 1 || n == 2)
                break;
            cout << "Você deve digitar 1 ou 2!" << endl;
        }
        if (n == 1)
        {
            doador_juridico_solido.push_back(Juridico(_nome, _aux, _local_coleta));

            exibir_lista_solidos();
            cout << "Digite o número do residuo a ser doado\n";
            cin >> n;
            doacao_solidos_juridica.push_back(residuos_solidos[n]);
        }
        else
        {
            doador_juridico_liquido.push_back(Juridico(_nome, _aux, _local_coleta));
            exibir_lista_liquidos();
            cout << "Digite o número do residuo a ser doado\n";
            cin >> n;
            doacao_liquidos_juridica.push_back(residuos_liquidos[n]);
        }
    }
}
void cadastro_receptor(char c)
{
    int n;
    std::string _nome;
    std::string _aux;
    std::string _local_coleta;

    std::cout << "\nDigite seu nome completo/nome da empresa: \n";
    std::cin.ignore();
    std::getline(std::cin, _nome);
    if (c == '1')
    {
        cout << "DIGITE SEU CPF:" << endl;
        cin >> _aux;
        cout << "DIGITE O LOCAL DE COLETA: \n"
             << endl;
        std::cin.ignore();
        std::getline(cin, _local_coleta);
        ;
        while (1)
        {
            cout << "Qual residuo você deseja receber?\n 1- Sólidos\n2 - Líquidos";
            cin >> n;
            if (n == 1 || n == 2)
                break;
            cout << "Você deve digitar 1 ou 2!" << endl;
        }
        if (n == 1)
        {
            exibir_lista_solidos();
            cout << "Digite o número do residuo a ser recebido\n";
            cin >> n;
            tipo_receptor_solidos_fisico.push_back(residuos_solidos[n].get_residuos());
            receptor_fisica_solidos.push_back(Fisica(_nome, _aux, _local_coleta));
        }
        else
        {

            exibir_lista_liquidos();
            cout << "Digite o número do residuo a ser recebido\n";
            cin >> n;
            tipo_receptor_liquidos_fisico.push_back(residuos_liquidos[n].get_residuos());
            receptor_fisica_liquidos.push_back(Fisica(_nome, _aux, _local_coleta));
        }
    }
    else
    {
        cout << "DIGITE SEU CNPJ:" << endl;
        cin >> _aux;
        cout << "DIGITE O LOCAL DE COLETA: \n"
             << endl;
        std::cin.ignore();
        std::getline(cin, _local_coleta);
        while (1)
        {
            cout << "Qual residuo você deseja receber?\n 1- Sólidos\n2 - Líquidos";
            cin >> n;
            if (n == 1 || n == 2)
                break;
            cout << "Você deve digitar 1 ou 2!" << endl;
        }
        if (n == 1)
        {
            exibir_lista_solidos();
            cout << "Digite o número do residuo a ser recebido\n";
            cin >> n;
            tipo_receptor_solidos_juridico.push_back(residuos_solidos[n].get_residuos());
            receptor_juridico_solidos.push_back(Juridico(_nome, _aux, _local_coleta));
        }
        else
        {

            exibir_lista_liquidos();
            cout << "Digite o número do residuo a ser doado\n";
            cin >> n;
            tipo_receptor_liquidos_juridico.push_back(residuos_liquidos[n].get_residuos());
            receptor_juridico_liquidos.push_back(Juridico(_nome, _aux, _local_coleta));
        }
    }
}
void agendar_doador_fisico_solido()
{
    std::string data;
    char c;
    for (int i = 0; i < doador_fisica_solido.size(); ++i)
    {
        bool agendado = false;
        cout << "Agendamento doação de " << doador_fisica_solido[i].get_nome() << "\n CPF: " << doador_fisica_solido[i].get_CPF() << endl;
        for (int j = 0; j < receptor_fisica_solidos.size(); ++j)
            if (doacao_solidos_fisica[i].get_residuos() == tipo_receptor_solidos_fisico[j])
            {
                Agendamento A(doador_fisica_solido[i].get_coleta(), receptor_fisica_solidos[j].get_coleta());
                if (A.existe_agendamento())
                {
                    cout << receptor_fisica_solidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";

                    cin >> c;
                    if (c == 's')
                    {
                        agendado = true;
                        cout << "DIGITE DATA E HORA\n";
                        std::cin.ignore();
                        std::getline(cin, data);

                        cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                        cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_solidos_fisica[i].get_residuos() << "\n ";
                        doacao_solidos_fisica[i].descricao_residuo();
                        cout << doador_fisica_solido[i].get_nome() << " e " << receptor_fisica_solidos[j].get_nome() << "devem comparecer no/na" << doador_fisica_solido[i].get_coleta() << " em " << data;
                        continue;
                    }
                    else
                        continue;
                }
            }
        if (!agendado)
        {
            agendado = 1;
            for (int j = 0; j < receptor_juridico_solidos.size(); ++j)
                if (doacao_solidos_fisica[i].get_residuos() == tipo_receptor_solidos_juridico[j])
                {
                    Agendamento A(doador_fisica_solido[i].get_coleta(), receptor_juridico_solidos[j].get_coleta());
                    if (A.existe_agendamento())
                    {
                        cout << receptor_juridico_solidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";
                        cin >> c;
                        if (c == 's')
                        {
                            cout << "DIGITE DATA E HORA\n";
                            std::cin.ignore();
                            std::getline(cin, data);

                            cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                            cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_solidos_fisica[i].get_residuos() << "\n ";
                            doacao_solidos_fisica[i].descricao_residuo();
                            cout << doador_fisica_solido[i].get_nome() << " e " << receptor_juridico_solidos[j].get_nome() << "devem comparecer no/na" << doador_fisica_solido[i].get_coleta() << " em " << data;
                            continue;
                        }
                        else
                            continue;
                    }
                }
        }
        if (!agendado)
            cout << "\nNÃO FOI POSSIVEL REALIZAR O CADASTRO DE" << doador_fisica_solido[i].get_nome() << "POIS NÃO EXISTEM RECEPTORES COMPATÍVEIS!" << endl;
    }
}

void agendar_doador_fisico_liquidos()
{
    std::string data;
    char c;
    for (int i = 0; i < doador_fisica_liquido.size(); ++i)
    {
        bool agendado = false;
        cout << "Agendamento doação de " << doador_fisica_liquido[i].get_nome() << "\n CPF: " << doador_fisica_liquido[i].get_CPF() << endl;
        for (int j = 0; j < receptor_fisica_liquidos.size(); ++j)
            if (doacao_liquidos_fisica[i].get_residuos() == tipo_receptor_liquidos_fisico[j])
            {
                Agendamento A(doador_fisica_liquido[i].get_coleta(), receptor_fisica_liquidos[j].get_coleta());
                if (A.existe_agendamento())
                {
                    cout << receptor_fisica_liquidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";

                    cin >> c;
                    if (c == 's')
                    {
                        agendado = true;
                        cout << "DIGITE DATA E HORA\n";
                        std::cin.ignore();
                        std::getline(cin, data);

                        cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                        cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_liquidos_fisica[i].get_residuos() << "\n ";
                        doacao_liquidos_fisica[i].descricao_residuo();

                        cout << doador_fisica_liquido[i].get_nome() << " e " << receptor_fisica_liquidos[j].get_nome() << "devem comparecer no/na " << doador_fisica_liquido[i].get_coleta() << " em " << data;
                        continue;
                    }
                    else
                        continue;
                }
            }
        if (!agendado)
        {
            agendado = 1;
            for (int j = 0; j < receptor_juridico_liquidos.size(); ++j)
                if (doacao_liquidos_fisica[i].get_residuos() == tipo_receptor_liquidos_juridico[j])
                {
                    Agendamento A(doador_fisica_liquido[i].get_coleta(), receptor_juridico_liquidos[j].get_coleta());
                    if (A.existe_agendamento())
                    {
                        cout << receptor_juridico_liquidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";
                        cin >> c;
                        if (c == 's')
                        {
                            cout << "DIGITE DATA E HORA\n";
                            std::cin.ignore();
                            std::getline(cin, data);

                            cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                            cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_liquidos_fisica[i].get_residuos() << "\n ";
                            doacao_liquidos_fisica[i].descricao_residuo();

                            cout << doador_fisica_liquido[i].get_nome() << " e " << receptor_juridico_liquidos[j].get_nome() << "devem comparecer no/na" << doador_fisica_liquido[i].get_coleta() << " em " << data;
                            continue;
                        }
                        else
                            continue;
                    }
                }
        }
        if (!agendado)
            cout << "\nNÃO FOI POSSIVEL REALIZAR O CADASTRO DE" << doador_fisica_liquido[i].get_nome() << "POIS NÃO EXISTEM RECEPTORES COMPATÍVEIS!" << endl;
    }
}

void agendar_doador_juridico_solidos()
{
    std::string data;
    char c;
    for (int i = 0; i < doador_juridico_solido.size(); ++i)
    {
        bool agendado = false;
        cout << "Agendamento doação de " << doador_juridico_solido[i].get_nome() << "\n CNPJ: " << doador_juridico_solido[i].get_CNPJ() << endl;
        for (int j = 0; j < receptor_juridico_solidos.size(); ++j)
            if (doacao_solidos_juridica[i].get_residuos() == tipo_receptor_solidos_juridico[j])
            {
                Agendamento A(doador_juridico_solido[i].get_coleta(), receptor_juridico_solidos[j].get_coleta());
                if (A.existe_agendamento())
                {
                    cout << receptor_juridico_solidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";

                    cin >> c;
                    if (c == 's')
                    {
                        agendado = true;
                        cout << "DIGITE DATA E HORA\n";
                        std::cin.ignore();
                        std::getline(cin, data);
                        cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                        cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_solidos_juridica[i].get_residuos() << "\n ";
                        doacao_solidos_juridica[i].descricao_residuo();
                        cout << doador_juridico_solido[i].get_nome() << " e " << receptor_juridico_solidos[j].get_nome() << "devem comparecer no/na" << doador_juridico_solido[i].get_coleta() << " em " << data;
                        continue;
                    }
                    else
                        continue;
                }
            }
        if (!agendado)
        {
            agendado = 1;
            for (int j = 0; j < receptor_juridico_solidos.size(); ++j)
                if (doacao_solidos_juridica[i].get_residuos() == tipo_receptor_solidos_juridico[j])
                {
                    Agendamento A(doador_juridico_solido[i].get_coleta(), receptor_juridico_solidos[j].get_coleta());
                    if (A.existe_agendamento())
                    {
                        cout << receptor_juridico_solidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";
                        cin >> c;
                        if (c == 's')
                        {
                            cout << "DIGITE DATA E HORA\n";
                            std::cin.ignore();
                            std::getline(cin, data);

                            cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                            cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_solidos_juridica[i].get_residuos() << "\n ";
                            doacao_solidos_juridica[i].descricao_residuo();
                            cout << doador_juridico_solido[i].get_nome() << " e " << receptor_juridico_solidos[j].get_nome() << "devem comparecer no/na" << doador_juridico_solido[i].get_coleta() << " em " << data;
                            continue;
                        }
                        else
                            continue;
                    }
                }
        }
        if (!agendado)
            cout << "\nNÃO FOI POSSIVEL REALIZAR O CADASTRO DE" << doador_juridico_solido[i].get_nome() << "POIS NÃO EXISTEM RECEPTORES COMPATÍVEIS!" << endl;
    }
}
void agendar_doador_juridico_liquidos()
{
    std::string data;
    char c;
    for (int i = 0; i < doador_juridico_liquido.size(); ++i)
    {
        bool agendado = false;
        cout << "Agendamento doação de " << doador_juridico_liquido[i].get_nome() << "\n CNPJ: " << doador_juridico_liquido[i].get_CNPJ() << endl;
        for (int j = 0; j < receptor_juridico_liquidos.size(); ++j)
            if (doacao_liquidos_juridica[i].get_residuos() == tipo_receptor_liquidos_juridico[j])
            {
                Agendamento A(doador_juridico_liquido[i].get_coleta(), receptor_juridico_liquidos[j].get_coleta());
                if (A.existe_agendamento())
                {
                    cout << receptor_juridico_liquidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";

                    cin >> c;
                    if (c == 's')
                    {
                        agendado = true;
                        cout << "DIGITE DATA E HORA\n";
                        std::cin.ignore();
                        std::getline(cin, data);
                        cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                        cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_liquidos_juridica[i].get_residuos() << "\n ";
                        doacao_liquidos_juridica[i].descricao_residuo();
                        cout << doador_juridico_liquido[i].get_nome() << " e " << receptor_juridico_liquidos[j].get_nome() << "devem comparecer no/na" << doador_juridico_liquido[i].get_coleta() << " em " << data;
                        continue;
                    }
                    else
                        continue;
                }
            }
        if (!agendado)
        {
            agendado = 1;
            for (int j = 0; j < receptor_juridico_liquidos.size(); ++j)
                if (doacao_liquidos_juridica[i].get_residuos() == tipo_receptor_liquidos_juridico[j])
                {
                    Agendamento A(doador_juridico_liquido[i].get_coleta(), receptor_juridico_liquidos[j].get_coleta());
                    if (A.existe_agendamento())
                    {
                        cout << receptor_juridico_liquidos[i].get_nome() << "é um receptor compatível. Gostaria de realizar um agendamento?(s/n)\n";
                        cin >> c;
                        if (c == 's')
                        {
                            cout << "DIGITE DATA E HORA\n";
                            std::cin.ignore();
                            std::getline(cin, data);

                            cout << "AGENDAMENTO CONCLUIDO COM SUCESSO\n";
                            cout << "\n O RESIDUO A SER DOADO É UM/UMA " << doacao_liquidos_juridica[i].get_residuos() << "\n ";
                            doacao_solidos_juridica[i].descricao_residuo();
                            cout << doador_juridico_liquido[i].get_nome() << " e " << receptor_juridico_liquidos[j].get_nome() << "devem comparecer no/na" << doador_juridico_liquido[i].get_coleta() << " em " << data;
                            continue;
                        }
                        else
                            continue;
                    }
                }
        }
        if (!agendado)
            cout << "\nNÃO FOI POSSIVEL REALIZAR O CADASTRO DE" << doador_juridico_liquido[i].get_nome() << "POIS NÃO EXISTEM RECEPTORES COMPATÍVEIS!" << endl;
    }
};
int main()
{
    char c = 0;
    int temp = -1;
    std::string _residuo;
    std::string adiciona_residuo;
    std::string descricao;
    residuos_solidos.push_back(Solidos("Metais", "Descarte-os no cesto de recicláveis ou no cesto específico (cor amarela)"));
    residuos_solidos.push_back(Solidos("Papeis", "O cesto para descarte de papel é azul, então, sempre que você for jogar fora, mesmo que não esteja em casa, já sabe como não errar."));
    residuos_solidos.push_back(Solidos("Plasticos", "O cesto para descarte de plastico é vermelho, então, sempre que você for jogar fora, mesmo que não esteja em casa, já sabe como não errar."));
    residuos_liquidos.push_back(Liquidos("Óleo", "Deve-se armazená-lo em uma garrafa de vidro ou de plástico, e levar até um posto de coleta para que ele seja assim reciclado."));
    residuos_liquidos.push_back(Liquidos("Tintas", "As latas de tinta vazias (ou mesmo as que ainda tiverem restos de tinta) devem ser levadas a uma Área de Transbordo e Triagem – ATT, que são áreas específicas para essa coleta, determinadas pela prefeitura de cada cidade"));

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
                if (temp == 1 || temp == 2)
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
                std::getline(std::cin, descricao);

                residuos_liquidos.push_back(Liquidos(adiciona_residuo, descricao));
            }
        }
    }
    c = '1';
    cout << "---ETAPA DE CADASTRO---\n DESEJA REALIZAR ALGUM CADASTRO?\n";
    while (c != 'n')
    {

        std::cout << "\nDigite 's' para SIM e digite 'n' para NAO.\n";
        std::cin >> c;

        if (c == 'n')
        {
            std::cout << "---FIM DA SESSÃO DE CADASTRO---" << std::endl;
            break;
        }

        else
        {

            std::cout << "\nSelecione uma opcao: " << std::endl;
            std::cout << std::endl;
            std::cout << "1. Doador" << std::endl;
            std::cout << "2. Receptor\n";
            std::cin >> c;

            if (c == '1')
            {
                std::cout << "Você é uma pessoa física ou juridica?\n";
                std::cout << "1 - Física\n 2 - Juridica\n";
                std::cin >> c;
                cadastro_doador(c);
            }
            else
            {
                std::cout << "Você é uma pessoa física ou juridica?\n";
                std::cout << "1 - Física\n 2 - Juridica\n";
                std::cin >> c;
                cadastro_receptor(c);
            }
        }
        cout << "DESEJA REALIZAR MAIS ALGUM CADASTRO?\n";
    }

    cout << "---AGENDAMENTO---" << endl;

    while (1)
    {

        cout << "\n(1) - Agendar Doadores - Pessoa Física - Sólidos\n";
        cout << "(2) - Agendar Doadores - Pessoa Física - Líquidos\n";
        cout << "(3) - Agendar Doadores - Pessoa Jurídica - Sólidos\n";
        cout << "(4) - Agendar Doadores - Pessoa Jurídica - Líquidos\n";
        cout << "(5)- Sair";
        cin >> temp;
        if (temp == 1)
            agendar_doador_fisico_solido();
        else if (temp == 2)
            agendar_doador_fisico_liquidos();
        else if (temp == 3)
            agendar_doador_juridico_solidos();
        else if (temp == 4)
            agendar_doador_juridico_liquidos();
        else
        {
            cout << "\n---ENCERRAMENTO---\n";
            break;
        }

        cout << "\nDESEJA REALIZAR MAIS ALGUM AGENDAMENTO?(s/n)" << endl;
        cin >> c;
        if (c == 'n' || c == 'N')
        {
            cout << "\n---ENCERRAMENTO---\n";
            break;
        }
    }

    return 0;
}
