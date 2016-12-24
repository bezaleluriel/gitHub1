#ifndef EX1_PASSENGER_H
#define EX1_PASSENGER_H

#include "Point.h"
#include "GridNode.h"

/**
 * this class represents a passenger riding a taxi.
 */

class Passenger {

private:
    GridNode* Location;
    Point source;
    Point destination;

public:

    /**
     * constructor
     */
    Passenger();

    /**
     * constructor.
     * @param source is the starting point.
     * @param destination is the ending point.
     */
    Passenger(Point source, Point destination);

    /**
     * this function produces a random rating score and returns it.
     * @return a random rating score.
     */
    int produceRandomRatingScore ();

    /**
     * returns the source point of the passenger's trip.
     * @return the source point of the passenger's trip.
     */
    Point getSource();

    /**
     * sets the source point to the passenger's trip.
     * @param source is the point we will set as the source point to the passenger's trip.
     */
    void setSource(Point source);

    /**
     * returns the destination point to the passenger's trip.
     * @return
     */
    Point getDestination();

    /**
     * sets the destination point for the paseenger's trip.
     * @param destination is the point we will set as the destination point for the paseenger's trip.
     */
    void setDestination(Point destination);

};


#endif //EX1_PASSENGER_H
