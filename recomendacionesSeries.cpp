#include "recomendacionesSeries.h"
#include "Media.h" // Asegúrate de que Media.h incluya Serie.h
#include "Serie.h"
#include "Episodio.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void recomendacionesSeries(int resultado) {
    // Arreglo de videos
    Media* videos[2]; // arreglo para las 2 series que se van a recomendar

    ifstream archivo("series.txt"); // Abre el archivo de texto


    string nombreSerie, rating, genero, nombreEpisodio, fecha;
    float runningTime;
    string linea;
    int startLine = (resultado - 1) * 26; // Calcula la línea de inicio en base al resultado

    // Salta a la línea de inicio
    for (int i = 0; i < startLine; ++i) {
        getline(archivo, linea);
    }

    // Lee las series a partir de la línea de inicio
    for (int i = 0; i < 3; ++i) {
        getline(archivo, nombreSerie);
        getline(archivo, rating);
        getline(archivo, genero);

        vector<Episodio> episodios; // dentro de esta serie lee los episodios
        for (int j = 0; j < 3; ++j) {
            getline(archivo, nombreEpisodio); // string
            archivo >> runningTime; // float
            archivo.ignore(); // Ignora el salto de línea
            getline(archivo, fecha); // string

            episodios.push_back(Episodio(runningTime, nombreEpisodio, fecha)); // agrega episodio al vector
        }

        // Crear el objeto Serie con la nueva información
        videos[i] = new Serie(nombreSerie, rating, genero, episodios);

        // Leer línea en blanco después de cada serie
        getline(archivo, linea);
    }

    // Cierra el archivo
    archivo.close();

    // Muestra información
    for (int i = 0; i < 2; ++i) {
        cout << videos[i]->str() << endl << endl;
    }

    // Libera la memoria de los objetos creados dinámicamente
    for (int i = 0; i < 2; ++i) {
        delete videos[i];
    }
}
