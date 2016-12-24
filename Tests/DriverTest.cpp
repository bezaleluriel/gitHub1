#include <gtest/gtest.h>
//#include <gmock/gmock.h>
#include "../src/Driver.h"
//using testing::Eq;

class DriverTest : public ::testing::Test {

protected:
    Driver driver;
    int yearsOfExperience;
    int id;
    int age;

    virtual void SetUp() {
        std::cout << "Set up" << std::endl;
        yearsOfExperience = 15;
        id = 304836479;
        age = 42;
        driver = Driver(id, age, 'M' , 5, yearsOfExperience);
    }

    virtual void TearDown() {
        std::cout << "Tear down" << std::endl;
    }

public:
};

/**
 * this is a test to check that an age that is set is actually set
 */
TEST_F(DriverTest, setAverageSatisfaction){
    driver.setAge(45);
    EXPECT_EQ(driver.getAge(), 45);
}

/**
 *this test checks the getIsAvailable func and make sure
 * that it changes the bool state from false to true.
 */
TEST_F(DriverTest, setIsAvailable){
    driver.setAvailable(true);
    EXPECT_TRUE(driver.getAvailable());
}

/**
 * this test the setMaritalStatusTest func. this func has a set because a marital status can change.
 */
TEST_F(DriverTest, setMaritalStatusTest){
    driver.setMaritalStatus((MaritalStatus) 'M');
     EXPECT_EQ(driver.getMaritalStatus(), (MaritalStatus)'M');
}




