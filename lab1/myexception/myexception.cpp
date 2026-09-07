#include "myexception.hpp"

const char *MyException::what() const noexcept {
  return !this->message.empty() ? this->message.c_str() : "Неизвестная ошибка";
}

MyException::MyException(const std::string msg) noexcept : message(msg) {}
