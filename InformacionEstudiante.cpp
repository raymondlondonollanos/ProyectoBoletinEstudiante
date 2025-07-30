#include "InformacionEstudiante.h"
#include <iomanip>

void informacionEstudiante::InformacionEstudiante::mostrarInformacion() const
{
			std::cout << "          Informacion del Estudiante" << "\n\n";
			std::cout << "Nombres             : " << *m_estudiante.getNombres() << std::endl;
			std::cout << "Apellidos           : " << *m_estudiante.getApellidos() << std::endl;
			std::cout << "Identificacion      : " << *m_estudiante.getIdentificacion() << std::endl;
			std::cout << "Ciudad de Nacimiento: " << ciudades::ciudadToString(m_estudiante.getCiudadNacimiento()) << std::endl; // Convertimos a int para mostrar el enum
		
}

