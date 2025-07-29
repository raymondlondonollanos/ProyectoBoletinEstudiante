#include "InformacionEstudiante.h"

void informacionEstudiante::InformacionEstudiante::mostrarInformacion() const
{
		//verifica que el puntero m_estudiante no sea nulo antes de acceder a sus datos
		if (m_estudiante) {
			std::cout << "Nombres: " << *m_estudiante->getNombres() << std::endl;
			std::cout << "Apellidos: " << *m_estudiante->getApellidos() << std::endl;
			std::cout << "Identificacion: " << *m_estudiante->getIdentificacion() << std::endl;
			std::cout << "Ciudad de Nacimiento: " << ciudades::ciudadToString(m_ciudadNacimiento) << std::endl; // Convertimos a int para mostrar el enum
		}
		else {
			std::cout << "No hay información del estudiante." << std::endl;
		}
}

