#include <iostream>

#ifndef _AbstractLogger
#define _AbstractLogger

class AbstractLogger
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

#endif
