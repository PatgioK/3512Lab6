//
// Created by patgi on 2018-11-02.
//

#include "dictionary.hpp"
#include <iostream>

dictionary::dictionary() {
    fstream fstr;
    string key, value;
    fstr.open("../dictionary.txt");
    while (fstr >> key >> value) {
        dict.insert(pair<string, string>(key, value));
    }
    fstr.close();
}

void dictionary::print(){
    map<string,string>::iterator iterator1;
    for(iterator1 = dict.begin(); iterator1 != dict.end(); ++iterator1) {
        cout << iterator1->first << " " << iterator1->second;
    }
}

string dictionary::findword(string word) {
    if(dict.find(word) == dict.end()) {
        return "word not found";
    }
    string def = dict.find(word)->second;
    return def;
}