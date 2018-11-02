#include <iostream>
#include "dictionary.hpp";

int main() {
    std::cout << "Hello, World!" << std::endl;
    dictionary dict1;
    int choice;
    string word;
    string def;
    while(choice != 4) {
        cout << "1- Print dictionary \n 2- find word definition \n 3- enter new word and definition \n 4- exit \n";
        cin >> choice;

        switch(choice) {
            case 1:
                dict1.print();
                break;
            case 2:
                cout << "enter word";
                cin >> word;
                cout << dict1.findword(word) << "\n";
                break;
            case 3:
                cout << "enter word";
                cin >> word;
                if(dict1.dict.find(word) != dict1.dict.end()) {
                    cout <<"word already exists in dictionary";
                } else {
                    dict1.newword(word);
                }

        }
    }





    return 0;
}