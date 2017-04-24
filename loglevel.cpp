#include "loglevel.h"

/**
 * These are the loglevels together with their numerical
 * representation according to RFC 5424 6.2.1
 */
int const ::loglevel::debug(     7 ); 
int const ::loglevel::info(      6 ); 
int const ::loglevel::notice(    5 ); 
int const ::loglevel::warning(   4 ); 
int const ::loglevel::error(     3 ); 
int const ::loglevel::critical(  2 ); 
int const ::loglevel::alert(     1 ); 
int const ::loglevel::emergency( 0 ); 
