#include "Estudiante.h"

#pragma once
#ifndef CONTENEDOR_ESTUDIANTES
#define CONTENEDOR_ESTUDIANTES

namespace contenedorEstu
{
	class ContenedoraEstudiantes
	{
		ContenedoraEstudiantes() = default;

		ContenedoraEstudiantes(int tamano);

		//funcinoes que earase, copy_deep, constructor de copias, asignacion, operador[], destructor
		ContenedoraEstudiantes(const ContenedoraEstudiantes& co);

		ContenedoraEstudiantes& operator=(const ContenedoraEstudiantes& co);

		estudiantes::Estudiante& operator[](int index);

		~ContenedoraEstudiantes();

		void erase();

		void copy_deep(const ContenedoraEstudiantes& copy);



	private:
		estudiantes::Estudiante* m_ptr_estudiante{ nullptr };
		int m_tamano{};
	};
}

#endif // !CONTENEDOR_ESTUDIANTES



