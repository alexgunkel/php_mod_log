#include <phpcpp.h>
#include <iostream>

class AbstractLogger : public Php::Base
{
private:

public:
void debug();
void info();
void notice();
void warning();
void error();
void critical();
void alert();
void emergency();
void log( int loglevel );
};