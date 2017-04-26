#include <phpcpp.h>
#include <iostream>
#include <string>
using namespace std;

class AbstractLogger : public Php::Base
{
private:

public:
void debug(Php::Parameters &params);
void info(Php::Parameters &params);
void notice(Php::Parameters &params);
void warning(Php::Parameters &params);
void error(Php::Parameters &params);
void critical(Php::Parameters &params);
void alert(Php::Parameters &params);
void emergency(Php::Parameters &params);
void logfromphp(Php::Parameters &params);
void log(int loglevel, string message);
};