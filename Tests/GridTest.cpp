#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "../src/GridNode.h"
#include "../src/Grid.h"
#include "../src/Point.h"

#define Height 11
#define Width 11

//using testing::Eq;
class GridTest : public ::testing::Test {

protected:
    Grid grid;

    virtual void SetUp(){
        std::cout << "Set up" << std::endl;
        grid = Grid(11, 11);
    }
    virtual void TearDown() {
    }
};

/**
 * when a grid is initialized it calls createnodes.
 * we are checking that all nodes in grid exist and have the correct point value in them.
 */
TEST_F(GridTest, createNodesTest){
    for(int i=0; i<grid.getX(); i++){
        for(int j=0; j<grid.getY(); j++){
            EXPECT_TRUE(grid.getNode(Point(i,j))->getPoint().compare(Point(i,j)));
            }
        }
    }

/**
 * checking that the y value of the grid size is correct.
 */
TEST_F(GridTest, GridTest_CheckTheHeightOfTheGrid_Test){
    std::cout << "GridTest_CheckTheHeightOfTheGrid_Test" << std::endl;
    EXPECT_EQ(grid.getY(), Height);
}

/**
 * checking that the x value of the grid size is correct.
 */
TEST_F(GridTest, GridTest_CheckTheWidthOfTheGrid_Test){
    std::cout << "GridTest_CheckTheWidthOfTheGrid_Test" << std::endl;
    EXPECT_EQ(grid.getX(), Width);
}

/**
 * check that a point is marked as visited when received through different functions.
 */
TEST_F(GridTest,GridTest_FlagNode_Test ){
    Point p1 = grid.getNode(Point(2, 2))->getPoint();
    grid.flagNode(p1);
    EXPECT_TRUE(grid.getNode(p1)->wasItVisited());
}

/**
 * check that a point that is created actually exists.
 */
TEST_F(GridTest, getNodeTest){
    Point p2 = grid.getNode(Point(3, 3))->getPoint();
    EXPECT_TRUE(p2.isExist());
}
/**
 * check that a point that is marked as an obstacle thrrough different functions
 * actually is obstacle.
 */
TEST_F(GridTest,GridTest_FlagObstacle_Test ){
    Point p1 = grid.getNode(Point(2, 2))->getPoint();
    grid.flagNode(p1);
    EXPECT_TRUE(grid.getNode(p1)->wasItVisited());
}
