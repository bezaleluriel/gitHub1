#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "../src/Point.h"
//using testing::Eq;

class PoinTest : public ::testing::Test {

protected:
    Point p1;
    Point p2;

    virtual void SetUp(){
        std::cout << "Set up" << std::endl;
        /*xExample = p1.getX();
        yExample = p2.getY();*/
    }

    virtual void TearDown(){
        std::cout << "Tear down" << std::endl;
    }
    public:
        //the constructor
        PoinTest() : p1(5,3) , p2(2,4) {}
    };

/**
 * checking that the point got its value.
 */
TEST_F(PoinTest, testPointX ){
    int x = 5;
    ASSERT_EQ(x,p1.getX());
}

/**
 * checkng that the point got its value.
 */
TEST_F(PoinTest, testPointY){
    int y = 4;
    ASSERT_EQ(y,p2.getY());
}

/**
 * checkong getter.
 */
TEST_F(PoinTest, TestPointXNE){
    int x = 7;
    ASSERT_NE(x,p2.getX());
}

/**
 * checking getter.
 */
TEST_F(PoinTest, TestPointYNE){
    int y = 7;
    ASSERT_NE(y,p2.getY());
}

/**
 * checking getter.
 */
TEST_F(PoinTest, testPoint12NE){
    ASSERT_NE(p1.getY(),p2.getY());
}

/**
 * checking getter.
 */
TEST_F(PoinTest, testPoint1SET){
    p1.setX(2);
    ASSERT_EQ(p1.getX(),p2.getX());
}
