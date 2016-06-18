#include "robot.h"
#include "sirviente.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
using std::string;
using std::stringstream;

Sirviente::Sirviente(string serie, string material,double amperios, double precio,int oxido)
	:Robot(serie, material,amperios,precio), oxido(oxido){
}
Sirviente::~Sirviente(){
}
string Sirviente::toString()const{
	stringstream ss;
	ss << Robot::toString() << " Sirviente: " << "Oxido: " << oxido;
	return ss.str();
}
void Sirviente::imprimir(){
	oxido+=5;
	cout << "Sirviente Aumento Oxido" << endl;
}
