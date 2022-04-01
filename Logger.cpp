//
// Created by Student on 01.04.2022.
//

#include "Logger.h"

Logger* Logger::p_instance = nullptr;
std::string Logger::subSystemName = "MAIN";
Logger* Logger::getInstance(std::string name)
{
    if (!p_instance) {
        p_instance = new Logger;
    }
    Logger::subSystemName = name;
    return p_instance;
}

void Logger::popInfos()
{
    if (infos.size() >= amountToSave)
        infos.pop();
}

void Logger::setSavedLogsAmount(unsigned short amount)
{
    amountToSave = amount;
}

void Logger::newLog(AbstractLogInfo::logTypes newType, const std::string &subSystem,
                    const std::string &message)
{
    AbstractLogFabric* abstractFabric;
    switch (newType)
    {
        case (AbstractLogInfo::logTypes::error):
        {
            abstractFabric = new ErrorLogFabric();
            popInfos();
            infos.push(abstractFabric->create(subSystem, message));
            break;
        }
        case (AbstractLogInfo::logTypes::run):
        {
            break;
        }
        case (AbstractLogInfo::logTypes::info):
        {
            break;
        }
        case (AbstractLogInfo::logTypes::fatal):
        {
            break;
        }
        case (AbstractLogInfo::logTypes::abort_):
        {
            break;
        }
        case (AbstractLogInfo::logTypes::critical):
        {
            break;
        }
        case (AbstractLogInfo::logTypes::debug):
        {
            break;
        }
    }
}