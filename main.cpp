#include "robot.h"
#include "sirviente.h"
#include "trabajador.h"
#include "abastecedor.h"
#include <iostream>
#include <sstream>
#include <vector>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;
int menu();

int main(int argc, char* argv[]){
	int opcion;
	vector <Robot*> robots;
	while((opcion = menu()) != 7 ){
		if (opcion == 1){
			int op;
			while(op != 4){
				cout << "1. Trabajador" << endl;
				cout << "2. Sirviente" << endl;
				cout << "3. Abastecedor" << endl;
				cout << "4. Salir" << endl;
				cin >> op;
				if (op == 1){
					string serie,material;
					double amperios,precio;
					cout << "Serie: " << endl;
					cin >> serie;
					cout << "Material: " << endl;
					cin >> material;
					cout << "Amperios: " << endl;
					cin >> amperios;
					cout << "Precio: " << endl;
					cin >> precio;
					robots.push_back(new Trabajador(serie, material, amperios, precio));
					cout << "Agregado" << endl;
				}
				if(op == 2 ){
					string serie,material;
                                        double amperios,precio;
                                        cout << "Serie: " << endl;
                                        cin >> serie;
                                        cout << "Material: " << endl;
                                        cin >> material;
                                        cout << "Amperios: " << endl;
                                        cin >> amperios;
                                        cout << "Precio: " << endl;
                                        cin >> precio;
                                        robots.push_back(new Sirviente(serie, material, amperios, precio,0));
                                        cout << "Agregado" << endl;

				}
				if(op == 3){
					string serie,material;
                                        double amperios,precio;
                                        cout << "Serie: " << endl;
                                        cin >> serie;
                                        cout << "Material: " << endl;
                                        cin >> material;
                                        cout << "Amperios: " << endl;
                                        cin >> amperios;
                                        cout << "Precio: " << endl;
                                        cin >> precio;
                                        robots.push_back(new Abastecedor(serie, material, amperios, precio));
                                        cout << "Agregado" << endl;
				}
			}	
		}
		if (opcion == 3){
			int posicion;
                        cout << endl;
                        for (int i=0; i<robots.size(); i++){
                                cout << i << " " << robots[i]->toString() << endl;
                        }
                        cout << endl;
                        cout << "Ingrese La Posicion A Borrar " << endl;
                        cin >> posicion;
			robots.erase(robots.begin()+posicion);
			cout << endl;
			for (int i=0; i<robots.size(); i++){
	                        cout << i << " " << robots[i]->toString() << endl;
	                }
			cout << endl;  
			cout << " Persona Borrada!" << endl;
			
		}
		if(opcion == 2){
			int posicion;
			string serie,material;
			cout << endl;
              		for (int i=0; i<robots.size(); i++){
                        	cout << i << " " << robots[i]->toString() << endl;
                       	}
			cout << endl;
			cout << "Ingrese La Posicion A Modificar: " << endl;
			cin >> posicion;
                        cout << "Serie:" << endl;
                        cin >> serie;
                        cout << "Material:" << endl;
                        cin >> material;
			robots[posicion]->setSerial(serie);
			robots[posicion]->setMaterial(material);
			cout << endl;
                        for (int i=0; i<robots.size(); i++){
                                cout << i << " " << robots[i]->toString() << endl;
                        }
                        cout << endl;
			cout << "Robot Modificado!" << endl;	
             	}
		if(opcion == 5){
			cout << "Funciones Robots" << endl;
			//cout << endl;
                        /*for (int i=0; i<robots.size(); i++){
                                cout << i << " " << robots[i]->this.imprimir() << endl;
                        }
                        cout << endl;*/
		}

	}
	return 0;
}

int menu(){
	int opcion;
	cout << "----------Menu----------" << endl;
	cout << "1. Agregar Robots" << endl;
	cout << "2. Modificar Robots" << endl;
	cout << "3. Eliminar Robots" << endl;
	cout << "4. Comprar Robots" << endl;
	cout << "5. Usar Funcion Robots" << endl;
	cout << "6. Botar Robots" << endl;
	cout << "6. Salir" << endl;
	cin >> opcion;
	return opcion;

}

