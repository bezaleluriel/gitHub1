#include <iostream>
#include "src/Bfs.h"
#include "src/BeginningInfoReader.h"
#include "src/MainFlow.h"
//#include <boost/thread.hpp>


/**
 * main - this class gets input from user for size point start and end,
 * creates a reader to interperates the info.
 * then creates a grid and bfs and runs the algorithm that prints out
 * the shortest way.
 * @return 0 in the end.
 */

int main() {
    std::cout << "Server Is Running" <<std::endl;
    MainFlow mainFlow;
    std::string size;
    int numOfObstacles;
    std::string obstacleLocation;
    int choice;
    std::string s;
    //receiving the size of the grid from the user.
    std::getline(std::cin, size);
    //giving the size to main flow for parsing.
    mainFlow.parseSize(size);
    //creating a grid with the size that was parsed by mainflow.
    Grid grid(mainFlow.getMapX(),mainFlow.getMapY());
    //setting the grid as the map of main flow.
    mainFlow = MainFlow(&grid);
    //receiving the number of obstacles from the user.
    std::cin >> numOfObstacles;
    //setting the number of obstacles received from the user.
    mainFlow.setNumOfObstacles(numOfObstacles);
    //if there are obstacles we will get a string from the user representing their location.
    if(numOfObstacles>0){
        for(int i=0; i<numOfObstacles; i++){
            std:: cin >> obstacleLocation;
            mainFlow.setObstacle(obstacleLocation);
        }
    }

    //receiving first choice from option menu 1-6.
    std::cin >> choice;
    //we will now receive orders as an int continuously until we receive the number 7.
    while (choice!=7){
        //if choice equals 6 then there is no string to be sent to it .
        if (choice == 6){
           mainFlow.choiceMenu();
        }
        else{
            std::cin >> s;
            mainFlow.choiceMenu(choice, s);
        }
        std::cin >> choice;
    }
    //in case the choice number is 7 we exit the program.
    return 0;
}