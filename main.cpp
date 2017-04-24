#include <phpcpp.h>
#include <iostream>

#include "DummyLogger.h"


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
	Php::Class<DummyLogger> DummyLogger("DummyLogger");
	DummyLogger.method<&DummyLogger::debug>("debug");
	DummyLogger.method<&DummyLogger::info>("info");
	DummyLogger.method<&DummyLogger::notice>("notice");
	DummyLogger.method<&DummyLogger::warning>("warning");
	DummyLogger.method<&DummyLogger::error>("error");
	DummyLogger.method<&DummyLogger::critical>("critical");
	DummyLogger.method<&DummyLogger::alert>("alert");
	DummyLogger.method<&DummyLogger::emergency>("emergency");
        
	extension.add(std::move(DummyLogger));
        
        // return the extension
        return extension;
    }
}