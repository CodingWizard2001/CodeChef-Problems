// Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on di th day.Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !!


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int numberOfFriends;
        cout<<"Enter the number of friends : ";
        cin>>numberOfFriends;

        int arr[numberOfFriends];
        for(int i = 0;i < numberOfFriends;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int count = numberOfFriends;
        sort(arr,arr + numberOfFriends);
        for(int i = 0;i < (numberOfFriends - 1);i++){
            if(arr[i] == arr[i + 1]) count--;
        }

        cout<<"The maximum number of friendships he can save will be : "<<count<<endl;
    }
}