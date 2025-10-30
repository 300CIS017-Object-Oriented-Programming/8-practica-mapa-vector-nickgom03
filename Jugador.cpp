//
// Created by ng573 on 29/10/2025.
//

#include <iostream>
#include "Jugador.h"
#include "Videojuego.h"

Jugador::Jugador(std::string nickname, int nivelRanking) {
    if (nickname != "") {
        std::cout << "No nickname" << std::endl;
    }
    setNivelRanking(nivelRanking);
}

void Jugador::setNivelRanking(int nivelRanking) {
    if (nivelRanking < rank_min || nivelRanking > rank_max) {
        std::cout << "Nivel invalido" << std::endl;
    }
    return nivelRanking;
}

bool Jugador::estaInscrito (const Videojuego* videojuego) const {
    for (int i = 0; i < videosjuegosInscritos; i++) {
        if (p == videojuego) {
            return true;
        }
    }
    return false;
}

void Jugador::Inscribir (Videojuego* videojuego) const {
    if (!videojuego) {
        std::cout << "No videojuego" << std::endl;
    }
    if (p == videojuego) {
        std::cout << "Jugador inscrito" << std::endl;
    }
    videojuegosInscritos.push_back(videojuego);
}

double Jugador::PromedioDeDificultad() const {
    if (videosjuegosInscritos == 0) {
        return 0;
    }
    int suma = 0;
    for (int i = 0; i < videosjuegosInscritos; i++) {
        suma += i->getNivelDificultad();
    }
}

void Jugador::mostrar() const  {
    std::cout << "Nombre del jugador: " << nickname << std::endl;
    std::cout << "Ranking: " << nivelRanking << std::endl;
    std::cout << "Videojuegos inscritos: " << videosjuegosInscritos.size << std::endl;
}