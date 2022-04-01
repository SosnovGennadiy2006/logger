//
// Created by Student on 01.04.2022.
//

#include "LogInfo.h"

ErrorInfo::ErrorInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes ErrorInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::error;
}

DebugInfo::DebugInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes DebugInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::debug;
}

CriticalInfo::CriticalInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes CriticalInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::critical;
}

AbortInfo::AbortInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes AbortInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::abort_;
}

FatalInfo::FatalInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes FatalInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::fatal;
}

RunInfo::RunInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes RunInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::run;
}

LogInfo::LogInfo(const std::string &subSystem, const std::string &message) : AbstractLogInfo(subSystem, message) {
    this->subSystem = subSystem;
    this->message = message;

    this->initDate();
}

AbstractLogInfo::logTypes LogInfo::getLogType() const
{
    return AbstractLogInfo::logTypes::info;
}