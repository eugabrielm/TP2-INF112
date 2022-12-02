#pragma once

#include <iostream>
#include <string>
#include <vector>

class Agendamento
{
private:
   
    std::string coleta_1;
    std::string coleta_2;

public:
    Agendamento( std::string _coleta_1, std::string _coleta_2);
    ~Agendamento();

  
    bool existe_agendamento();
    
};
