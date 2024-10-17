/********************
Atenas Lucía Arita 
A00838500
*********************/

#include "Episodio.h"
#include <iostream>
using namespace std;

// constructores
Episodio :: Episodio(){ //constructor default
    runningTime = 1.000;
    nombreEp = "Pilot";
    fecha = "1/1/2000"; // usa el default en ReleaseDate
}

Episodio :: Episodio(float _runningTime, string _nombreEp, string _fecha){ 
    runningTime = _runningTime;
    nombreEp = _nombreEp;
    fecha = _fecha;
}


// setters y getters
float Episodio :: getrunningTime()
{
    return runningTime;
}

string Episodio :: getnombreEp()
{
    return nombreEp;
}

string Episodio :: getFecha(){
    return fecha;
}

void Episodio :: setrunningTime(float _runningTime)
{
    runningTime = _runningTime;
}

void Episodio :: setnombreEp(string _nombreEp)
{
    nombreEp = _nombreEp;
}

void Episodio :: setFecha(string _fecha){
    fecha = _fecha;
}

//muestra el episodio 
string Episodio :: str() const {
    return "Nombre del Episodio: " + nombreEp + ", Duración: " + to_string(runningTime) + " minutos, Release Date: " + fecha;
}



