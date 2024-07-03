// Mathison recently inherited an ancient papyrus that contained some text. Unfortunately, the text was not a pangram. Now, Mathison has a particular liking for holoalphabetic strings and the text bothers him. The good news is that Mathison can buy letters from the local store in order to turn his text into a pangram.However, each letter has a price and Mathison is not very rich. Can you help Mathison find the cheapest way to obtain a pangram?


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ans[26];
        for(int i = 0;i < 26;i++){
            // cout<<"Enter the cost at "<<(i + 1)<<"th position : ";
            cin>>ans[i];
        }

        string str;
        cin>>str;
        int sum = 0;
        for(int i = 'a';i <= 'z';i++){
            bool flag = false;
            for(int j = 0;j < str.length();j++){
                if(i == str[j]) flag = true;
            }
            if(flag == false) sum += ans[i - 97];
        }
        cout<<sum<<endl;
    }
}