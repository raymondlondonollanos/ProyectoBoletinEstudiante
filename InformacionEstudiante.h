#include "Estudiante.h"
#include "Ciudades.h"


#pragma once
#ifndef INFORMACION_ESTUDIANTE_H
#define INFORMACION_ESTUDIANTE_H

namespace informacionEstudiante
{
	class InformacionEstudiante
	{
		public:
		// Constructor que recibe un objeto Estudiante y una ciudad de nacimiento
		InformacionEstudiante(const estudiantes::Estudiante& estudiante)
			: m_estudiante(estudiante) {}
		
		

		//InformacionEstudiante(const InformacionEstudiante& info) = delete; // Deshabilitamos el constructor de copia para evitar copias no deseadas

		//InformacionEstudiante& operator=(const InformacionEstudiante& info) = delete; // Deshabilitamos el operador de asignación para evitar asignaciones no deseadas

		// Método para mostrar la información del estudiante
		void mostrarInformacion() const;

	private:
		const estudiantes::Estudiante& m_estudiante; 

	};
}

#endif



