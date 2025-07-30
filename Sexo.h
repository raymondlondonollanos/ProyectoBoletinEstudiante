#include <iostream>
#include <string>

#pragma once
#ifndef SEXO_H
#define SEXO_H

namespace sexo
{
	enum class Sexo
	{
		MASCULINO,
		FEMENINO,
		OTRO

	};

	const std::string_view sexoToString(Sexo sexo) {
		switch (sexo) {
		case Sexo::MASCULINO: return "Masculino";
		case Sexo::FEMENINO: return "Femenino";
		case Sexo::OTRO: return "Otro";
		default: return "Desconocido";
		}
	}

	void mostrarOpcionesSexo();
}
#endif // !1
