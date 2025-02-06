#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <iostream>
#include <string>
#include <list>
#include <limits>
using namespace std;

class Video {
public:
    Video(string nom, string gene, int cali, int ano, int dura);
    virtual ~Video() {}
    
    void setNombreVideo(string nom);
    string getNombreVideo() const;
    void setGenero(string gen);
    string getGenero() const;
    void setCalificacion(int cali);
    int getCalificacion() const;
    void setAnioLanzamiento(int ano);
    int getAnioLanzamiento() const;
    void setDuracion(int dura);
    int getDuracion() const;

    virtual void muestraDatos() const = 0; // Clase abstracta
    
    int operator*() const { return calificacion * 2; }

protected:
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;
};

#endif