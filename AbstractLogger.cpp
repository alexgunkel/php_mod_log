#include <phpcpp.h>
#include "AbstractLogger.h"
#include "loglevel.h"

/**
 * @brief Debug: debug-level messages
 * 
 * @return void
 */
void AbstractLogger::debug(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::debug, message);
}

/**
 * @brief Informational: informational messages
 * 
 * @return void
 */
void AbstractLogger::info(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::info, message);
}

/**
 * @brief Notice: normal but significant condition
 * 
 * @return void
 */
void AbstractLogger::notice(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::notice, message);
}

/**
 * @brief Warning: warning conditions
 * 
 * @return void
 */
void AbstractLogger::warning(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::warning, message);
}

/**
 * @brief Error: error conditions
 * 
 * @return void
 */
void AbstractLogger::error(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::error, message);
}

/**
 * @brief Critical: critical conditions
 * 
 * @return void
 */
void AbstractLogger::critical(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::critical, message);
}

/**
 * @brief Alert: action must be taken immediately
 * 
 * @return void
 */
void AbstractLogger::alert(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::alert, message);
}

/**
 * @brief Emergency: system is unusable
 * 
 * @return void
 */
void AbstractLogger::emergency(Php::Parameters &params)
{
  Php::Value message = params[0];
  log(::loglevel::emergency, message);
}

void AbstractLogger::logfromphp(Php::Parameters& params)
{
  Php::Value loglevel = params[0];
  Php::Value message = params[1];
  log(loglevel, message);
}


/**
 * @brief main log method
 * 
 * @param loglevel the given loglevel
 * @return void
 */
void AbstractLogger::log(int loglevel, Php::Value message)
{
  Php::out << "Current loglevel is " << loglevel << std::endl;
  Php::out << "Current message is: " << message << std::endl;
}
