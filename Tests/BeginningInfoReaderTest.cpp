#include <gtest/gtest.h>
//#include <gmock/gmock.h>

#include "../src/BeginningInfoReader.h"

//using testing::Eq;
class BeginningInfoReaderTest : public ::testing::Test {

protected:
    BeginningInfoReader beginningInfoReader;
    std::string s;  

    virtual void SetUp() {
        std::cout << "Set up" << std::endl;
        s = "9,7,0,2,5,6";
    }

    virtual void TearDown() {
        std::cout << "Tear down" << std::endl;
    }
};

/**
 * checks the readTest func that receives  string and saves it in an array
 * and in every cell there is a different number.
 * [0] - size x of map.
 * [1]- size y of map.
 * [2]- x value of start point.
 * [3]- y value of start point.
 * [4]- x value of end point.
 * [5]- y value of end point.
 */
TEST_F(BeginningInfoReaderTest,readTest){
    EXPECT_TRUE((beginningInfoReader.split(s))[0] == "9" );
    EXPECT_TRUE(beginningInfoReader.split(s)[1] == "7" );
    EXPECT_TRUE(beginningInfoReader.split(s)[2] == "0" );
    EXPECT_TRUE(beginningInfoReader.split(s)[3] == "2" );
    EXPECT_TRUE(beginningInfoReader.split(s)[4] == "5" );
    EXPECT_TRUE(beginningInfoReader.split(s)[5] == "6" );
}