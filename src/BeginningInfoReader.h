#ifndef EX1_BEGINNINGINFOREADER_H
#define EX1_BEGINNINGINFOREADER_H
#include <iostream>
#include <vector>
#include "Point.h"

/**
 * this class reads the string symbolizing size start and end point and gives the different variables
 * their value.
 */

class BeginningInfoReader {

private:

public:
    /**
     * constructor.
     * @return void.
     */
    BeginningInfoReader();

    /**
     * receives a string that is the input that we get in the main from the user regarding adding of
     * a new driver, splits it into parts and returns it in a vector.
     * @param s is the string that is received as input from the user.
     * @return a vector containing the info split up to parts.
     */
    std::vector<std::string> split(std::string &s);

};


#endif //EX1_BEGINNINGINFOREADER_H
