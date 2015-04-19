#include "Regatta.h"
#include "Step.h"
#include "Participant.h"

Regatta::Regatta(std::string _name, std::tm _date, int* _classement, std::list<Participant> _participants, std::list<Step> _steps) {
    name = _name;
    date = _date;
    classement = _classement
    participants = _participants;
    steps = _steps;
}

Regatta::Regatta(std::string _name, std::tm _date, int* _classement, std::list<Participant> _participants):Regatta(_name, _date, _classement, _participants, nullptr) {
    steps = new std::list<Step>();
}

Regatta::Regatta(std::string _name, std::tm _date, int* _classement, std::list<Step> _steps):Regatta(_name, _date, _classement, nullptr, _steps) {
    participants = new std::list<Participant>();
}

Regatta::Regatta(std::string _name, std::tm _date, int* _classement):Regatta(_name, _date, _classement, nullptr, nullptr) {
    participants = new std::list<Participant>();
    steps = new std::list<Step>();
}

Regatta::~Regatta() {
    delete[] classement;
}

Participant& Regatta::getParticipants(std::string _name) {
    for (std::list<Participant>::const_iterator iterator = participants.begin(), end = participants.end(); iterator != end; ++iterator) {
        if(iterator->getName() == _name)
            return p;
    }
    return nullptr;
}

Participant& Regatta::getParticipants(int _id) {
    for (std::list<Participant>::const_iterator iterator = participants.begin(), end = participants.end(); iterator != end; ++iterator) {
        if(iterator->getId() == _id)
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

void Regatta::displayStepClassement() {
    for( std::list<Step>::const_iterator it = steps.begin(), end = steps.end(); it != end ; ++it) {
        std::cout << std::endl;
        displayStepClassement(*it);
        std::cout << std::endl;
    }
}

void Regatta::displayStepClassement(const Step& s) {
    int * c = s.getClassement();
    for(int i = 0 ; i < participants.size() ; i++) {
        Participant &p = getParticipants(c[i]);
        std::cout << i + 1 << " : " << p.getName() << std::endl;
    }
}



void Regatta::removeStep(const Step& s) {
    steps.remove(s);
}

bool Regatta::operator==(const Regatta& r) {
    return name == r.name;
}

bool Regatta::operator!=(const Regatta& r) {
    return name != r.name;
}
