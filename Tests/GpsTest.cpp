#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "../src/Gps.h"

//using testing::Eq;
class GpsTest : public ::testing::Test {

protected:
    Grid grid;
    Grid grid1;
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    Point p5;
    Point p6;
    std::list <Point> pointList ;
    virtual void SetUp() {
        std::cout << "Set up" << std::endl;
        grid = Grid(10,10);
        grid1 = Grid(10,10);
        p1 = Point(0, 0);
        p2 = Point(4, 4);
        p3 = Point(2, 2);
        p4 = Point(8, 9);
        p5 = Point(4, 2);
        p6 = Point(9, 9);
    }

    virtual void TearDown() {
        std::cout << "Tear down" << std::endl;
    }
public:
};


/**
 * this tests the find shortest route function .
 * we give it 2 points that we know the shortest route between them and check to see that we actually
 * got the route that we were expecting.
 * we compare the route clalculated by the func (in the stack) with the points we know
 * we are supposed to get.
 */
TEST_F(GpsTest, useGpsToFindShorterRoot){
    Gps gps(&grid);
    std::stack<Point> stack1;
    stack1 = gps.findeShortersRoute(p1, p2);
    EXPECT_TRUE(stack1.top().compare(Point(0,0)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(0,1)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(0,2)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(0,3)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(0,4)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(1,4)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(2,4)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(3,4)));
    stack1.pop();
    EXPECT_TRUE(stack1.top().compare(Point(4,4)));
}