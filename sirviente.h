#pragma once
#include "robot.h"
#include <string>
using std::string;

class Sirviente : public Robot{
	int oxido;
  public:
	Sirviente(string,string,double,double,int=0);
	virtual ~Sirviente();
	virtual string toString()const;
	virtual void imprimir();
};
