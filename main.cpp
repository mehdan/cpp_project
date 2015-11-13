#include <iostream>
#include <string>

#include "Singleton.h"

using namespace std;

int main()
{
	Singleton& a = Singleton::GetInstance();
  cout << "hello world!" << endl;  
  
  return 0;
}
