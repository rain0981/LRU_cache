#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;

class LRU_cache {
private:
	int capacity;
	list<pair<int, int>> list;
	unordered_map<int, std::list<std::pair<int, int>>::iterator> map;
public:
	

	int put(int key, int value) {
		list.push_front(make_pair(key, value));
	}
	
};

int main() {
	LRU_cache myLRU;
	cout << myLRU.put(2323, 214);
}