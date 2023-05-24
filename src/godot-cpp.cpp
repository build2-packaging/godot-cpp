#include <godot-cpp/godot-cpp.hpp>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace godot_cpp
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
