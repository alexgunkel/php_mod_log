#include <phpcpp.h>
#include "loglevel.h"

/**
 * Class DummyLogger
 */

class DummyLogger : public Php::Base
{
private:
  //
  
public:
void debug();
void info();
void notice();
void warning();
void error();
void critical();
void alert();
void emergency();

};