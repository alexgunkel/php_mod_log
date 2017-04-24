#include "loglevel.h"

/**
 * These are the loglevels together with their numerical
 * representation according to RFC 5424 6.2.1
 */
short int const ::loglevel::debug(     7 ); 
short int const ::loglevel::info(      6 ); 
short int const ::loglevel::notice(    5 ); 
short int const ::loglevel::warning(   4 ); 
short int const ::loglevel::error(     3 ); 
short int const ::loglevel::critical(  2 ); 
short int const ::loglevel::alert(     1 ); 
short int const ::loglevel::emergency( 0 ); 
