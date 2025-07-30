#include <iostream>
#include <string>


#pragma once
#ifndef CIUDADES_COLOMBIA_H
#define CIUDADES_COLOMBIA_H

namespace ciudades
{
	// Clase que representa las ciudades de Colombia
	// Se utiliza un enum class para definir las ciudades
	// Cada ciudad es representada por un valor único
	enum class CiudadesColombia
	{
		BOGOTA,
		MEDELLIN,
		CALI,
		BARRANQUILLA,
		CARTAGENA,
		CUCUTA,
		PEREIRA,
		IBAGUE,
		VILLAVICENCIO,
		BUENAVENTURA,
		SOLEDAD,
		MONTERIA,
		PASTO,
		MANIZALES,
		ARMENIA
	};

	constexpr std::string_view ciudadToString(CiudadesColombia ciudad) {
		switch (ciudad) {
			case CiudadesColombia::BOGOTA: return "Bogota";
			case CiudadesColombia::MEDELLIN: return "Medellin";
			case CiudadesColombia::CALI: return "Cali";
			case CiudadesColombia::BARRANQUILLA: return "Barranquilla";
			case CiudadesColombia::CARTAGENA: return "Cartagena";
			case CiudadesColombia::CUCUTA: return "Cucuta";
			case CiudadesColombia::PEREIRA: return "Pereira";
			case CiudadesColombia::IBAGUE: return "Ibagué";
			case CiudadesColombia::VILLAVICENCIO: return "Villavicencio";
			case CiudadesColombia::BUENAVENTURA: return "Buenaventura";
			case CiudadesColombia::SOLEDAD: return "Soledad";
			case CiudadesColombia::MONTERIA: return "Montería";
			case CiudadesColombia::PASTO: return "Pasto";
			case CiudadesColombia::MANIZALES: return "Manizales";
			case CiudadesColombia::ARMENIA: return "Armenia";
			default: return "Desconocida";
		}
	}

	void mostrarCiudades();
}


#endif
