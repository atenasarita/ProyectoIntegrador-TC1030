/****
 * Atenas Lucia Arita 
 * A00838500
***/

#include <iostream>
#include <fstream>
#include <sstream>
#include "Episodio.h"
#include "Serie.h"
#include "Pelicula.h"
#include "PersonalityQuiz.h" 
#include "recomendacionesPeliculas.h"
#include "recomendacionesSeries.h"
using namespace std;

int main() {
    int seleccion = 0;
    int calificacion;
    
    int resultado = personalityQuiz(); // opción más seleccionada
    string descripcion = obtenerDescripcion(resultado); // muestra "theme"               // aqui abajo se muestran las opciones
    cout << endl << "Basado en tus respuestas, aqui tienes tus resultados:\n" << descripcion << endl << "\n¿Qué buscas ver? \n1-Peliculas\n2-Series\n3-Quiero ver recomendaciones para ambas\nPresiona cualquier otra tecla para salir\n>>"; 
    cin >> seleccion;
    
    if (seleccion == 1) {
        cout << "\nAquí tienes recomendaciones para peliculas:\n";
        recomendacionesPeliculas(resultado);
    } else if (seleccion == 2) {
        cout << "\nAquí tienes recomendaciones para series:\n";
        recomendacionesSeries(resultado);
    } else if (seleccion == 3) {
        cout << "\nAquí tienes recomendaciones para peliculas:\n" << endl;
        recomendacionesPeliculas(resultado);
        cout << "\nAquí tienes recomendaciones para series:\n" << endl;
        recomendacionesSeries(resultado);
    } else {
        return 1;
    }
    
    // seccion para calificar el servicio
    // pedir al usuario una calificación
    cout << "Califica la precisión de las recomendaciones (1-10): ";
    cin >> calificacion;

    // append la nueva calificacion
    ofstream("calificaciones.txt", ios::app) << calificacion << endl;

    // leer del archivo linea por linea y mostrar las calificaciones anteriores
    ifstream MyReadFile("calificaciones.txt");
    cout << "Estas son las calificaciones que ha recibido el servicio\n";

    string calificaciones;
    while (getline(MyReadFile, calificaciones)) {
        cout << calificaciones << endl;
    }
    
    return 0;
}
