/****
 * Atenas Lucia Arita 
 * A00838500
***/

#include "Media.h"
#include <iostream>
using namespace std;

// constructores 
Media :: Media(){
    nombre = "N/A";
    rating = "Unrated";
    genero = "N/A";
}
    
Media :: Media(string _nombre, string _rating, string _genero){
    nombre = _nombre;
    rating = _rating;
    genero = _genero;
}

// setters y getters 
string Media :: getNombre() {
    return nombre;
}

string Media :: getRating() {
    return rating;
}

string Media :: getGenero() {
    return genero;
}

void Media :: setNombre(string _nombre) {
    nombre = _nombre;
}

void Media :: setRating(string _rating) {
    rating = _rating;
}

void Media :: setGenero(string _genero) {
    genero = _genero;
}

//no tiene el metodo str pq es abstracto
