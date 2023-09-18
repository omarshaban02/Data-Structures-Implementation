#include "p1.h"
#include <map>
#include <string>

using namespace std;

bool ransom_note(string ransomNote, string magazine) {
    bool result = false;
    multimap<char, int> m_r;

    for (int i = 0; i < ransomNote.size(); i++)
        m_r.insert({ransomNote[i], i});

    for (auto x: m_r)
        if (x.first != magazine[x.second])
            return result;

    result = true;
    return result;
}