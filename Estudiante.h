/*Esta clase almacenara la informacion basica de un estudiante, identificacion,sexo(es del tipo enum), nacimiento(del tipo enum), padres, direccion, enfermedades, hermanos Trateremos de utilizar para este ejercicio solamente punteros creado dinamicamente, apertura y cierre de memoria dinamica*/


/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido,const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion,const std::string* enfermedades*/
#include <string>
#include <iostream>
#include "Ciudades.h" // Aseguramos que la clase CiudadesColombia este incluida para su uso en esta clase

#pragma once
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

namespace estudiantes
{
	class Estudiante
	{
	public:
		
		//constructores
		Estudiante() = default; //constructor por defecto
		Estudiante(const std::string* apellidos, const std::string* nombres , const int* id , const std::string* nombreAcudienteMadre, const int* telefono_acudiente_madre, const std::string* nombreAcudientePadre, const int* telefono_acudiente_padre,ciudades::CiudadesColombia ciudad);
		~Estudiante(); //destructor'

		//constructor de copia
		Estudiante(const Estudiante& estu);

		//operador de asignacion
		Estudiante& operator=(const Estudiante& estu);

		//metodo de copia profunda
		void copyProfunda(const Estudiante& estu);


		//metodos getters para obtener los datos miembros
		const std::string* getNombres() const 
		{ 
			return m_nombres;
		}

		const std::string* getApellidos() const 
		{ 
			return m_apellidos; 
		}

		const int* getIdentificacion() const 
		{ 
			return m_identificacion; 
		}

		const std::string* getNombrePadre() const 
		{ 
			return m_nombrePadre; 
		}

		const std::string* getNombreMadre() const 
		{ 
			return m_nombreMadre; 
		}

		const int* getTelefonoAcudientePadre() const 
		{ 
			return m_telefono_acudiente_padre; 
		}

		const int* getTelefonoAcudienteMadre() const 
		{ 
			return m_telefono_acudiente_madre; 
		}

		//no tiene conversion implicita
		ciudades::CiudadesColombia getCiudadNacimiento() const 
		{ 
			return m_ciudadNacimiento; 
		}

		//Creacion de los metodos setter
		void setNombres(const std::string* nombres) 
		{ 
			if (nombres != nullptr) 
			{
				delete m_nombres; // Liberar memoria anterior
				m_nombres = new std::string(*nombres); // Asignar nueva memoria
			}
		}

		void setApellidos(const std::string* apellidos) 
		{ 
			if (apellidos != nullptr) 
			{
				delete m_apellidos; // Liberar memoria anterior
				m_apellidos = new std::string(*apellidos); // Asignar nueva memoria
			}
		}

		void setIdentificacion(const int* id) 
		{ 
			if (id != nullptr) 
			{
				delete m_identificacion; // Liberar memoria anterior
				m_identificacion = new int(*id); // Asignar nueva memoria
			}
		}

		void setNombrePadre(const std::string* nombrePadre) 
		{ 
			if (nombrePadre != nullptr) 
			{
				delete m_nombrePadre; // Liberar memoria anterior
				m_nombrePadre = new std::string(*nombrePadre); // Asignar nueva memoria
			}
		}

		void setNombreMadre(const std::string* nombreMadre) 
		{ 
			if (nombreMadre != nullptr) 
			{
				delete m_nombreMadre; // Liberar memoria anterior
				m_nombreMadre = new std::string(*nombreMadre); // Asignar nueva memoria
			}
		}
		
		void setCiudadNacimiento(ciudades::CiudadesColombia ciudad) 
		{ 
			m_ciudadNacimiento = ciudad; // Asignar el valor del enum directamente
		}

		void setTelefonoAcudientePadre(const int* telefonoPadre) 
		{ 
			if (telefonoPadre != nullptr) 
			{
				delete m_telefono_acudiente_padre; // Liberar memoria anterior
				m_telefono_acudiente_padre = new int(*telefonoPadre); // Asignar nueva memoria
			}
		}

		void setTelefonoAcudienteMadre(const int* telefonoMadre) 
		{ 
			if (telefonoMadre != nullptr) 
			{
				delete m_telefono_acudiente_madre; // Liberar memoria anterior
				m_telefono_acudiente_madre = new int(*telefonoMadre); // Asignar nueva memoria
			}
		}

	//creacion de datos miembros
	private:
		//Solamente declaramos los punteros, no los inicializamos
		std::string* m_nombres{ nullptr };
		std::string* m_apellidos{ nullptr };

		//Como un string arrat por que almacenaremos numero mas ciudad de nacimiento
		int* m_identificacion{ nullptr };

		//ciudad tipo enum por agregacion para utilizarlo en otras clases
		ciudades::CiudadesColombia m_ciudadNacimiento; // Ciudad de nacimiento, por defecto Bogotá

		std::string* m_nombrePadre{ nullptr };

		std::string* m_nombreMadre{ nullptr };

		int* m_telefono_acudiente_padre{ nullptr };

		int* m_telefono_acudiente_madre{ nullptr };

	};
}

#endif // ESTUDIANTE_H


