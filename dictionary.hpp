//
// Created by patgi on 2018-11-02.
//

#ifndef INC_3512LAB6_DICTIONARY_HPP
#define INC_3512LAB6_DICTIONARY_HPP

#include <map>
#include <iterator>
#include <fstream>
using namespace std;

class dictionary {
public:
    map<string,string> dict;
    dictionary();
    void print();
    string findword(string word);
    void newword(string word);

};


#endif //INC_3512LAB6_DICTIONARY_HPP
