#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "def.h"

int main(int, char**){
    std::vector<int> surnames = enrolled("D://progects//progect8//task1//text.txt");
    unenrolled("Ванке");
    return 0; 
}
