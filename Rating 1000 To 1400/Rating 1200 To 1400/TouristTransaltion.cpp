// A tourist is visiting Byteland. The tourist knows English very well. The language of Byteland is rather different from English. To be exact it differs in following points: Bytelandian alphabet has the same letters as English one, but possibly different in meaning. Like 'A' in Bytelandian may be 'M' in English. However this does not mean that 'M' in Bytelandian must be 'A' in English. More formally, Bytelindian alphabet is a permutation of English alphabet. It will be given to you and could be any possible permutation. Don't assume any other condition. People of Byteland don't like to use invisible character for separating words. Hence instead of space (' ') they use underscore ('_'). Other punctuation symbols, like '?', '!' remain the same as in English. The tourist is carrying "The dummies guide to Bytelandian", for translation. The book is serving his purpose nicely. But he is addicted to sharing on BaceFook, and shares his numerous conversations in Byteland on it. The conversations are rather long, and it is quite tedious to translate for his English friends, so he asks you to help him by writing a program to do the same.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string M;
    cin >> t >> M;
    
    unordered_map<char, char> translate_map;
    
    // Create mapping for lowercase letters
    for (int i = 0; i < 26; ++i) {
        translate_map['a' + i] = M[i];
        translate_map['A' + i] = toupper(M[i]);
    }
    
    string line;
    getline(cin, line); 
    
    while (t--) {
        getline(cin, line);
        for (char &c : line) {
            if (c == '_') cout << ' ';
            else if (translate_map.find(c) != translate_map.end()) cout << translate_map[c];
            else cout<<c<<endl;
        }
        cout << endl;
    }
}