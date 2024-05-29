// The growth of Computer Science has forced the scientific community to award Nobel Prize in CS starting from this year. Chef knows that the Nobel community is going to award the prize to that person whose research is different from others (ie. no other researcher should work on the same topic). If there are multiple such people, who work on unique topics, then they will all share the prize. It might also happen that no one wins this time. Chef also knows the N researchers which the community who will be considered for the prize, and the topics in which each of them work. In total the CS field can be divided into M broad topics. Given the topics in which each of the N researchers are working on, in the form of an array A, and given that Chef can master any topic instantly, find whether he can win the prize. That is, can the Chef choose to work on some topic which will guarantee that he will win the prize? Chef doesn't mind sharing the prize with others.


#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfResearchers,noOfTopics;
        cout<<"Enter the no. of researchers : ";
        cin>>noOfResearchers;

        cout<<"Enter the no. of topics : ";
        cin>>noOfTopics;

        // Approach -> 1   T.C ---> O(NlogN)
        // int arr[noOfResearchers];
        // for(int i = 0;i < noOfResearchers;i++){
        //     cout<<"Enter the topic choose by "<<(i + 1)<<"th researcher : ";
        //     cin>>arr[i];
        // }

        // int count = 0;
        // sort(arr,arr + noOfResearchers);
        // for(int i = 0;i < (noOfResearchers - 1);i++){
        //     if(arr[i] != arr[i + 1]) count++;
        // }

        // if((count + 1) < noOfTopics) cout<<"Yes,Chef Will get noble Prize"<<endl;

        // else cout<<"No,Chef Will not get noble Prize"<<endl;


        // Approach -> 2  T.C -> O(N)
        set<int>arr;
        for(int i = 0;i < noOfResearchers;i++){
            int topic;
            cout<<"Enter the topic choose by "<<(i + 1)<<"th researcher : ";
            cin>>topic;
            arr.insert(topic);
        }

        if(arr.size() != noOfTopics) cout<<"Yes,Chef Will get noble Prize"<<endl;

        else cout<<"No,Chef Will not get noble Prize"<<endl;
    }
}