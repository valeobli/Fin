#include "Serie.hpp"

Serie::Serie(string nom, string gene, int cali, int ano, int dura, int episodios)
    : Video(nom, gene, cali, ano, dura), cantEpisodios(episodios) {}

void Serie::setCantEpisodios(int episodios) { cantEpisodios = episodios; }

int Serie::getCantEpisodios() const { return cantEpisodios; }

void Serie::muestraDatos() const {
    cout << "\n[Serie]" << endl;
    cout << "Nombre: " << nombreVideo << endl;
    cout << "Género: " << genero << endl;
    cout << "Año de lanzamiento: " << anioLanzamiento << endl;
    cout << "Duración promedio: " << duracion << " min" << endl;
    cout << "Calificación: " << calificacion << "/10" << endl;
    cout << "Cantidad de episodios: " << cantEpisodios << endl;
}