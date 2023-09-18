#include "p2.h"
using namespace std;

set<string> word_amalgamation(vector<string> dictionary, string scrambled_word){
    set<string> result;
    
    set<char> set_test;

    for(auto sw : scrambled_word)
        set_test.insert(sw);

    set<char> tmp;

    for(int i = 0; i < dictionary.size(); i++){
        for(auto d : dictionary[i])
            tmp.insert(d);
        if(tmp == set_test)
            result.insert(dictionary[i]);
        tmp.clear();    
    }

    return result;
}