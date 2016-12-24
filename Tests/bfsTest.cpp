#include <gtest/gtest.h>
#include <stack>
#include "../src/GridNode.h"
#include "../src/Bfs.h"
#include "../src/Grid.h"
#include "../src/Point.h"
#include "../src/Structure.h"
//using testing::Eq;
class BfsTest : public ::testing::Test {

protected:
    Point start;
    Point end;

    virtual void SetUp() {
        std::cout << "Set up" << std::endl;
        start = Point(0,0);
        end = Point(2,2);
    }

    virtual void TearDown() {
        std::cout << "Tear down" << std::endl;
    }
};

/*TEST_F(BfsTest, BfsTest_CheckBfsIsWorking_Test){
    bfs->run();
    Point p1 = Point(2, 2);
    //EXPECT_TRUE(p1.compare())
}*/

/**
 * this tests flagStructureNode func that flags a node as visited by setting its bool member visited as true.
 * in this test we flag a specific node as visited and then check if it was visited.
 */
TEST_F(BfsTest, flagStructureNode){
    Grid grid1(11,11);
    Point p1 = Point(1, 1);
    //Bfs bfs1(start,end,&grid1);
    Bfs bfs1(&grid1);
    bfs1.flagStructureNode(p1);
    EXPECT_TRUE(grid1.getNode(p1)->wasItVisited());
}

/**
 * in this test we check the set neighbors func that sets the neighbors for a specific node.
 * it checks for the root's neighbors and adds them to the queue.
 * left neighbor then upper then right then down.
 * we we entered the node with value (0,0) and we check that it doesnt have a left neighbor and that its neighbors
 * that were put in the queue are actualy the correct ones.
 */
TEST_F(BfsTest, setNeighborsCheck){
    Grid grid2(11,11);
    //Bfs bfs2(start,end,&grid2);
    Bfs bfs2(&grid2);
    GridNode* root = grid2.getNode(Point(0,0));
    std::queue <GridNode*> queue1;
    bfs2.setNeighbors(root, queue1);
    EXPECT_FALSE(grid2.getNode(Point(0, 0))->getLeftNeighbor());
    EXPECT_TRUE(queue1.front()->getPoint().compare(Point(0,1)));
    queue1.pop();
    EXPECT_TRUE(queue1.front()->getPoint().compare(Point(1,0)));

}

/**
 * check the run method, check that it returns the right routhe to the destination.
 */
TEST_F(BfsTest, checkRun){
    Grid grid3(5,5);
    //Bfs bfs2(Point(0,0),Point(4,4),&grid3);
    Bfs bfs2(&grid3);
    std::vector<Point> vec;
    bfs2.setStart(Point(0, 0));
    bfs2.setEnd(Point(4, 4));
    vec = bfs2.run();
    EXPECT_TRUE(vec.back().compare(Point(4,4)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(3,4)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(2,4)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(1,4)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(0,4)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(0,3)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(0,2)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(0,1)));
    vec.pop_back();

    EXPECT_TRUE(vec.back().compare(Point(0,0)));
    vec.pop_back();

}