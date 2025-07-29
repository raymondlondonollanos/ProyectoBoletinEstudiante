/*Esta clase almacenara la informacion basica de un estudiante, identificacion,sexo(es del tipo enum), nacimiento(del tipo enum), padres, direccion, enfermedades, hermanos Trateremos de utilizar para este ejercicio solamente punteros creado dinamicamente, apertura y cierre de memoria dinamica*/


/*, const std::string* segu_nombre, const std::string* prim_apellido, const std::string* segu_apellido,const std::string* identificacion, const std::string* nombre_padre, const std::string* nombre_madre, const std::string* direccion,const std::string* enfermedades*/
#include <string>
#include <iostream>

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
		Estudiante(const std::string* apellidos, const std::string* nombres , const int* id);
		~Estudiante(); //destructor'

		//metodos de acceso
		const std::string* getNombres() const 
		{ 
			return m_nombres;
		}

		void copyProfunda(const Estudiante& estu)  
        {  
            

		}

		
	//creacion de datos miembros
	private:
		//Solamente declaramos los punteros, no los inicializamos
		std::string* m_nombres{ nullptr };
		std::string* m_apellidos{ nullptr };

		//Como un string arrat por que almacenaremos numero mas ciudad de nacimiento
		int* m_identificacion{ nullptr };

		//ciudad tipo enum por agregacion para utilizarlo en otras clases

	};
}

#endif // ESTUDIANTE_H


