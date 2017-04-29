#include "AbstractLogger.h"
#include <phpcpp.h>

class DummyLogger : public AbstractLogger, public Php::Base
{
public:
  void trans_error();
};