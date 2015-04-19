/* 
 * File:   User.h
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:08
 */

#include "Regatta.h"
#include "Participant.h"

#ifndef USER_H
#define	USER_H

class User {
    std::list<Regatta> regattas;
    std::list<Participant> participants;
public :
    User();
    void registerParticipant(const Participant &);
    void createRegatta(const std::string _name, const tm _date);
    void removeRegatta(const Regatta &);
    void displayClassement(const Regatta &);
};

#endif	/* USER_H */

