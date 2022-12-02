#include "Solidos.h"
#include <iostream>
#include <string>
#include "../Residuos/Residuos.h"

Solidos::Solidos(std::string nome,std::string _descricao):Residuos(nome){

descricao = _descricao;
}

Solidos::~Solidos(){

}

void Solidos::descricao_residuo(){

std::cout << "\nO metodo de descarte deste Solido é: \n";
std::cout << descricao << std::endl;
}