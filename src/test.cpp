/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  test server
 *
 *        Created:  12/23/2012 03:29:08 PM
 *         Author:  YOUR NAME (), 
 *
 * =====================================================================================
 */

#include "DBMng.hpp"
#include "ThreadMng.hpp"

int main() 
{
  dbproxy::gDBMng.init();
  dbproxy::gThreadMng.init();


  sleep(5);
  return 0;
}
