#include <iostream>
#include <string>
#include <vector>
#include "hash.h"

HashTable::HashTable(int s ){
    size = s;
    for(int i = 0; i < s; i ++){
        names.push_back("");
        prices.push_back(0);
    }
}

bool HashTable::add(std::string name, int price){
    for(int i = 0; i < size; i++){
        if(names[i] == ""){
            names[i] = name;
            prices[i] = price;
            return 0;
        }
        else if(names[i] == name){
            return 1;
        }
    }
    size++;
    names.push_back(name);
    prices.push_back(price);
    return 0;
}

bool HashTable::del(std::string name){
    for(int i = 0; i < size; i++){
        if(names[i] == name){
            if(i == size - 1){
                names.pop_back();
                prices.pop_back();
                size--;
                return 0;
            }
            names[i] = "";
            prices[i] = 0;
            return 0;
        }
    }
    return 1;
}

int HashTable::find(std::string name){
    for(int i = 0; i < size; i++){
        if(names[i] == name){
            return prices[i];
        }
    }
    return 0;
}

bool HashTable::test(){
    for(int i = 0; i < size; i++){
        if(names[i] != ""){
            return 1;
        }
    }
    return 0;
}

int HashTable::len(){
    return size;
}