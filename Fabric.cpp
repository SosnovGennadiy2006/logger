//
// Created by Student on 01.04.2022.
//

#include "Fabric.h"

AbstractProduct *CarFabric::create() const
{
    return new ProductCar;
}

AbstractProduct *MotorbikeFabric::create() const
{
    return new ProductMotorbike;
}

AbstractProduct *BicycleFabric::create() const
{
    return new ProductBicycle;
}

AbstractProduct* build(AbstractFabric* fabric)
{
    return fabric->create();
}