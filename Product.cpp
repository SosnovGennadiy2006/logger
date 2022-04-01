//
// Created by Student on 01.04.2022.
//

#include "Product.h"

std::string ProductMotorbike::getType() const
{
    return "motorbike";
}

float ProductMotorbike::getVelocity() const
{
    return 75;
}

std::string ProductCar::getType() const
{
    return "car";
}

float ProductCar::getVelocity() const
{
    return 120;
}

std::string ProductBicycle::getType() const
{
    return "bicycle";
}

float ProductBicycle::getVelocity() const
{
    return 25;
}