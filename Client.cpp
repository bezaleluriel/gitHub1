//
// Created by uriel on 01/01/17.
//

#include <iostream>
#include "src/Bfs.h"
#include "src/BeginningInfoReader.h"
#include "src/MainFlow.h"
//#include <boost/thread.hpp>
#include "src/sockets/Udp.h"
#include "src/Driver.h"
#include "src/StandardCab.h"
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[]) {
    BeginningInfoReader beginningInfoReader;
    std::string info;
    cin >> info;
    std::vector<std::string> vec = beginningInfoReader.split(info);
    int driverId = stoi(vec[0]);
    int age = stoi(vec[1]);
    char status = (vec[2])[0];
    int experience = stoi(vec[3]);
    int vehicleId = stoi(vec[4]);
    Driver* driver = new Driver(driverId, age, status, experience, vehicleId);

    std::cout << "Client Is Running" <<std::endl;

    cout << argv[1] << endl;
    Udp udp(0, atoi(argv[1]));
    udp.initialize();

    std::string serial_str;
    boost::iostreams::back_insert_device<std::string> inserter(serial_str);
    boost::iostreams::stream<boost::iostreams::back_insert_device<std::string> > s(inserter);
    boost::archive::binary_oarchive oa(s);
    oa << driver;
    s.flush();
    char buffer[1024];
    udp.sendData(serial_str);

    udp.reciveData(buffer, sizeof(buffer));


    return 0;
}