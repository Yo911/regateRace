#include "Step.h"

Step::Step(int _id, int _length, int * _classement, tm _time) {
    id = _id;
    length = _length;
    classement = _classement;
    time = _time;
}

Step::~Step() {
    delete[] classement;
}

int* Step::getClassement() {
    return classement;
}

