#include "robot.h"
#include "abastecedor.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
using std::string;
using std::string;
using std::stringstream;

Abastecedor::Abastecedor(string serie, string material,double amperios, double precio)
	:Robot(serie, material,amperios,precio){
}
Abastecedor::~Abastecedor(){
}
void Abastecedor::imprimir(){
	cout << "Sirviente Aumento Oxido" << endl;
}

