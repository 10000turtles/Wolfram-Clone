#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Function
{
 public:
  //Constructors/Destructors
  Function();
  Function(string s);
  Function(const Function& f);
  ~Function();

  //Operator Overloading
  void      destroy_function();
  void      copy_function(const Function& old);
  Function& operator=(const Function& old);

  //Functionality
  void print();
};

std::ostream& operator<<(std::ostream& ostr, Function& e);
std::ostream& operator<<(std::ostream& ostr, Function* e);