//
// Created by jpfra on 30/09/25.
//

#ifndef BIBLIOTECAMUSICAL_CANCION_H
#define BIBLIOTECAMUSICAL_CANCION_H

#include <string>

class Cancion {
private:
    std::string nombre;
    std::string artista;
    int duracion;
public:
    Cancion(std::string nombre, std::string artista, int duracion);
    void infoCancion() const;
};


#endif //BIBLIOTECAMUSICAL_CANCION_H