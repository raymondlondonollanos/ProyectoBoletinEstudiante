#include "Estudiante.h"
#include "Ciudades.h"

/*Esta clase manejara la informacion de los estudiantes, mostrando sus datos y pidientolos*/
#pragma once
#ifndef INFORMACION_ESTUDIANTE_H
#define INFORMACION_ESTUDIANTE_H

namespace informacionEstudiante
{
	class InformacionEstudiante
	{
		public:
		// Constructor que recibe un objeto Estudiante y una ciudad de nacimiento
		InformacionEstudiante(const estudiantes::Estudiante* estudiante, ciudades::CiudadesColombia ciudadNacimiento)
			: m_estudiante(estudiante), m_ciudadNacimiento(ciudadNacimiento) {}
		// Destructor
		~InformacionEstudiante() {
			delete m_estudiante; // Liberamos la memoria del estudiante
			m_estudiante = nullptr; // Evitamos dangling pointer
		}

		InformacionEstudiante(const InformacionEstudiante& info) = delete; // Deshabilitamos el constructor de copia para evitar copias no deseadas

		InformacionEstudiante& operator=(const InformacionEstudiante& info) = delete; // Deshabilitamos el operador de asignación para evitar asignaciones no deseadas

		// Método para mostrar la información del estudiante
		void mostrarInformacion() const;

	private:
		const estudiantes::Estudiante* m_estudiante; // Puntero a un objeto Estudiante
		ciudades::CiudadesColombia m_ciudadNacimiento; // Ciudad de nacimiento del estudiante
	};
}

#endif



