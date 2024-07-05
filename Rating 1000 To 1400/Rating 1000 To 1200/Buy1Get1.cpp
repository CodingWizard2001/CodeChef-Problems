// One day Alice visited Byteland to purchase jewels for her upcoming wedding anniversary. In Byteland, every Jewelry shop has their own discount methods to attract the customers. One discount method called Buy1-Get1 caught Alice's attention. That is, Alice buys one jewel, then she can get one additional jewel with the same color without charge by Buy1-Get1. Alice lists the needed jewels as a string S, each letter denotes one jewel, and the same letters denote the same colors of jewels, and the different letters denote the different colors of jewels. The cost of each jewel is 1. Your task is to calculate the minimum cost for getting all the jewels Alice listed.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        sort(str.begin(),str.end());
        int count = 0,i = 0,n = str.size();
        while(i < n){
            if(str[i] == str[i + 1]){
                i++;
            }
            count++;
            i++;
        }
        cout<<count<<endl;
    }
}