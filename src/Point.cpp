#include "Point.h"


/**
 * this class is a basic point class containing an x and y value. it holds methods that help
 * it change it's values and return them and to compare itself to another point.
 */

/**
 * default constructor.
 * @return nothing.
 */
Point::Point(){};

/**
 * constructor.
 * @param x is the value of x for the point.
 * @param y is the value of x for the point.
 * @return nothing.
 */
Point::Point(int xValue,int yValue)
{
    x = xValue;
    y = yValue;
}

/**
 * getPoint - returns a copy of the point.
 * @return a copy of the point.
 */
Point Point::getPoint() {
    return Point(x,y);
}

/**
 * getX - returns the x value of the point.
 * @return int - the x value of the point.
 */
int Point::getX() {
    int xAxis=x;
    return xAxis;
}

/**
 * getY - returns the x value of the point.
 * @return int - the y value of the point.
 */
int Point::getY() {
    int yAxis = y;
    return yAxis;
}

/**
 * setX - sets the x value for the point.
 * @param x is the value to be set for x.
 */
void Point::setX(int xValue) {
    x = xValue;
}

/**
 * setY - sets the x value for the point.
 * @param y is the value to be set for y.
 */
void Point::setY(int yValue) {
    y = yValue;
}

/**
 * compare - compares x and y values with another point .
 * @param p is the point we are comparing to this one.
 * @return true if they have same x and y values and false otherwise.
 */
bool Point::compare(Point p){
    if (x == p.getX() && y == p.getY()){
        return true;
    }
    else{
        return false;
    }
}

/**
 * operator overloading -
 * when printing out a point the system will automatically print it this way.
 * @param out isthe order on left of   <<.
 * @param point is the point we will want to print.
 */
std::ostream&operator<<(std::ostream& out,Point& point){
    out << "(" << point.getX() << "," << point.getY() << ")";
}

bool Point::isExist(){
    if (x & y) {
        return true;
    } else
        return false;
}