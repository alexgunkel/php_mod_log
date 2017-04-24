#include <iostream>
#include "DummyLogger.h"


void DummyLogger::debug()     { Php::out << "Loglevel debug is "     << ::loglevel::debug     << std::endl;}
void DummyLogger::info()      { Php::out << "Loglevel info is "      << ::loglevel::info      << std::endl;}
void DummyLogger::notice()    { Php::out << "Loglevel notice is "    << ::loglevel::notice    << std::endl;}
void DummyLogger::warning()   { Php::out << "Loglevel warning is "   << ::loglevel::warning   << std::endl;}
void DummyLogger::error()     { Php::out << "Loglevel error is "     << ::loglevel::error     << std::endl;}
void DummyLogger::critical()  { Php::out << "Loglevel critical is "  << ::loglevel::critical  << std::endl;}
void DummyLogger::alert()     { Php::out << "Loglevel alert is "     << ::loglevel::alert     << std::endl;}
void DummyLogger::emergency() { Php::out << "Loglevel emergency is " << ::loglevel::emergency << std::endl;}