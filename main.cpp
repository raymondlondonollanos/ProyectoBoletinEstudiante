#include <iostream>
#include <string>
#include "Estudiante.h"
#include "InformacionEstudiante.h"
#include "Ciudades.h"
#include <limits>
#include <cstdlib> 

int main() {

	std::string* nombres{};
	std::string* apellidos{};
	int* identificacion{};
	ciudades::CiudadesColombia ciudadNacimiento{};
	std::string* nombreMadres{ nullptr };
	int* telefAcudienteMadre{ nullptr };
	std::string* nombrePadres{ nullptr };
	int* teleAcudiente{ nullptr };


	while (true) {

		std::cout << "Bienvenido al sistema de gestion de estudiantes" << std::endl;
		std::cout << "1. Agregar estudiante" << std::endl;
		std::cout << "2. Salir" << std::endl;
		// Aquí podrías agregar la lógica para agregar un estudiante
		int opcionAgregar;
		std::cin >> opcionAgregar;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if(opcionAgregar == 1) {

			std::cout << "Ingrese los nombres del estudiante      : ";
			std::string nombreInput;
			std::getline(std::cin >> std::ws, nombreInput);
			nombres = new std::string(nombreInput);

			std::cout << "Ingrese los apellidos del estudiante    : ";
			std::string apellidoInput;
			std::getline(std::cin >> std::ws, apellidoInput);
			apellidos = new std::string(apellidoInput);

			std::cout << "Ingrese la identificacion del estudiante: ";
			int identificacionInput;
			std::cin >> identificacionInput;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			identificacion = new int(identificacionInput);
			

			system("cls");

			int ciudadSeleccionada;

			std::cout << "Seleccione la ciudad de nacimiento del estudiante: " << std::endl;

			ciudades::mostrarCiudades();
			

			std::cin >> ciudadSeleccionada;

			ciudadNacimiento = static_cast<ciudades::CiudadesColombia>(ciudadSeleccionada - 1);

			break;
		}
		else
		{
			std::cout << "Saliendo del sistema..." << std::endl;
			break;
		}

	}

	system("cls");



	estudiantes::Estudiante estudianteP{apellidos,
		nombres,
		identificacion,
		ciudadNacimiento
	};

	delete	nombres;
	delete apellidos;
	delete identificacion;

	informacionEstudiante::InformacionEstudiante infoEstudiante(estudianteP);

	infoEstudiante.mostrarInformacion();
	
	return 0;
}