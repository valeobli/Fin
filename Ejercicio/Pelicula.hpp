#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "Video.hpp"

class Pelicula : public Video {
public:
    Pelicula(string nom, string gene, int cali, int ano, int dura, int nomi);
    
    void setNominaciones(int nomi);
    int getNominaciones() const;

    void muestraDatos() const override;

private:
    int nominaciones;
};

#endif
