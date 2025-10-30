//
// Created by ng573 on 29/10/2025.
//

#ifndef INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_JUGADOR_H
#define INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_JUGADOR_H

#endif //INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_JUGADOR_H

#include <iostream>

class Videojuego

class Jugador {
private:
    std::string nickname;
    int nivelRanking;
    std::vector<Videojuego*> videojuegosInscritos;

public:
    Jugador();
    Jugador(std::string nickname, int nivelRanking, std::vector<Videojuego*> videojuegoInscritos);

    const std::string& getNickname() const;
    int getNivelRanking() const;
    const std::vector<Videojuego*>& getVideojuegoInscritos() const;

    void setNickname(std::string nickname);
    void setNivelRanking(int nivelRanking);
    bool estaInscrito() const;
    void inscribir (Videojuego* videojuego) const;
    double promedioDeDificultad() const;
    void mostrar() const;

    static int rank_min = 1;
    static int rank_max = 100;

};
