#include <iostream>
#include "DummyLogger.h"

/**
 * @brief Debug: debug-level messages
 * 
 * @return void
 */
void DummyLogger::debug()
{
  Php::out << "Loglevel debug is "     << ::loglevel::debug     << std::endl;
}

/**
 * @brief Informational: informational messages
 * 
 * @return void
 */
void DummyLogger::info()
{
  Php::out << "Loglevel info is "      << ::loglevel::info      << std::endl;
}

/**
 * @brief Notice: normal but significant condition
 * 
 * @return void
 */
void DummyLogger::notice()
{
  Php::out << "Loglevel notice is "    << ::loglevel::notice    << std::endl;
}

/**
 * @brief Warning: warning conditions
 * 
 * @return void
 */
void DummyLogger::warning()
{
  Php::out << "Loglevel warning is "   << ::loglevel::warning   << std::endl;
}

/**
 * @brief Error: error conditions
 * 
 * @return void
 */
void DummyLogger::error()
{
  Php::out << "Loglevel error is "     << ::loglevel::error     << std::endl;
}

/**
 * @brief Critical: critical conditions
 * 
 * @return void
 */
void DummyLogger::critical()
{
  Php::out << "Loglevel critical is "  << ::loglevel::critical  << std::endl;
}

/**
 * @brief Alert: action must be taken immediately
 * 
 * @return void
 */
void DummyLogger::alert()
{
  Php::out << "Loglevel alert is "     << ::loglevel::alert     << std::endl;
}

/**
 * @brief Emergency: system is unusable
 * 
 * @return void
 */
void DummyLogger::emergency()
{
  Php::out << "Loglevel emergency is " << ::loglevel::emergency << std::endl;
}