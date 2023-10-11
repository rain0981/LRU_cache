#include <iostream>
#include <unordered_map>
#include <list>


class LRUCache {
public:
    LRUCache(int capacity) {
        capacity_ = capacity;
    }

    int get(int key) {
        auto item = cache_.find(key);
        // if key doesn't exist we return -1
        if (item == cache_.end())
        {
            return -1;
        }
        return item->second.first;
        // if key exist we return value 
    }

    void put(int key, int value) {

    }

    void use() {
        
    }

    int capacity_;
    // < key < value, key iterator> >for some reason
    std::unordered_map<int, std::pair<int, std::list<int>::iterator>> cache_;
    // List of keys 1st is most used, last i lessed used
    std::list<int> lru_;
};

