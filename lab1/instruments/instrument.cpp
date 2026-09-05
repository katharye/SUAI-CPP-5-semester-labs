#include "instrument.hpp"
#include "../myexception/myexception.hpp"
#include <iostream>

std::string Instrument::get_name();
float Instrument::get_cost();
int Instrument::get_count_in_orchestra();
std::string Instrument::get_owner_name();

void Instrument::set_name(std::string name) { this->name = name; }
void Instrument::set_cost(float cost) { this->cost = cost; }
void Instrument::set_count_in_orchestra(int count_in_orchestra) {
  //  if (count_in_orchestra <= 0)
  //  {
  //    throw
  //  }
  this->count_in_orchestra = count_in_orchestra;
}
void Instrument::set_owner_name(std::string owner_name) {
  this->owner_name = owner_name;
}

bool Instrument::save(std::ofstream &);
bool Instrument::load(std::ifstream &);

void Instrument::print() {
  std::cout << "--- --- ---" << std::endl;
  std::cout << this->name << std::endl;
  std::cout << "--- --- ---" << std::endl;
  std::cout << "Cost: " << this->cost << std::endl;
  std::cout << "Count in orchestra: " << this->count_in_orchestra << std::endl;
  std::cout << "Owner name: " << this->owner_name << std::endl;
  std::cout << "--- --- ---" << std::endl;
}

Instrument::Instrument()
    : name("None"), cost(0.0), count_in_orchestra(0), owner_name("None") {}

Instrument::Instrument(const Instrument &other)
    : Instrument::Instrument(other.name, other.cost, other.count_in_orchestra,
                             other.owner_name) {}

Instrument::Instrument(std::string name, float cost, int count_in_orchestra,
                       std::string owner_name)
    : name(name), cost(cost), count_in_orchestra(count_in_orchestra),
      owner_name(owner_name) {}

Instrument::~Instrument() {}
