//
// Created by Student on 01.04.2022.
//

#ifndef LOGGER_PRODUCT_H
#define LOGGER_PRODUCT_H

#include <string>

class AbstractProduct {
public:
    virtual std::string getType() const = 0;
    virtual float getVelocity() const = 0;
};

class ProductCar : public AbstractProduct
{
public:
    std::string getType() const override;
    float getVelocity() const override;
};

class ProductMotorbike : public AbstractProduct
{
public:
    std::string getType() const override;
    float getVelocity() const override;
};

class ProductBicycle : public AbstractProduct
{
public:
    std::string getType() const override;
    float getVelocity() const override;
};

#endif //LOGGER_PRODUCT_H
