//
// Created by Student on 01.04.2022.
//

#include "LogFabric.h"

AbstractLogInfo *ErrorLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new ErrorInfo(subSystem, message);
}

AbstractLogInfo *DebugLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new DebugInfo(subSystem, message);
}

AbstractLogInfo *CriticalLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new CriticalInfo(subSystem, message);
}

AbstractLogInfo *AbortLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new AbortInfo(subSystem, message);
}

AbstractLogInfo *FatalLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new FatalInfo(subSystem, message);
}

AbstractLogInfo *RunLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new RunInfo(subSystem, message);
}

AbstractLogInfo *InfoLogFabric::create(const std::string &subSystem, const std::string &message) const
{
    return new LogInfo(subSystem, message);
}