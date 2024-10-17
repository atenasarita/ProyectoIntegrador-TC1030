/********************
Atenas Lucía Arita 
A00838500
*********************/

#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include "Media.h"

using namespace std;

class Pelicula : public Media{
    private:
        float runningTime;
        string fecha;
        
    public:
        Pelicula();
        Pelicula(string, string, string, float, string);
    

        float getrunningTime();
        string getFecha();
        

        void setrunningTime(float);
        void setFecha(string);
    
        string str() override;
};
#endif
