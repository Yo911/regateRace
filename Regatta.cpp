#include <list>

#include "Regatta.h"

Regatta::Regatta(std::string _name, std::tm _date, std::list<Participant> _participants, std::list<Step> _steps) {
    name = _name;
    date = _date;
    participants = _participants;
    steps = _steps;
}

Regatta::Regatta(std::string _name, std::tm _date, std::list<Participant> _participants):Regatta(_name, _date, _participants, nullptr) {
    steps = new std::list<Step>();
}

Regatta::Regatta(std::string _name, std::tm _date, std::list<Step> _steps):Regatta(_name, _date, nullptr, _steps) {
    participants = new std::list<Participant>();
}

Regatta::Regatta(std::string _name, std::tm _date):Regatta(_name, _date, nullptr, nullptr) {
    participants = new std::list<Participant>();
    steps = new std::list<Step>();
}

Participant& Regatta::getParticipants(std::string _name) {
    for (std::list<Participant>::const_iterator iterator = participants.begin(), end = participants.end(); iterator != end; ++iterator) {
        Participant &p = *iterator;
        if(p.getName() == _name)
            return p;
    }
    return nullptr;
}

Participant& Regatta::getParticipants(int _id) {
    for (std::list<Participant>::const_iterator iterator = participants.begin(), end = participants.end(); iterator != end; ++iterator) {
        Participant &p = *iterator;
        if(p.getId() == _id)
            return p;
    }
    return nullptr;
}

void Regatta::addPaticipant(const Participant& p) {
    participants.push_back(p);
}

void Regatta::removePaticipant(const Participant& p) {
    participants.remove(p);
}

void Regatta::addStep(const Step& s) {
    steps.push_back(s);
}

void Regatta::removeStep(const Step& s) {
    steps.remove(s);
}
