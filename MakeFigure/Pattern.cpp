//
// Created by thelo on 014 14 mar. 2021.
//

#include "Pattern.h"

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

void Pattern::setSizePattern(int large, int high) {
    this->large = large;
    this->high = high;
    this->currentSize = getBiggerPattern();
}

int Pattern::getLarge() const {
    return large;
}

int Pattern::getHigh() const {
    return high;
}

int Pattern::getBiggerPattern() {
    int smaller;
    if (large > high)
        smaller = high;
    else
        smaller = large;
    if (smaller > 0) {
        while (!isRegular(smaller))
            smaller--;
        this->minSizeBall = maxBallSize / round((double) smaller / 2);
        return smaller;
    } else {
        this->minSizeBall = maxBallSize;
        return 0;
    }
}

bool Pattern::isRegular(int pSize) {
    double x = ((double) pSize + 2) / 3;
    return (floor(x) == x);
}

double Pattern::getSizeBall(int pCurrentLarge, int pCurrentHigh) const {
    int maxDistance = max(getDistance(pCurrentHigh), getDistance(pCurrentLarge));
    return (maxBallSize - (minSizeBall * maxDistance));
}

int Pattern::getDistance(int pPos) const {
    long center = lround((double)currentSize / 2);
    if (pPos > center)
        return (pPos - center) + 2;
    else
        return (center - pPos);
}


