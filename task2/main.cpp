#include <iostream>
#include <string>
#include <vector>
#include "hash.h"

int main(int, char**){
    HashTable table;
    std::cout << table.len() << std::endl;
    std::cout << table.test() << std::endl;
    table.add("book", 100);
    std::cout << table.len() << std::endl;
    std::cout << table.test() << std::endl;
    std::cout << table.find("book") << std::endl;
    std::cout << table.del("book") << std::endl;
    std::cout << table.find("book") << std::endl;
}
