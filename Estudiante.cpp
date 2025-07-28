#include "Estudiante.h"
#include <iostream>

/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido, const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion, const std::string* enfermedades*/

namespace estudiantes
{
	Estudiante::Estudiante( const std::string* prim_nombre)
	{

		//inicializamos	los punteros a string con memoria dinamica
		m_prim_nombre = new std::string(*prim_nombre) ;

		std::cout << "Constructor de Estudiante llamado." << *m_prim_nombre << std::endl;
	}
	Estudiante::~Estudiante()
	{
		delete m_prim_nombre;
		m_prim_nombre = nullptr;
	}
}

