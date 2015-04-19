/* 
 * File:   Boat.h
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:08
 */

#ifndef BOAT_H
#define	BOAT_H

class Boat {
    int length;
    int weight;
    float coeff;
    ~Boat();
    void calculCoeff();
public:
    Boat(int, int);
    float getCoeff();
};

#endif	/* BOAT_H */

