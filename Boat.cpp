#include "Boat.h"

Boat::Boat() {
    length = 20;
    weight = 20;
    coeff = 1;
}


Boat::Boat(int _length, int _weight):length(_length),weight(_weight) {
    calculCoeff();
}

void Boat::calculCoeff() {
    coeff = 1 + (length - 20) * 0.05;
}

float Boat::getCoeff() {
    return coeff;
}