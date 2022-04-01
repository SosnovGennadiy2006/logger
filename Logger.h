//
// Created by Student on 01.04.2022.
//

#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <iostream>
#include "Fabric.h"
#include "Product.h"
#include <ctime>
#include <string>
#include <queue>
#include "logs/LogInfo.h"
#include "logs/LogFabric.h"

class Logger
{
private:
    static Logger* p_instance;
    Logger()
    {
        std::cout << this << std::endl;
    }
    Logger(const Logger&);
    Logger &operator=(Logger &);

    // subsystem name
    static std::string subSystemName;
    // amount of logs to save
    unsigned short int amountToSave = 10;

    // Queue for logs
    std::queue<AbstractLogInfo*> infos;

    void popInfos();
public:
    static Logger* getInstance(std::string name = "MAIN");

    void setSavedLogsAmount(unsigned short int amount);

    void newLog(AbstractLogInfo::logTypes newType, const std::string &subSystem,
                const std::string &message);
};


#endif //LOGGER_LOGGER_H
