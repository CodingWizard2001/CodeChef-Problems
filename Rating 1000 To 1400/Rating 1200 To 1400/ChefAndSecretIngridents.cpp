// Chef recently visited ShareChat Cafe and was highly impressed by the food. Being a food enthusiast, he decided to enquire about the ingredients of each dish.There are N dishes represented by strings S1,S2,…,SN. Each ingredient used for making dishes in ShareChat Cafe is represented by a lowercase English letter. For each valid i, the ingredients used to make dish i correspond to characters in the string Si (note that ingredients may be used multiple times). A special ingredient is an ingredient which is present in each dish at least once.Chef wants to know the number of special ingredients in ShareChat Cafe. Since Chef is too busy with work, can you help him?





#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int temp = n;
        int ans = 0;
        int freq[26] = {0};
        
        while(n--){
            string s;
            cin>>s;
            
            int count[26] = {0};
            for(int i = 0;i < s.length();i++){
                if(count[s[i] - 'a'] == 0){
                    freq[s[i] - 'a']++;
                    count[s[i] - 'a'] = 1;
                }
            }
        }
        for(int i = 0;i < 26;i++){
            if(freq[i] == temp) ans++;
        }
        cout<<ans<<endl;
    }
}