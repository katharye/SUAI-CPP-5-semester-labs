#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H

#include <fstream>
#include <string>

class Instrument {
private:
  std::string name;
  float cost;
  int count_in_orchestra;
  std::string owner_name;

public:
  const std::string get_name() const;
  const float get_cost() const;
  const int get_count_in_orchestra() const;
  const std::string get_owner_name() const;

  void set_name(std::string name);
  void set_cost(float cost);
  void set_count_in_orchestra(int count_in_orchestra);
  void set_owner_name(std::string owner_name);

  virtual bool save(std::ofstream &);
  virtual bool load(std::ifstream &);

  void print();

  Instrument();
  Instrument(const Instrument &);
  Instrument(std::string name, float cost, int count_in_orchestra,
             std::string owner_name);
  virtual ~Instrument() = 0;
};

#endif
