//
// Created by jpfra on 30/09/25.
//
#include "Cancion.h"

#include <iostream>

Cancion::Cancion(std::string nombre, std::string artista, int duracion) : nombre(nombre), artista(artista), duracion(duracion) {}

void Cancion::infoCancion() const {
    std::cout << "Titulo: " << this->nombre << std::endl;
    std::cout << "Artista: " << this->artista << std::endl;
    std::cout << "Duracion: " << duracion / 60 << ":" << duracion % 60 << std::endl;
}
