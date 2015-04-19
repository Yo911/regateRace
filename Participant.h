/* 
 * File:   Participant.h
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:08
 */

#ifndef PARTICIPANT_H
#define	PARTICIPANT_H

class Participant {
    unsigned int id;
    std::string name;
    Boat boat;
public :
    Participant(int, std::string, Boat);
    std::string getName();
    int getId();
    bool operator==(const Participant &);
};

#endif	/* PARTICIPANT_H */

