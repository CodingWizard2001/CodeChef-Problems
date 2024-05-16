// Election season has started in Chef-land and the election commission wants to know the count of eligible voters. There are N people in Chef-land where the age of the i th person in Ai. Given that a person needs to be at least X years old to vote, find the number of eligible voters.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int NoOfPeople,requiredAge;
        cout<<"Enter no. of people in chef-land : ";
        cin>>NoOfPeople;
        cout<<"Enter required age for voting : ";
        cin>>requiredAge;
        int ans = 0;
        while(NoOfPeople--){
            int age;
            cout<<"Enter age : ";
            cin>>age;
            if(age >= requiredAge) ans++;
        }
        cout<<"No. of people can vote : "<<ans<<endl;
    }
}