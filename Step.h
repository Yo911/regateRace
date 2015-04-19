/* 
 * File:   Step.h
 * Author: Yehouda
 *
 * Created on 19 avril 2015, 13:09
 */

#ifndef STEP_H
#define	STEP_H

class Step {
    int id;
    int length;
    int *classement;
    tm time;
public:
    Step(int, int, int*, tm);
    ~Step();
    int * getClassement();
};

#endif	/* STEP_H */

