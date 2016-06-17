#include "robot.h"
#include "trabajador.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Trabajador::Trabajador(string serie, string material,double amperios, double precio)
	:Robot(serie, material,amperios,precio){
}
Trabajador::~Trabajador(){
}

