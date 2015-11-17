#include <map>
#include <iostream>

using namespace std;

template<class Object, class Key> class Factory
{
protected:
	static map<Key,Object*> m_map;
public:
	static void Register(Key key, Object* obj);
	Object* Create(Key& key);
};
