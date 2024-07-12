// Chef was reading some quotes by great people. Now, he is interested in classifying all the fancy quotes he knows. He thinks that all fancy quotes which contain the word "not" are Real Fancy; quotes that do not contain it are regularly fancy. You are given some quotes. For each quote, you need to tell Chef if it is Real Fancy or just regularly fancy.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;

    cin.ignore(); // To ignore the newline character after reading t
    while(testCase--){
        string str;
        getline(cin,str);
        
        int n = str.length();
        
        bool flag = false;
        for(int i = 0;i < n - 2;i++){
            if(str[i] == 'n' && str[i + 1] == 'o' && str[i + 2] == 't'){
                if((i == 0 || str[i - 1] == ' ') && (str[i + 3] == ' ' || i == (n - 3))){
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout<<"Real Fancy"<<endl;
        else cout<<"regularly fancy"<<endl;
    }
}