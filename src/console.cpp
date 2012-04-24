#include "console_p.hpp"

using console::Console;

Console::Private::Private():
buffer( new Buffer( std::cin.rdbuf(), std::cout.rdbuf() ) ) {
}

Console::Console():
std::iostream( nullptr ),
p_( new Private ) {
  this->rdbuf( this->p_->buffer.get() );
}

Console::~Console() {
}
