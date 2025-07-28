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
		Estudiante(const std::string* prim_nombre);
		~Estudiante(); //destructor'

		//metodos de acceso
		const std::string* getPrimNombre() const 
		{ 
			return m_prim_nombre;
		}

		void copyProfunda(const Estudiante& estu)  
        {  
            delete m_prim_nombre;  

			if (estu.m_prim_nombre)
			{
				m_prim_nombre = new std::string(*estu.m_prim_nombre); // Fixed syntax error and removed redeclaration of m_prim_nombre  
			}
			else
			{
				m_prim_nombre = nullptr;
			}

		}

		void mostrar()
		{
			std::string nom = *m_prim_nombre;
			std::cout << nom << std::endl;
		}
	//creacion de datos miembros
	private:
		//Solamente declaramos los punteros, no los inicializamos
		std::string* m_prim_nombre{ nullptr };
		std::string* m_segu_nombre{ nullptr };
		std::string* m_prim_apellido{ nullptr };
		std::string* m_segu_apellido{ nullptr };

		//Como un string arrat por que almacenaremos numero mas ciudad de nacimiento
		std::string* m_identificacion{ nullptr };
	};
}

#endif // ESTUDIANTE_H


