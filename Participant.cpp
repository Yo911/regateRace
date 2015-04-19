#include <stddef.h>
#include <iostream>
#include "Participant.h"

Participant::Participant(int _id,std::string _name, Boat _boat) {
    id = _id;
    name = _name;
    boat = _boat;
}

std::string Participant::getName() {
    return name;
}

int Participant::getId() {
    return name;
}

bool Participant::operator ==(const Participant& p) {
    return p.id == id;
}