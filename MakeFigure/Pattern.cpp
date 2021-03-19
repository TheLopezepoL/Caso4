//
// Created by thelo on 014 14 mar. 2021.
//

#include "Pattern.h"

double MAXBALLSIZE = 10;

Pattern::Pattern() {
    this->high = 0;
    this->large = 0;
    this->minSizeBall = 0;
    this->currentSize = 0;
}

Pattern::Pattern(int large, int high) {
    this->large = large;
    this->high = high;
    //MAXBALLSIZE = large/2;
    this->currentSize = getBiggerPattern();
}

/*void Pattern::setSizePattern(int pLarge, int pHigh) {
    this->large = pLarge;
    this->high = pHigh;
    this->currentSize = getBiggerPattern();
}*/

int Pattern::getLarge() const {
    return large;
}

int Pattern::getHigh() const {
    return high;
}

int Pattern::getBiggerPattern() {
    int smaller = min(large, high);
    if (smaller > 0) {
        while (!isWholeNumber(smaller))
            smaller--;
        this->minSizeBall = MAXBALLSIZE / (round((double) smaller / 2));
        return smaller;
    } else {
        this->minSizeBall = MAXBALLSIZE;
        return 0;
    }
}

bool Pattern::isWholeNumber(int pSize) {
    double x = ((double) pSize + 2) / 3;
    return (floor(x) == x);
}

double Pattern::getSizeBall(int pCurrentHigh, int pCurrentLarge) const {
    double distance = getDistance(pCurrentHigh) + getDistance(pCurrentLarge) - floor((currentSize - 1) / 6);
    return (MAXBALLSIZE - (minSizeBall * distance));
}

double Pattern::getDistance(int pPos) const {
    double center = ((double) currentSize - 1) / 2;
    return floor(abs(center - (double)pPos));
}

double** Pattern::getPattern() const {
    double **array;
    array = new double *[high]; // --> 2
    // --> 1
    for (int h = 0; h < high; h++) { // --> 3  --> 4 --> 17(n+n)
        array[h] = new double[large]; // --> 1
        for (int l = 0; l < large; l++) { // --> 4 --> 13
            if (h <= currentSize || l <= currentSize) { // --> 5 --> 9
                array[h][l] = getSizeBall(h, l); // -->4
            } else
                array[h][l] = -1.0;
        }
    }
    return array; //--> 1
}
//f(n) = 17(2n) + 3
//f(n) = 34n + 3 

void Pattern::generatorJson(Pattern *pPattern){
	double **array = pPattern->getPattern();
	ofstream file;
  	file.open("data.json");
  	file << "{\n";
  	file << "\t\"High\": " << high << ",\n";
  	file << "\t\"Large\": " << large << ",\n";
  	file << "\t\"points\": [ \n" ;
  	
  	for (int h = 0; h < pPattern->getHigh(); h++){
        for (int l = 0; l < pPattern->getLarge(); l++){
        	
        	file << "[ " << h << "," << l << "," << array[h][l] << "] " ;
        	//printf("[%d, %d, %f]\t", h, l, array[h][l]);
        	if(l != pPattern->getLarge() - 1 or h != pPattern->getHigh()-1 ){

        	    file << ", \n";

			}

		}


    }
  	file << "] \n" ;
  	file << "}";
  	file.close();
  	
  	cout << "Archivo JSON listo." << endl;
}

