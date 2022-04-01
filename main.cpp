#include <iostream>
#include <fstream>
#include "Logger.h"

int main() {
    std::ofstream file("D://log.txt");

    Logger* logger1 = Logger::getInstance();

    logger1->setOutputStream(&file);

    CarFabric carFabric;

    AbstractFabric* pointer_f_car = &carFabric;

    AbstractProduct* product = logger1->create(pointer_f_car);

    std::cout << "New product - " << product->getType() << std::endl;
    std::cout << "Velocity - " << product->getVelocity() << std::endl;

    return 0;
}
