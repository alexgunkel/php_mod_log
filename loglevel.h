/**
 * Loglevels according to RFC 5424
 */
struct loglevel {
  static short int const debug;
  static short int const info;
  static short int const notice;
  static short int const warning;
  static short int const error;
  static short int const critical;
  static short int const alert;
  static short int const emergency;
};
