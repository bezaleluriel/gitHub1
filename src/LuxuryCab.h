#ifndef EX1_LUXURYCAB_H
#define EX1_LUXURYCAB_H
#include "BaseCab.h"

class LuxuryCab:public BaseCab     {
private:
    //inherited
public:

    /**
     * constructor.
     */
    LuxuryCab();

    /**
     * constructor.
     * @param cabId is the cab's id.
     * @param taxiType is a number representing the taxi type - 1 standard , 2- luxury.
     * @param manufacturer is a char representing the manufacturer of the car(will be made into enum).
     * @param color is a char representing the color of the car(will be made into enum).
     */
    LuxuryCab(int cabId, int taxiType, char manufacturer, char color, Structure* map);

    /**
     * this function overrides the base class standardcab's function because it moves twice as fast then
     * the standard cab.(moves 2 blocks with every movement), unless there is one block left to destination and then
     * it will move only one.
     */
    void move(Point p);

};


#endif //EX1_LUXURYCAB_H
