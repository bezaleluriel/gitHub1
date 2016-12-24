#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "../src/Passenger.h"
//using testing::Eq;

class PassengerTest : public ::testing::Test {

protected:
    Passenger passenger;

    virtual void SetUp(){
        std::cout << "Set up" << std::endl;
        passenger = Passenger(Point(0,0),Point(9,9));
    }

    virtual void TearDown(){
        std::cout << "Tear down" << std::endl;
    }

public:
};

/**
 * checks creation of randome rating in range 1-5.
 */
TEST_F(PassengerTest, produceRandomRatingScoreTest){
    EXPECT_GT(passenger.produceRandomRatingScore(), 1);
    EXPECT_LT(passenger.produceRandomRatingScore(), 5);
}
