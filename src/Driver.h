#ifndef EX1_DRIVER_H
#define EX1_DRIVER_H

#include <queue>
#include "MaritalStatus.h"
#include "GridNode.h"
#include "BaseCab.h"
#include "TripInformation.h"
#include <iostream>


/**
 * this class represents a driver.
 */

class Driver {

private:
    int id;
    int age;
    int yearsOfExperience;
    int numberOfCustomers;
    double averageSatisfaction;
    bool available;
    BaseCab* taxiCab;
    MaritalStatus maritalStatus;
    int vehicleId;
    TripInformation* tripInformation;

public:
    /**
     * constructor.
     */
    Driver();

    /**
     * constructor.
     * @param id is the id of the driver.
     * @param age is the age of the driver.
     * @param maritalStatus is the marital status of the driver.
     * @param yearsOfExperience is the years of experience that the driver has.
     */
    Driver(int driverId, int age, char status, int experience, int vehicleId);

    /**
     * returns the id of the driver.const because a person's id does not change.
     * @return drivers id.
     */
    int getId();

    /**
     * returns the age of the driver.
     * @return the age of driver.
     */
    int getAge();

    /**
     * set the age of the driver in case he growd up.
     * @param age is the new age of the driver.
     */
    void setAge(int age);

    /**
     * get the years of experience that the driver has.
     * @return the years of experience that the driver has.
     */
    int getYearsOfExperience();

    /**
     * sets the years of rxperience that the driver has.
     * @param yearsOfExperience is the new value for the drivers years of experience.
     */
    void setYearsOfExperience(int yearsOfExperience);

    /**
     * returns the drivers average satiscaftion given by customers.
     * @return the average satisfaction average for this driver.
     */
    double getAverageSatisfaction();

    /**
     * sets the average satisfaction for this driver.
     * @param averageSatisfaction is the new value for the driver's average satisfaction.
     */
    void setAverageSatisfaction(double averageSatisfaction);

    /**
     * sets the vehicle id.
     * @param id is the vehicle's id.
     */
    void setVehicleId(int id);

    /**
     * returns the vehicle's id.
     * @return the vehicle's id.
     */
    int getVehicleId();

    /**
     * checks if the driver is available.
     * @return true if heis available and false otherwise.
     */
    bool getAvailable();

    /**
     * changes the availability status of the driver.
     * @param b is a boolean. true if he is available false otherwise.
     */
    void setAvailable(bool b);

    /**
     * returns the taxiCab
     * @return the taxiCab
     */
    BaseCab* getTaxiCab();

    /**
     * sets the taxi cab that the driver is driving.
     * @param taxiCab is the taxicab that the driver is driving.
     */
    void setTaxiCab(BaseCab *taxiCab);

    /**
     * returns the martial status of the driver.
     * @return the martial status of the driver(enum).
     */
    MaritalStatus getMaritalStatus();

    /**
     * sets the martial status of the driver.
     * @param maritalStatus is the new martial status of the driver(enum).
     */

    void setMaritalStatus(MaritalStatus maritalStatus);

    /**
     * returns the number of Customers that this driver had inhis career.
     * @return the number of Customers this driver had in his career.
     */
    int getNumberOfCustomers();

    /**
     * sets the numbers of Customers this driver had in his career.
     * @param numberOfPassengers is the new number of Customers this driver had in his career.
     */
    void setNumberOfCustomers(int numberOfCustomers);


    /**
     * returns the location of the taxi that the driver is driving.
     * @return the location of the taxi that the driver is driving.
     */
    GridNode* getLocation();

    /**
     * returns a pointer to the trip information of this driver.
     * @return a pointer to the trip information of this driver.
     */
    TripInformation *getTripInformation() ;

    /**
     * sets the pointer to the trip info of this ride.
     * @param tripInformation is the trip info of this ride.
     */
    void setTripInformation(TripInformation *tripInformation);

};


#endif //EX1_DRIVER_H
