#include "robot.h"
#include "abastecedor.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Abastecedor::Abastecedor(string serie, string material,double amperios, double precio)
	:Robot(serie, material,amperios,precio){
}
Abastecedor::~Abastecedor(){
}

