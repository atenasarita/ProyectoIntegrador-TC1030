/********************
Atenas Lucía Arita 
A00838500
*********************/

#include "Serie.h"
#include <sstream> // Asegúrate de incluir <sstream>
#include <iostream>
using namespace std;

// Constructores
Serie :: Serie(){}

Serie :: Serie(string _nombre, string _rating, string _genero, const vector<Episodio>& _episodios){
    nombre = _nombre;
    rating = _rating;
    genero = _genero;
    episodios = _episodios;
}

// Setters y getters
vector<Episodio> Serie::getEpisodios() {
    return episodios;
}

void Serie::setEpisodios(const vector<Episodio>& _episodios) {
    episodios = _episodios;
}

// Muestra información
string Serie::str() {
    stringstream info;
    info << "Nombre de la Serie: " << nombre << "\nRating: " << rating << "\nGénero: " << genero << "\nTe recomendamos los siguientes episodios:\n";
    for (const auto& episodio : episodios) {
        info << episodio.str() << "\n";
    }
    return info.str();
}
