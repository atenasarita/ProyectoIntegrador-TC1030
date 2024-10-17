#ifndef SERIE_H
#define SERIE_H

#include <iostream>
#include <vector>
#include "Episodio.h"
#include "Media.h"
using namespace std;

class Serie : public Media {
private:
    vector<Episodio> episodios;

public:
    Serie();
    Serie(string, string, string, const vector<Episodio>&);

    vector<Episodio> getEpisodios();
    void setEpisodios(const vector<Episodio>&);

    string str();
};

#endif // SERIE_H
