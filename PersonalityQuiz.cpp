#include "PersonalityQuiz.h"
#include <iostream>
#include <fstream>
using namespace std;

int calcularResultado(int respuestas[]) {
    int resultado = 0;
    int maxConteo = 0;
    int conteo[5] = {0}; // cuenta las respuestas dadas

    // cuantas veces contesto cada opcion? 
    for (int i = 0; i < 4; ++i) {
        conteo[respuestas[i] - 1]++;
    }

    // encuentra cual opcion escogio mas veces
    for (int i = 0; i < 5; ++i) {
        if (conteo[i] > maxConteo) {
            maxConteo = conteo[i];
            resultado = i + 1; // el resultado es el índice + 1
        }
    }

    return resultado;
}

string obtenerDescripcion(int resultado) {
    string descripcion;
    ifstream archivo("quiz.txt");
    if (archivo.is_open()) {
        for (int i = 0; i < resultado; ++i) {
            getline(archivo, descripcion); // resultado 1 linea 1, resultado 2 linea 2, etc. 
        }
        archivo.close();
    }
    return descripcion;
}

int personalityQuiz() {
    // preguntas para el quiz
    string preguntas[] = {
        "¿Con qué nieto de Encanto te identificas?\n1. No he visto Encanto\n2. Luisa\n3. Mirabel\n4. Camilo\n5. Isabela",
        "¿Quieres pensar en esta película al terminarla o solo pasar el rato?\n1. Quiero que me haga reflexionar y pensar en la vida.\n2. Me gustaría que me deje con algo en qué pensar, pero no es esencial.\n3. Estoy bien con cualquier resultado, reflexionar o solo entretenerme.\n4. Prefiero solo pasar el rato y no pensar demasiado.\n5. Solo quiero distraerme y desconectar por completo.",
        "¿En una escala del 1 al 5, que tan miedoso eres?\n1 - No me asusto fácilmente.\n2 - Pocas cosas me dan miedo.\n3 - Depende de la situación.\n4 - Soy bastante miedoso(a).\n5 - Me asusto con mucha facilidad.",
        "¿En una escala del 1 al 5, que tan romántico eres?\n1 - No soy nada romántico(a).\n2 - No soy muy romántico(a), pero hago algunos gestos.\n3 - Soy moderadamente romántico(a).\n4 - Soy bastante romántico(a) y me gusta hacer gestos especiales.\n5 - Soy extremadamente romántico(a) y disfruto de los grandes gestos románticos."
    };

    // almacena las respuestas para las 5 preguntas
    int respuestas[4];

    // muestra las preguntas y prompt para las respuestas
    for (int i = 0; i < 4; ++i) {
        cout << preguntas[i] << endl; // muestra la pregunta i
        cin >> respuestas[i]; // guarda la respuesta i
    }

    // calcular el resultado
    int resultado = calcularResultado(respuestas);

    return resultado;
}
