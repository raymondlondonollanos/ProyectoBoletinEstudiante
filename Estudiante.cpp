#include "Estudiante.h"
#include <iostream>

/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido, const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion, const std::string* enfermedades*/

namespace estudiantes
{
	Estudiante::Estudiante(const std::string* apellidos, const std::string* nombres
	, const int* id , ciudades::CiudadesColombia ciudad)
		: m_ciudadNacimiento{ciudad}
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
			//m_ciudadNacimiento = ciudad; // Asignamos el enum directamente

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

	Estudiante::Estudiante(const Estudiante& estu)
	{
		copyProfunda(estu); // Llamamos al método de copia profunda
	}

	Estudiante& Estudiante::operator=(const Estudiante& estu)
	{
		{
			if (this != &estu) // Evitar autoasignación
			{
				copyProfunda(estu); // Llamamos al método de copia profunda
			}
			return *this;
		}
	}

	void Estudiante::copyProfunda(const Estudiante& estu)
	{	
			delete  m_nombres;
			delete m_apellidos;
			delete m_identificacion;

			if (estu.m_nombres != nullptr && estu.m_apellidos != nullptr && estu.m_identificacion != nullptr)
			{
				m_nombres = new std::string(*estu.m_nombres);
				m_apellidos = new std::string(*estu.m_apellidos);
				m_identificacion = new int(*estu.m_identificacion);
				m_ciudadNacimiento = estu.m_ciudadNacimiento; // Copiamos el enum directamente
			}
			else
			{
				std::cerr << "Error: Punteros nulos no permitidos en el constructor de copia." << std::endl;
			}

	}
		
	

}

