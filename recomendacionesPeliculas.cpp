#include "recomendacionesPeliculas.h"
#include "Media.h"// Asegúrate de que Media.h incluya Pelicula.h
#include "Pelicula.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void recomendacionesPeliculas(int resultado) { // resultado se refiere al resultado del quiz
    // Arreglo de videos
    Media* videos[3]; // arreglo para las 2 películas que se van a recomendar y la serie

    ifstream archivo("peliculas.txt"); // Abre el archivo de texto

    string nombre, rating, genero, fecha;
    float runningTime;
    string linea;
    int startLine = (resultado - 1) * 10; // calcula la línea de inicio en base al resultado
    // multiplica *10 para saltarse 10 líneas de atributos

    // Salta a la línea de inicio
    for (int i = 0; i < startLine; ++i) {
        getline(archivo, linea);
    }

    // lee las dos películas a partir de la línea de inicio
    for (int i = 0; i <= 2; ++i) {
        getline(archivo, nombre);
        getline(archivo, rating);
        getline(archivo, genero);
        archivo >> runningTime;
        archivo.ignore(); // ignora el enter
        getline(archivo, fecha);

        // nuevo objeto con la nueva información
        videos[i] = new Pelicula(nombre, rating, genero, runningTime, fecha);
    }

    // Cierra el archivo
    archivo.close();

    // muestra información
    for (int i = 0; i < 2; i++) {
        Media* current = videos[i];
        cout << current->str() << endl << endl;
    }

    // Libera la memoria de los objetos creados dinámicamente
    for (int i = 0; i < 3; i++) {
        delete videos[i];
    }
}
