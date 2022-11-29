#include <iostream>
#include "Usuario.h"
#include <vector>
#include "Residuos.h"

class Receptor: public Usuario{
private:
Residuos tipo_residuo;
public:
Residuos get_tipo_residuo();

};