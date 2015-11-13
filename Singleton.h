#include <iostream>
#include <string>

using namespace std;

class Singleton
{
private:
   Singleton();

public:
   static Singleton& GetInstance()
   {
      static Singleton INSTANCE;
      return INSTANCE;
   }
   Singleton(Singleton const&);              // Don't Implement
   void operator=(Singleton const&); // Don't implement
};
