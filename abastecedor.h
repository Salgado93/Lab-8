#pragma once
#include "robot.h"
#include <string>
using std::string;

class Abastecedor : public Robot{
	
  public:
	Abastecedor(string,string,double,double);
	virtual ~Abastecedor();
	virtual void imprimir();
};
