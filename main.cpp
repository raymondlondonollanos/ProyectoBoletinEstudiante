#include <iostream>
#include <string>
#include "Estudiante.h"
#include "InformacionEstudiante.h"
#include "Ciudades.h"
#include <limits>
#include <cstdlib> 
#include <vector>

int main() {

	std::string* nombres{ nullptr };
	std::string* apellidos{ nullptr };
	int* identificacion{nullptr};
	ciudades::CiudadesColombia ciudadNacimiento{};
	std::string* nombreMadres{ nullptr };
	int* telefAcudienteMadre{ nullptr };
	std::string* nombrePadres{ nullptr };
	int* teleAcudientePadre{ nullptr };


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
			
			std::cout << "Ingrese el nombre de la mama del estudiante: ";
			std::string nombreMama;
			std::getline(std::cin >> std::ws, nombreMama);
			nombreMadres = new std::string(nombreMama);

			std::cout << "Ingrese el nombre del papa del estudiante: ";
			std::string nombrePapa;
			std::getline(std::cin >> std::ws, nombrePapa);
			nombrePadres = new std::string(nombrePapa);

			std::cout << "Ingrese el no celular de la mama del estudiante: ";
			int numMama;
			std::cin >> numMama;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			telefAcudienteMadre = new int(numMama);

			std::cout << "Ingrese el no celular del papa del estudiante: ";
			int numPapa;
			std::cin >> numPapa;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			teleAcudientePadre = new int(numPapa);

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
		nombres,identificacion, nombreMadres, telefAcudienteMadre, nombrePadres, teleAcudientePadre,
		ciudadNacimiento};

	/*delete	nombres;
	delete apellidos;
	delete identificacion;*/

	informacionEstudiante::InformacionEstudiante infoEstudiante(estudianteP);

	infoEstudiante.mostrarInformacion();


	std::vector<estudiantes::Estudiante> p;

	p.push_back(estudianteP);
	std::cout << "Estudiante agregado exitosamente." << std::endl;

	//const std::string* nombre = p[0].getNombres();
	//
	std::cout << *(p[0].getNombres());

	std::vector<estudiantes::Estudiante> p1{ estudianteP };

	std::cout << *(p1[0].getNombres());

	return 0;
}