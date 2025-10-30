//
// Created by ng573 on 29/10/2025.
//

#ifndef INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_VIDEOJUEGO_H
#define INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_VIDEOJUEGO_H

#endif //INC_8_PRACTICA_MAPA_VECTOR_NICKGOM03_VIDEOJUEGO_H

#include <iostream>

class Videojuego {

private:
    std::string codigo;
    std::string nombre;
    std::string genero;
    int nivelDeDificultad;

public:
    Videojuego();
    Videojuego(std::string nombre, std::string codigo, std::string genero, int nivelDeDificad);
    const std::string& getNombre() const;
    const std::string& getCodigo() const;
    const std::string& getGenero() const;
    int getNivelDeDificad() const;

    void setNombre(std::string nombre);
    void setCodigo(std::string codigo);
    void setGenero(std::string genero);

    void mostrar() const;

};