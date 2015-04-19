/* 
 * File:   Regatta.h
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:08
 */

#ifndef REGATTA_H
#define	REGATTA_H

class Regatta {
    std::string name;
    std::tm date;
    std::list<Participant> participants;
    std::list<Step> steps;
    int * classement;
public :
    Regatta(std::string, std::tm, int*);
    Regatta(std::string, std::tm, int*, std::list<Step>);
    Regatta(std::string, std::tm, int*, std::list<Participant>);
    Regatta(std::string, std::tm, int*, std::list<Participant>, std::list<Step>);
    ~Regatta();
    
    Participant& getParticipants(std::string);
    Participant& getParticipants(int);
    
    void addPaticipant(const Participant &);
    void removePaticipant(const Participant &);
    void addStep(const Step &);
    void removeStep(const Step &);
    void displayStepClassement();
    void displayStepClassement(const Step &);
    
    bool operator==(const Regatta& );
    bool operator!=(const Regatta& );
};

#endif	/* REGATTA_H */