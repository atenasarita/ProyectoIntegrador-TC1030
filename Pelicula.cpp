/********************
Atenas Lucía Arita 
A00838500
*********************/
#include "Pelicula.h"
#include <iostream>
using namespace std;

// constructores
Pelicula :: Pelicula(){ //constructor default
    nombre = "Living";
    rating = "PG-13";
    genero = "Drama";
    runningTime = 1.000;
    fecha = "1/1/2000"; // usa el default en ReleaseDate
}

Pelicula :: Pelicula(string _nombre, string _rating, string _genero, float _runningTime, string _fecha){ 
    nombre = _nombre;
    rating = _rating;
    genero = _genero;
    runningTime = _runningTime;
    fecha = _fecha;
}
// setters y getters
float Pelicula :: getrunningTime()
{
    return runningTime;
}

string Pelicula :: getFecha(){
    return fecha;
}


void Pelicula :: setrunningTime(float _runningTime){
    runningTime = _runningTime;
}

void Pelicula :: setFecha(string _fecha){
    fecha = _fecha;
}

//muestra info de la pelicula 
string Pelicula::str() {
    return "Nombre: " + nombre + ", Rating: " + rating + ", Género: " + genero + ", Duracion: " + to_string(runningTime) + " minutos, Release Date: " + fecha;
}
