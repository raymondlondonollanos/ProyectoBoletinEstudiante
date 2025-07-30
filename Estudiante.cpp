#include "Estudiante.h"
#include <iostream>
#include <string>

/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido, const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion, const std::string* enfermedades*/

namespace estudiantes
{
	Estudiante::Estudiante(const std::string* apellidos, const std::string* nombres
	, const int* id, const std::string* nombreAcudienteMadre, const int* telefono_acudiente_madre, const std::string* nombreAcudientePadre, const int* telefono_acudiente_padre, ciudades::CiudadesColombia ciudad)
		: m_ciudadNacimiento{ciudad}
	{

		//validamos que los punteros pasados no sean nullptr
		if(apellidos == nullptr || nombres == nullptr || id == nullptr || nombreAcudienteMadre == nullptr || telefono_acudiente_madre == nullptr || nombreAcudientePadre == nullptr || telefono_acudiente_padre == nullptr)
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
			m_nombreMadre = new std::string (*nombreAcudienteMadre);
			m_nombrePadre = new std::string(*nombreAcudientePadre);
			m_telefono_acudiente_madre = new int(*telefono_acudiente_madre);
			m_telefono_acudiente_padre = new int(*telefono_acudiente_padre);
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
		delete m_nombreMadre;
		m_nombreMadre = nullptr;
		delete m_nombrePadre;
		m_nombreMadre = nullptr;
		delete m_telefono_acudiente_madre;
		m_telefono_acudiente_madre = nullptr;
		delete m_telefono_acudiente_padre;
		m_telefono_acudiente_padre = nullptr;

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
			delete m_nombreMadre;
			delete m_nombrePadre;
			delete m_telefono_acudiente_madre;
			delete m_telefono_acudiente_padre; 
			delete m_identificacion;

			if (estu.m_nombres != nullptr && estu.m_apellidos != nullptr && estu.m_identificacion != nullptr && estu.m_nombreMadre != nullptr &&
				estu.m_nombrePadre != nullptr && estu.m_telefono_acudiente_madre != nullptr && estu.m_telefono_acudiente_padre != nullptr)
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

