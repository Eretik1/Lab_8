#ifndef HASH_H
#define HASH_H
#include <iostream>
#include <string>
#include <vector>

class HashTable{
    std::vector<std::string> names;
    std::vector<int> prices;
    int size;
    public:
        HashTable(int s = 10);
        bool add(std::string name, int price);
        bool del(std::string name);
        int find(std::string name);
        bool test();
        int len();
};

#endif