#include <phpcpp.h>
#include <iostream>

#include "AbstractLogger.h"
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
/*	Php::Class<AbstractLogger> AbstractLogger("AbstractLogger");
	AbstractLogger.method<&AbstractLogger::debug>("debug");
	AbstractLogger.method<&AbstractLogger::info>("info");
	AbstractLogger.method<&AbstractLogger::notice>("notice");
	AbstractLogger.method<&AbstractLogger::warning>("warning");
	AbstractLogger.method<&AbstractLogger::error>("error");
	AbstractLogger.method<&AbstractLogger::critical>("critical");
    AbstractLogger.method<&AbstractLogger::alert>("alert");
    AbstractLogger.method<&AbstractLogger::emergency>("emergency");*/


	Php::Class<DummyLogger> DummyLogger("DummyLogger");
	DummyLogger.method<&DummyLogger::trans_error>("error");

	extension.add(std::move(DummyLogger));

	//extension.add(std::move(AbstractLogger));

        // return the extension
        return extension;
    }
}
