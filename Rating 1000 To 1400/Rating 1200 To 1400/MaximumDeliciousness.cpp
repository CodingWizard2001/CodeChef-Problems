// A new patisserie has opened up to rave reviews. You, in your quest for deliciousness, are going to visit it. The patisserie has N pastries. With your trained eye, you judge that the i-th of them has deliciousness Ai. Of course, you want to eat pastries whose total deliciousness is as high as possible. Unfortunately, you can't just buy everything out. There are K customers in the store, including you. They form a queue to order pastries, of which you're the L-th person. Each customer, including you, will do the following:

// 1.  Among the remaining pastries, buy the one with the highest deliciousness
// 2.  Then, move to the back of the queue

// This will repeat till all the pastries are sold out.
// What's the total deliciousness of the pastries you buy?




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,totalPeople,positionOfMe;
        
        // cout<<"Enter the length : ";
        cin>>len;

        // cout<<"Enter the no. of people : ";
        cin>>totalPeople;

        // cout<<"Enter the position of me : ";
        cin>>positionOfMe;
        
        int arr[len];
        for(int i = 0;i < len;i++) cin>>arr[i];
        
        sort(arr,arr + len,greater<int>());
        
        long long int sum = 0;
        for(int i = (positionOfMe - 1);i < len;i += totalPeople){
            sum += arr[i];
        }
        
        cout<<sum<<endl;
    }
}