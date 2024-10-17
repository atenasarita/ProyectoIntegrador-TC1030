/********************
Atenas Lucía Arita 
A00838500
*********************/

#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
using namespace std;

class Episodio {
protected:
    float runningTime;
    string nombreEp;
    string fecha;

public:
    Episodio();
    Episodio(float, string, string);

    float getrunningTime();
    string getnombreEp();
    string getFecha();

    void setrunningTime(float);
    void setnombreEp(string);
    void setFecha(string);

    string str() const;
};

#endif
