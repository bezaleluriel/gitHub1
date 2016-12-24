#ifndef EX1_STRUCTURE_H
#define EX1_STRUCTURE_H
#include "Point.h"
#include "GridNode.h"

/**
 * this is an abstract class that will be inherited by other classes
 * that will contain data in different forms e.g grid/tree etc'.
 */

class Structure {
public:
    virtual void createNodes()=0;
    virtual void flagNode(Point p)=0;
    virtual GridNode* getNode (Point p)=0;
    virtual void markObstacle(Point p)=0;
};


#endif //EX1_STRUCTURE_H
