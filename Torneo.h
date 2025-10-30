//
// Created by ng573 on 29/10/2025.
//

#ifndef INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_TORNEO_H
#define INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_TORNEO_H

#endif //INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_TORNEO_H

#include <iostream>
#include "Videojuego.h"
#include "Jugador.h"

class Torneo {
private:
    std::map<std::string, Videojuego*> videojuegosDisponibles;
    std::map<std::string, Jugador*> JugadoresRegirstrados;
public:
    Torneo();
    ~Torneo();
    void registrarVideojuego() const;
    void registrarJugador() const;
    void inscribirJugadorEnVideojuego() const;
    void mostrarVideojuegosDeJugador() const;
    void inicializarVideojuegos() const;
    void inicializarJugadores() const;

};