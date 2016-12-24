#ifndef EX1_GPS_H
#define EX1_GPS_H

#include "Bfs.h"
#include <list>
#include <stack>

/**
 * this class is a gps. meaning it uses the bfs algorithm to find the shortest way between two points.
 */

class Gps {
private:
    Bfs bfs;//will be initialized in constructor.
    Structure* map;
    Point source;
    Point destination;
    std::stack<Point> gpsStack;

public:
    Gps();

    /**
     * constructor.initializes the grid map and bfs.
     */
    Gps(Structure* map);

    /**
     * will use bfs to find shortest route between 2 points.
     * @param start is the start point.
     * @param end is the end point.
     * @return a stack with the route. start point
     */
    std::stack<Point> findeShortersRoute(Point start, Point end);

};

#endif //EX1_GPS_H
