#include <iostream>
#include <fstream>
#include "time.h"
#include <sstream>t

int main() {
    
    int MAX_SIZE=1000000;

    std::ifstream file("time.txt");
    if(file.fail()){
        std::cerr << "Error opening file." << std::endl;
        return -1;
    }
    int size=0;
    Time* times[MAX_SIZE];
    std::string line;

    while(size<MAX_SIZE && std::getline(file, line)){
        std::istringstream iss;
        iss.str(line);
        std::string hours;
        std::string minutes;
        std::getline(iss, hours, ',');
        std::getline(iss, minutes, ',');
        times[size]= new Time(std::stoi(hours), std::stoi(minutes));
        size++;
    }

    for(int i=0; i<size; i++){
        std::cout << times[i]->get_hours() << ":" << times[i]->get_minutes() << std::endl;    
    }
    file.close();
    return 0;
}