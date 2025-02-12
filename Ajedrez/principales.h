<<<<<<< HEAD
#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include "definiciones.h"
#include "auxiliares.h"

bool posicionValida(pair<tablero, int> const &p);
bool posicionInicial(posicion const &p);
vector<coordenada> casillasAtacadas(posicion const &p, int j);
bool posicionSiguienteCorrecta(posicion const &p1, posicion const &p2, coordenada o, coordenada d);
void ordenarTablero(posicion &p);
bool finDeLaPartida(posicion const &p, int &j);
bool hayJaqueDescubierto(posicion const &p);
void ejecutarSecuenciaForzada(posicion &p, secuencia s);
int seVieneElJaqueEn(posicion const &p);

#endif //
=======
#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include "definiciones.h"
#include "auxiliares.h"

bool posicionValida(pair<tablero, int> const &p);
bool posicionInicial(posicion const &p);
vector<coordenada> casillasAtacadas(posicion const &p, int j);
bool posicionSiguienteCorrecta(posicion const &p1, posicion const &p2, coordenada o, coordenada d);
void ordenarTablero(posicion &p);
bool finDeLaPartida(posicion const &p, int &j);
bool hayJaqueDescubierto(posicion const &p);
void ejecutarSecuenciaForzada(posicion &p, secuencia s);
int seVieneElJaqueEn(posicion const &p);

#endif //
>>>>>>> aeec9c0a972807c774581558be61f93ba49ddadc
