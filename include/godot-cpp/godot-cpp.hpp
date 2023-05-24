#pragma once

#include <iosfwd>
#include <string>

#include <godot-cpp/export.hpp>

namespace godot_cpp
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  GODOT_CPP_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
