// In a country called Chef Land, there was a lot of monetary fraud, so Chefu, the head of the country, decided to choose new denominations of the local currency ― all even-valued coins up to an integer N should exist. After a few days, a citizen complained that there was no way to create an odd value, so Chefu decided that he should also introduce coins with value 1. Formally, you are given an integer N; for v = 1 and each even positive integer v ≤ N, coins with value v exist. You are also given an integer S. To handle transactions quickly, find the minimum number of coins needed to pay a price S.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int integerN,priceS,count = 0;
               
        // cout<<"Enter the price S: ";
        cin>>priceS;

        // cout<<"Enter the value of N : ";
        cin>>integerN;

        
        if(priceS % 2){
            count++;
            priceS--;
        }
        while(priceS){
            count += priceS / integerN;

            if(priceS < integerN){
                count++;
                break;
            }

            priceS %= integerN;
        }
        cout<<count<<endl;
    }
}