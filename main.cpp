#include <phpcpp.h>
#include <iostream>

#include "loglevel.h"

void debug()     { Php::out << "Loglevel debug is "     << ::loglevel::debug     << std::endl;}
void info()      { Php::out << "Loglevel info is "      << ::loglevel::info      << std::endl;}
void notice()    { Php::out << "Loglevel notice is "    << ::loglevel::notice    << std::endl;}
void warning()   { Php::out << "Loglevel warning is "   << ::loglevel::warning   << std::endl;}
void error()     { Php::out << "Loglevel error is "     << ::loglevel::error     << std::endl;}
void critical()  { Php::out << "Loglevel critical is "  << ::loglevel::critical  << std::endl;}
void alert()     { Php::out << "Loglevel alert is "     << ::loglevel::alert     << std::endl;}
void emergency() { Php::out << "Loglevel emergency is " << ::loglevel::emergency << std::endl;}

/**
 *  tell the compiler that the get_module is a pure C function
 */
extern "C" {
    
    /**
     *  Function that is called by PHP right after the PHP process
     *  has started, and that returns an address of an internal PHP
     *  strucure with all the details and features of your extension
     *
     *  @return void*   a pointer to an address that is understood by PHP
     */
    PHPCPP_EXPORT void *get_module() 
    {
        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("php_mod_log", "1.0");
	extension.add<debug>("debug");
	extension.add<info>("info");
	extension.add<notice>("notice");
	extension.add<warning>("warning");
	extension.add<error>("error");
	extension.add<critical>("critical");
	extension.add<alert>("alert");
	extension.add<emergency>("emergency");
        
        // @todo    add your own functions, classes, namespaces to the extension
        
        // return the extension
        return extension;
    }
}