// Nitika was once reading a history book and wanted to analyze it. So she asked her brother to create a list of names of the various famous personalities in the book. Her brother gave Nitika the list. Nitika was furious when she saw the list. The names of the people were not properly formatted. She doesn't like this and would like to properly format it. A name can have at most three parts: first name, middle name and last name. It will have at least one part. The last name is always present. The rules of formatting a name are very simple:

// 1.  Only the first letter of each part of the name should be capital.

// 2.  All the parts of the name except the last part should be represented by only two characters. The first character should be the first letter of the part and should be capitalized. The second character should be ".".




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        string s;
        getline(cin,s);
        int w = 0;
        int k[2];
        int n = s.size();
        
        // Count No. of space
        for(int i = 0;i < n;i++){
            if(s[i] == ' '){
                w++;
                k[w - 1] = i;
            }
        }
        
        // If no space
        if(w == 0){
            for(int i = 0;i < n;i++){
                if(i == 0) cout<<char(toupper(s[i]));
                else cout<<char(tolower(s[i]));
            }
        }
        
        // If 1 space
        else if(w == 1){
            cout<<char(toupper(s[0]))<<". ";
            for(int i = k[0] + 1;i < n;i++){
                if(i == k[0] + 1) cout<<char(toupper(s[i]));
                else cout<<char(tolower(s[i]));
            }
        }
        
        // If 2 space
        else if(w == 2){
            cout<<char(toupper(s[0]))<<". "<<char(toupper(s[k[0] + 1]))<<". ";
            for(int i = k[1] + 1;i < n;i++){
                if(i == k[1] + 1) cout<<char(toupper(s[i]));
                else cout<<char(tolower(s[i]));
            }
        }
        cout<<endl;
    }
}