/*Esta clase almacenara la informacion basica de un estudiante, identificacion,sexo, nacimiento, padres, direccion, enfermedades, hermanos Trateremos de utilizar para este ejercicio solamente punteros creado dinamicamente, apertura y cierre de memoria dinamica*/

#include <string>

#pragma once
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

namespace estudiantes
{
	class Estudiante
	{

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


