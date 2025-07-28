#include <iostream>
#include <string>
#include "Estudiante.h"

int main() {

	std::string* ptr_nombre{ new std::string("raymond") };

	estudiantes::Estudiante estudiante(ptr_nombre);

	

	//const std::string* prim_nombre = estudiante.getPrimNombre();

	auto prim_nombre = estudiante.getPrimNombre();

	std::cout << "\nNombre de estudiante: " << *estudiante.getPrimNombre() << std::endl;
	std::cout << "\nNombre de estudiante auto: " << *prim_nombre << std::endl;

	estudiante.mostrar();

	
	return 0;
}