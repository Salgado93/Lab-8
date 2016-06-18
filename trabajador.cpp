#include "robot.h"
#include "trabajador.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
using std::string;
using std::string;
using std::stringstream;

Trabajador::Trabajador(string serie, string material,double amperios, double precio)
	:Robot(serie, material,amperios,precio){
}
Trabajador::~Trabajador(){
}
void Trabajador::imprimir(){
	cout << "Trabajador Gano 200$ " << endl;
}

