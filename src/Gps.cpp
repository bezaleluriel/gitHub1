#include "Gps.h"
#include <stack>
#include <cmath>
#include "Grid.h"
#include "GridNode.h"
/**
 * constructor
 * @return
 */
Gps::Gps(){}
/**
 * constructor
 * @param map - our Structure*.
 * @return
 */
Gps::Gps(Structure *map) {
    Gps::map = map;
    bfs = Bfs(map);
}

std::stack<Point> Gps::findeShortersRoute(Point start, Point end) {
    bfs.setStart(start);
    bfs.setEnd(end);
    std::vector<Point> vec;
    vec = bfs.run();
    while(vec.size()) {
    gpsStack.push(vec.back());
    vec.pop_back();
    }
    return gpsStack;
}
