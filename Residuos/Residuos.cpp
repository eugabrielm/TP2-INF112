#include <iostream>
#include "Residuos.h"

Residuos::Residuos(double _quantidade){
quantidade = _quantidade;

};

Residuos::~Residuos(){};

double Residuos::get_quantidade(){

 return this -> quantidade;   
}

