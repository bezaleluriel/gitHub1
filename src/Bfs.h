#ifndef EX1_BFS_H
#define EX1_BFS_H

#include "Point.h"
#include "Grid.h"
#include <queue>
#include <vector>

/**
 * this class is the holder of the bfs algorithm. it receives a start and end point and a data structure and
 * it has a function that can calculate the shortest way between two points on the data structure.
 */

class Bfs {

private:
    Point start;
    Point end;
    Structure* structure;
    std::vector<Point> vec;

public:
    /**
     * default constructor.
     * @return void.
     */
    Bfs ();

    /**
     * constructor.
     * @param start is the starting point.
     * @param end is the end point.
     * @param grid is the data structure.
     * @return void.
     */
    Bfs (Structure *structure );

    /**
     * setStart - set the start point.
     * @param start is the value we will give to start point.
     */
    void setStart(Point start);

    /**
     * getStart - returns the start point.
     * @return the start point.
     */
    Point getStart();

    /**
     * setEnd - set the end point.
     * @param end is the value we will give to end point.
     */
    void setEnd(Point end);

    /**
    * getEnd - returns the end point.
    * @return the end point.
    */
    Point getEnd();

    /**
     * flagStructureNode - marks a specific node contained by the data structure as visited.
     * @param p is the value of that specific point held by a node we want to mark as visited.
     */
    void flagStructureNode(Point p);

    /**
     * run - this is the function that activates the bfs function resulting by printing the shortest
     * path betweeb two points.
     */
    std::vector<Point> run();

    /**
     * setNeighbors - if a node has a neighbor that exists and was not visited it will push it in to the que,
     * mark it as visited and set itself as its father.
     * @param node is the node that will be checked for neighbors.
     * @param queueBfs is the queue of the algorithm where the nodes of the path pass.
     */
    void setNeighbors(GridNode *node, std::queue <GridNode* > &queueBfs);

};


#endif //EX1_BFS_H
