
#include "demo.hpp"

int main() {
  int salary_January = 7777;
  int salary_February = 8888;
  int salary_March = 9999;
  Singleton<Wallet>::Instance().earn(salary_January);
  std::cout << "1: " << Singleton<Wallet>::Instance().have() << std::endl;
  Singleton<Wallet>::Instance().earn(salary_February);
  std::cout << "2: " << Singleton<Wallet>::Instance().have() << std::endl;
  Singleton<Wallet>::Instance().earn(salary_March);
  std::cout << "3: " << Singleton<Wallet>::Instance().have() << std::endl;
  return 0;
}