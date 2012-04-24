#ifndef CONSOLE_P_HPP
#define CONSOLE_P_HPP

#include "console.hpp"
#include "buffer.hpp"

namespace console {

class Console::Private {
public:
  Private();

  std::unique_ptr< Buffer > buffer;
};

}

#endif
