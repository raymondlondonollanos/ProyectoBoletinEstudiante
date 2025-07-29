#include <iostream>
#include <string>
#include "Estudiante.h"
#include "InformacionEstudiante.h"
#include "Ciudades.h"

int main() {

	
	estudiantes::Estudiante* estudiante = new estudiantes::Estudiante(
		new std::string("Juan"),
		new std::string("Perez"),
		new int(123456)
	);

	informacionEstudiante::InformacionEstudiante infoEstudiante(estudiante, ciudades::CiudadesColombia::BOGOTA);

	infoEstudiante.mostrarInformacion();
	
	return 0;
}