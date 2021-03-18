
#ifndef MAKEFIGURE_PATTERN_H
#define MAKEFIGURE_PATTERN_H

#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;

class Pattern{
private:
    int large;
    int high;
    double minSizeBall;
    int currentSize;

public:
    Pattern();
    Pattern(int large, int high);

    int getLarge() const;
    int getHigh() const;
    //void setSizePattern(int pLarge, int pHigh);

    double** getPattern() const;  // Devuelve un array 2D con los valores de tamanho de los circulos
    double getSizeBall(int pCurrentHigh, int pCurrentLarge) const;   // Devuelve el valor que deberia tener la pelota, recibe la posicion de la pelota.
    int getBiggerPattern(); // Devuelve el tamanho del octagono mas grande que puede hacer
    static bool isWholeNumber(int pSize); // Devuelve si el cuadrado puede tener un octagono regular
    double getDistance(int pPos) const;
	void generatorJson(Pattern *pPattern); //Genera un json para leerlo en javascript
};



#endif //MAKEFIGURE_PATTERN_H
