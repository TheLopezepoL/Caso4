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
        this->minSizeBall = MAXBALLSIZE / round((double) smaller / 2);
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
    double distance = getDistance(pCurrentHigh) + getDistance(pCurrentLarge) - 1;
    return (MAXBALLSIZE - (minSizeBall * distance));
}

double Pattern::getDistance(int pPos) const {
    double center = ((double) currentSize - 1) / 2;
    return floor(abs(center - (double)pPos));
}

double** Pattern::getPattern() {
    int sideSize = (currentSize + 2) / 3;
    int whiteSpaces = (currentSize - sideSize) / 2;
    double middle = (currentSize - 1) / 2;
    double **array;
    array = new double *[high];
    for (int h = 0; h < high; h++) {
        array[h] = new double[large];
        for (int l = 0; l < large; l++) {
            if (h <= currentSize || l <= currentSize) {
                array[h][l] = getSizeBall(h, l);
            } else
                array[h][l] = -1.0;
        }
    }
    return array;
}

