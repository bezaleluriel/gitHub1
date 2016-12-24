#include "Passenger.h"
Passenger::Passenger() {}

Passenger::Passenger(Point source, Point destination) {

}

int Passenger::produceRandomRatingScore() {
    int randomNum;
    randomNum = 1 + rand() %5;
    return randomNum;
}

Point Passenger::getSource() {
    return Point();
}

void Passenger::setSource(Point source) {

}

Point Passenger::getDestination() {
    return Point();
}

void Passenger::setDestination(Point destination) {

}
