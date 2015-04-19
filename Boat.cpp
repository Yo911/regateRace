#include "Boat.h"

Boat::Boat(int _length, int _weight):length(_length),weight(_weight) {
    calculCoeff();
}

Boat::~Boat() {
    
}

void Boat::calculCoeff() {
    coeff = 1 + (length - 20) * 0.05;
}

float Boat::getCoeff() {
    return coeff;
}
