
#pragma once

template <typename S> class Singleton {
public:
  static S &Instance() // respect Meyer(thread safe)
  {
    static S instance;
    return instance;
  }

private:
  Singleton();
  Singleton(const Singleton &);
  Singleton &operator=(const Singleton &);
};