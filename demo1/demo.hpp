#include "singleton.hpp"
#include <iostream>
#include <string>

class Wallet {
  friend class Singleton<Wallet>;
  Wallet() { std::cout << "&this: " << this << std::endl; };

public:
  inline void earn(int &salary) { money_ += salary; }
  inline int have() { return money_; }

private:
  int money_;
};