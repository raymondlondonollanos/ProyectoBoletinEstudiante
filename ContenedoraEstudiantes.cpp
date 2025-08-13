#include "ContenedoraEstudiantes.h"
#include <algorithm>

namespace contenedorEstu
{
	ContenedoraEstudiantes::ContenedoraEstudiantes(int tamano) :
		m_tamano{ tamano }
	{
		if (m_tamano > 0) {
			//inicializa dinamicamente el puntero estudiantes
			m_ptr_estudiante = new estudiantes::Estudiante[static_cast<std::size_t>(m_tamano)];
		}
		
	}
	//constructor de copias
	ContenedoraEstudiantes::ContenedoraEstudiantes(const ContenedoraEstudiantes& co)
	{
		copy_deep(co);
	}

	ContenedoraEstudiantes& ContenedoraEstudiantes::operator=(const ContenedoraEstudiantes& co)
	{
		if (this != &co)
		{
			erase(); // Liberar la memoria actual
			copy_deep(co); // Realizar una copia profunda
		}
		return *this; // Cambiar el tipo de retorno a ContenedoraEstudiantes&
	}

	estudiantes::Estudiante& ContenedoraEstudiantes::operator[](int index)
	{
		// TODO: Insertar una instrucción "return" aquí
		return m_ptr_estudiante[index];
	}
	


	ContenedoraEstudiantes::~ContenedoraEstudiantes()
	{
		//Destruir la memoria asiganada dinamicamente en el constructor\
		delete[] m_ptr_estudiante;
		m_ptr_estudiante = nullptr;
	}
	void ContenedoraEstudiantes::erase()
	{
		delete[] m_ptr_estudiante;
		m_ptr_estudiante = nullptr;
		m_tamano = 0;
	}
	void ContenedoraEstudiantes::copy_deep(const ContenedoraEstudiantes& copy)
	{
		delete[] m_ptr_estudiante;

		if (copy.m_ptr_estudiante)
		{
			m_tamano = copy.m_tamano;
			
			//se realizala copia profunda
			std::copy_n(copy.m_ptr_estudiante,m_tamano,m_ptr_estudiante);
		}
	} 
}

