//
// Created by thelo on 014 14 mar. 2021.
//

#include "Pattern.h"

Pattern::Pattern() {
    this->high = 0;
    this->large = 0;
}

Pattern::Pattern(int large, int high) : large(large), high(high) {}

void Pattern::setSizePattern(int large, int high) {
    this->large = large;
    this->high = high;
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
    while (!isRegular(smaller))
        smaller--;
    return smaller;
}

bool Pattern::isRegular(int size) {
    double x = ((double)size+2)/3;
    return (floor(x) == x);
}


