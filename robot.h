#pragma once
#include <ctime>
#include <string>
using std::string;

class Robot{
	string serie;
	string material;
	double amperios;
	double precio;
  public:
	Robot(string,string, double,double);
	virtual ~Robot();
	virtual string toString()const;
	void setSerial(string);
	void setMaterial(string);
	virtual void imprimir ();
};
