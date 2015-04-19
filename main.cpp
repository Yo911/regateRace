/* 
 * File:   main.cpp
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:06
 */

#include <cstdlib>
#include <string>
#include <list>
#include <iostream>
#include <ctime>

#include "User.h"

using namespace std;

tm timeNow();

int main(int argc, char** argv) {
    User usr();
    Regatta r = usr.createRegatta("first regatta", timeNow());
    r.addPaticipant(Participant(10, "Jhon", Boat(21, 21)));
    r.addPaticipant(Participant(20, "Doe", Boat(19, 19)));
    cout << r.getParticipants(20).getName() << endl;
    return 0;
}

tm timeNow() {
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
//    cout << (now->tm_year + 1900) << '-' 
//         << (now->tm_mon + 1) << '-'
//         <<  now->tm_mday
//         << endl;
    return tm;
}