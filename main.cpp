#include <iostream>
#include <string>
#include <map>
using namespace std;

#include "Factory.h"

template <class Object,class Key> map<Key,Object*> Factory<Object,Key>::m_map=map<Key,Object*>();

template<class Object, class Key> void Factory<Object,Key>::Register( Key key, Object* obj)
{
	if (m_map.find(key) == end(m_map))
	{
		m_map[key] = obj;
	}
}

template<class Object, class Key> Object* Factory<Object, Key>::Create(Key& key)
{
	return m_map[key]->Clone();
}


class Number
{
	int a;
public:
	int getNum() { return a;};
	void setNum(int n) { a = n;};
	Number* Clone() const
	{
		return new Number(*this);
	}
};

int main()
{
	Number one;
	Number two;
	string uno="un";
	string due="deux";
	one.setNum(1);
	two.setNum(2);
	Factory<Number, string> factory;
	factory.Register(uno, &one);
	factory.Register(due,&two);
	Number* a = factory.Create(uno);
	cout << "hello world"  << a->getNum()<< endl;
	return 0;
}
