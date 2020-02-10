#include "Function.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& ostr, Function& f)
{
  f.print();
  return ostr;
}

std::ostream& operator<<(std::ostream& ostr, Function* f)
{
  ostr << *f;
  return ostr;
}

Function& Function::operator=(const Function& old)
{
  // check for self-assignment
  if (&old != this)
  {
    destroy_function();
    copy_function(old);
  }
  return *this;
}