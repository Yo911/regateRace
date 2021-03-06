#include <list>

#include "User.h"


User::User() {
    regattas = new std::list<Regatta>();
    participants = new std::list<Participant>();
}

void User::registerParticipant(const Participant& p) {
    participants.push_back(p);
}

Regatta& User::createRegatta(const std::string _name, const tm _date) {
    Regatta r(_name, _date);
    regattas.push_back(r);
    return r;
}

void User::removeRegatta(const Regatta& r) {
    regattas.remove(r);
}

void User::displayClassement(const Regatta& r) {
    
}

