#include <phpcpp.h>
#include "AbstractLogger.h"
#include "loglevel.h"

/**
 * @brief Debug: debug-level messages
 * 
 * @return void
 */
void AbstractLogger::debug()
{
  log(::loglevel::debug);
}

/**
 * @brief Informational: informational messages
 * 
 * @return void
 */
void AbstractLogger::info()
{
  log(::loglevel::info);
}

/**
 * @brief Notice: normal but significant condition
 * 
 * @return void
 */
void AbstractLogger::notice()
{
  log(::loglevel::notice);
}

/**
 * @brief Warning: warning conditions
 * 
 * @return void
 */
void AbstractLogger::warning()
{
  log(::loglevel::warning);
}

/**
 * @brief Error: error conditions
 * 
 * @return void
 */
void AbstractLogger::error()
{
 log(::loglevel::error);
}

/**
 * @brief Critical: critical conditions
 * 
 * @return void
 */
void AbstractLogger::critical()
{
  log(::loglevel::critical);
}

/**
 * @brief Alert: action must be taken immediately
 * 
 * @return void
 */
void AbstractLogger::alert()
{
  log(::loglevel::alert);
}

/**
 * @brief Emergency: system is unusable
 * 
 * @return void
 */
void AbstractLogger::emergency()
{
  log(::loglevel::emergency);
}

/**
 * @brief main log method
 * 
 * @param loglevel the given loglevel
 * @return void
 */
void AbstractLogger::log(int loglevel)
{
  Php::out << "Current loglevel is " << loglevel << std::endl;
}
