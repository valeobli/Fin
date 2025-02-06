#include "Pelicula.hpp"

Pelicula::Pelicula(string nom, string gene, int cali, int ano, int dura, int nomi)
    : Video(nom, gene, cali, ano, dura), nominaciones(nomi) {}

void Pelicula::setNominaciones(int nomi) { nominaciones = nomi; }

int Pelicula::getNominaciones() const { return nominaciones; }

void Pelicula::muestraDatos() const {
    cout << "\n[Película]" << endl;
    cout << "Nombre: " << nombreVideo << endl;
    cout << "Género: " << genero << endl;
    cout << "Año de lanzamiento: " << anioLanzamiento << endl;
    cout << "Duración: " << duracion << " min" << endl;
    cout << "Calificación: " << calificacion << "/10" << endl;
    cout << "Nominaciones: " << nominaciones << endl;
}