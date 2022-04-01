//
// Created by Student on 01.04.2022.
//

#ifndef LOGGER_FABRIC_H
#define LOGGER_FABRIC_H

#include "Product.h"

class AbstractFabric {
public:
    virtual AbstractProduct* create() const = 0;
};

class CarFabric : public AbstractFabric
{
public:
    AbstractProduct* create() const override;
};

class MotorbikeFabric : public AbstractFabric
{
public:
    AbstractProduct* create() const override;
};

class BicycleFabric : public AbstractFabric
{
public:
    AbstractProduct* create() const override;
};

AbstractProduct* build(AbstractFabric* fabric);

#endif //LOGGER_FABRIC_H
