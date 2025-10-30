//
// Created by ng573 on 29/10/2025.
//

#include <iostream>
#include "Videojuego.h"

Videojuego::Videojuego (std::string codigo, std::string nombre, std::string genero, int nivel) {
    if (codigo == " ") {
        std::cout << "Codigo de videojuego invalido!" << std::endl;
    }
    if (nombre == " ") {
        std::cout << "Nombre de videojuego invalido!" << std::endl;
    if (genero == " ") {
        std::cout << "Genero de videojuego invalido!" << std::endl;
    }
}

void Videojuego::setNombre (const std::string& nombre) {
    if (nombre == " ") {
        std::cout << "Nombre invalido!" << std::endl;
    }
    this->nombre = nombre;
}

void Videojuego::setGenero (std::string genero) {
    if (genero == " ") {
        std::cout << "Genero invalido!" << std::endl;
    }
    this->genero = genero;
}

void Videojuego::setNivelDeDificultad (int nivel) {
    if (nivel == " ") {
        std::cout << "Nivel de Dificultad invalido!" << std::endl;
    }
    this->nivel = nivel;
}

void Videojuego::mostrar() const {
    std::cout << "Nombre de videojuego: " << this->nombre << std::endl;
    std::cout << "Genero de Dificultad: " << this->genero << std::endl;
    std::cout << "Nivel de Dificultad: " << this->nivel << std::endl;
}