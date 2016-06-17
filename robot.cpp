#include "robot.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Robot::Robot(string serie,string material,double amperios,double precio):serie(serie),material(material),amperios(amperios),precio(precio){
}

Robot::~Robot(){
}

string Robot::toString()const{
	stringstream ss;
	ss << "Robot: " << serie << " Material: " << material << " Amperios: " << amperios << " Precio: " << precio;
	return ss.str();
}

void Robot::setSerial(string serie){
	this->serie = serie;
}
void Robot::setMaterial(string material){
	this->material = material;
}
