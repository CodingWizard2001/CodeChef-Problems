// Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment. There are N numbers in a list A = A1,A2,…,AN. Chef needs to find the mode of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one. More formally, for every v such that there exists at least one i such that Ai = v, find the number of j such that Aj = v, and call that the frequency of v, denoted by freq(v). Then find the value w such that freq(v)=w for the most number of vs considered in the previous step. If there are multiple values w which satisfy this, output the smallest among them. As you are one of Chef's friends, help him complete the assignment.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        int arr[len];
        unordered_map<int,int>mp;
        
        for(int i = 0;i < len;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int maxi = 0,mini = INT_MAX;
        map<int,int>freqCheck; // Check Frequency
        
        for(auto x : mp) freqCheck[x.second]++;
        
        for(auto x : freqCheck) maxi = max(x.second,maxi);
        
        for(auto x : freqCheck){
            if(x.second == maxi) mini = min(mini,x.first);
        }
        cout<<mini<<endl;
    }
}