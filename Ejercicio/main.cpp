#include <iostream>
#include <list>
#include "Pelicula.hpp"
#include "Serie.hpp"
using namespace std;

void calificarVideo(list<Video*> videos) {
    string titulo;
    int nuevaCalificacion;
    cout << "Ingrese el título del video a calificar: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Ingrese la nueva calificación: ";
    cin >> nuevaCalificacion;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Intente de nuevo.\n";
        return;
    }
    for (auto video : videos) {
        if (video->getNombreVideo() == titulo) {
            video->setCalificacion(nuevaCalificacion);
            cout << "Calificación actualizada.\n";
            return;
        }
    }
    cout << "Video no encontrado.\n";
}

int main() {
    list<Video*> listaVideos;
    listaVideos.push_back(new Pelicula("Wicked", "Musical", 5, 2024, 125, 3));
    listaVideos.push_back(new Pelicula("El Rey León", "Aventura", 5, 1994, 88, 2));
    listaVideos.push_back(new Pelicula("La Monja", "Terror", 7, 2018, 96, 3));
    listaVideos.push_back(new Serie("Friends", "Comedia", 5, 1994, 22, 66));
    listaVideos.push_back(new Serie("Hora de Aventura", "Aventura", 5, 2010, 11, 11));
    
    int opcion;
    do {
        cout << "\n***** Menú Principal *****" << endl;
        cout << "1. Mostrar todos los videos" << endl;
        cout << "2. Calificar un video" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Intente de nuevo." << endl;
            continue;
        }
        switch (opcion) {
            case 1:
                for (const auto video : listaVideos) {
                    video->muestraDatos();
                }
                break;
            case 2:
                calificarVideo(listaVideos);
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);
    
    for (auto video : listaVideos) {
        delete video;
    }
    return 0;
}
