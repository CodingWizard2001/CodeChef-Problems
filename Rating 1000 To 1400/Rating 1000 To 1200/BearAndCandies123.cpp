// Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int limitOfLimak,limitOfBob;
        // cout<<"Enter the limit of Limak : ";
        cin>>limitOfLimak;

        // cout<<"Enter the limit of Bob : ";
        cin>>limitOfBob;
        
        int countOfLimak = 0,countOfBob = 0;
        int i = 0;
        while(countOfLimak <= limitOfLimak && countOfBob <= limitOfBob){
            i++;
            if(i % 2 != 0) countOfLimak += i;
            else countOfBob += i;
            
            if(countOfLimak > limitOfLimak) break;
            if(countOfBob > limitOfBob) break;
        }
        if(countOfLimak > limitOfLimak) cout<<"Bob"<<endl;
        else cout<<"Limak"<<endl;
    }
}