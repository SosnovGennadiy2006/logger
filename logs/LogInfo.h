//
// Created by Student on 01.04.2022.
//

#ifndef LOGGER_LOGINFO_H
#define LOGGER_LOGINFO_H

#include <string>
#include <ctime>

class AbstractLogInfo {
public:
    // Types for logs
    enum logTypes
    {
        error,
        debug,
        critical,
        abort_,
        fatal,
        run,
        info
    };
protected:
    char* date;
    std::string subSystem;
    std::string message;
public:
    AbstractLogInfo(const std::string& subSystem, const std::string& message){};

    void initDate()
    {
        date = ctime(reinterpret_cast<const time_t *const>(time(nullptr)));
    }

    void setSubSystem(const std::string& newSubSystem)
    {
        subSystem = newSubSystem;
    }

    void setMessage(const std::string& newMessage)
    {
        message = newMessage;
    }

    virtual logTypes getLogType() const = 0;

    virtual std::string getMessage() const
    {
        return message;
    }

    virtual char* getDate() const
    {
        return date;
    }

    virtual std::string getSubSystem() const
    {
        return subSystem;
    }
};

class ErrorInfo final : public AbstractLogInfo
{
public:
    explicit ErrorInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

class DebugInfo final : public AbstractLogInfo
{
public:
    explicit DebugInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

class CriticalInfo final : public AbstractLogInfo
{
public:
    explicit CriticalInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

class AbortInfo final : public AbstractLogInfo
{
public:
    explicit AbortInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

class FatalInfo final : public AbstractLogInfo
{
public:
    explicit FatalInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

class RunInfo final : public AbstractLogInfo
{
public:
    explicit RunInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};


class LogInfo final : public AbstractLogInfo
{
public:
    explicit LogInfo(const std::string &subSystem, const std::string &message);

    AbstractLogInfo::logTypes getLogType() const override;
};

#endif //LOGGER_LOGINFO_H
