//
// Created by Student on 01.04.2022.
//

#ifndef LOGGER_LOGFABRIC_H
#define LOGGER_LOGFABRIC_H

#include <string>
#include "LogInfo.h"

class AbstractLogFabric
{
public:
    virtual AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const = 0;
};

class ErrorLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class DebugLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class CriticalLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class AbortLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class FatalLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class RunLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

class InfoLogFabric final : public AbstractLogFabric
{
public:
    AbstractLogInfo* create(const std::string &subSystem, const std::string &message) const override;
};

#endif //LOGGER_LOGFABRIC_H
