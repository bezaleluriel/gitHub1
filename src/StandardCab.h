#ifndef EX1_STANDARDCAB_H
#define EX1_STANDARDCAB_H

#include "Color.h"
#include "Manufacturer.h"
#include "BaseCab.h"
#include "GridNode.h"
#include "Structure.h"
/**
 * this class represents a Taxi cab. it is an base class because there are different types of taxis
 * in the mean time we have one derived class, luxury cab.
 */
class StandardCab :public BaseCab {
private:

public:
    /**
     * constructor.
     */
    StandardCab();
    /**
     * constructor.
     * @param cabId is the cab's id.
     * @param taxiType is a number representing the taxi type - 1 standard , 2- luxury.
     * @param manufacturer is a char representing the manufacturer of the car(will be made into enum).
     * @param color is a char representing the color of the car(will be made into enum).
     */
    StandardCab(int cabId, int taxiType, char manufacturer, char color, Structure* map);

    void move(Point p);
};


#endif //EX1_STANDARDCAB_H
