#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// give a string vector dictionary and a scrambled word return a set containing all the words that can be formed from the scrambled word
set<string> word_amalgamation(vector<string> dictionary, string scrambled);

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


vector<string> dictionary = {
    "tarp",
    "given",
    "score",
    "refund",
    "only",
    "trap",
    "work",
    "earn",
    "course",
    "pepper",
    "part"
};

int main(int argc, char** argv){

    set<string> result = word_amalgamation(dictionary, "resco");
    cout << result.size() << endl;
    if (result.find("score") != result.end())
        cout <<  true;

}
