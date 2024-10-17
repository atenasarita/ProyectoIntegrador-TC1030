/****
 * Atenas Lucia Arita 
 * A00838500
***/

#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media {
protected:
    string nombre;
    string rating;
    string genero;

public:
    Media();
    Media(string, string, string);

    string getNombre();
    string getRating();
    string getGenero();

    void setNombre(string);
    void setRating(string);
    void setGenero(string);

    virtual string str() = 0; // pure virtual 
    //virtual ~Media() {} // destructor virtual (?)
};

#endif
