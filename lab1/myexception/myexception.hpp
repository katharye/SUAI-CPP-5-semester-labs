#ifndef MY_EXCEPTION_HPP
#define MY_EXCEPTION_HPP

#include <exception>
#include <string>

class MyException : public std::exception {
private:
  std::string message;

public:
  const char *what() const noexcept override;
  explicit MyException(const std::string msg) noexcept;
};
#endif
