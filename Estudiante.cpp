#include "Estudiante.h"
#include <iostream>

/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido, const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion, const std::string* enfermedades*/

namespace estudiantes
{
	Estudiante::Estudiante(const std::string* apellidos, const std::string* nombres
	, const int* id)
	{

		//validamos que los punteros pasados no sean nullptr
		if(apellidos == nullptr || nombres == nullptr || id == nullptr)
		{
			std::cerr << "Error: Punteros nulos no permitidos." << std::endl;
			return;
		}
		else 
		{
			//Inicializamos las variables punteros con memoria dinamica despues de validar que no sean null
			m_nombres = new std::string(*nombres);
			m_apellidos = new std::string(*apellidos);
			m_identificacion = new int(*id);

		}
	
	}
	Estudiante::~Estudiante()
	{
		delete m_nombres;
		m_nombres = nullptr; // Evitar dangling pointer
		delete m_apellidos;
		m_apellidos = nullptr; // Evitar dangling pointer
		delete m_identificacion;
		m_identificacion = nullptr; // Evitar dangling pointer

	}
}

