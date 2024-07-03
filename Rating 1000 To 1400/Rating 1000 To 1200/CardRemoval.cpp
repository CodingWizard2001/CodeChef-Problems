// You have N cards placed in front of you on the table. The ith card has the number Ai written on it. In one move, you can remove any one card from the remaining cards on the table. Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size;
    	// cout<<"Enter the size of the array : ";
        cin>>size;
        int arr[size];
        map<int,int>m;
	    for (int i=0; i<size; i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
	        cin>>arr[i];
	        m[arr[i]]++;    
	    }
	    int freq=0;
	    for(int i = 0; i < size; i++){
	        if(m[arr[i]] > freq)
	        freq = m[arr[i]];
	    }
	    cout<< (size-freq)<<endl;
    }
}