// Chef lives in a huge apartment building with N floors, numbered 0 (ground floor) through N (terrace). Unfortunately, it has only one lift. We say that when the lift travels from a floor a to a floor b, it travels |b - a| floors. Initially, the lift is on the ground floor. Then, it receives Q requests (numbered 1 through Q). For each valid i, the i-th request is for the lift to move from its current floor to a source floor fi, where some people enter the lift, and then move to a destination floor di, where they exit the lift. The lift should not stop anywhere in between moving to the floor fi or from the floor fi to the floor di. The lift must serve the requests sequentially, i.e. completely fulfill request 1, then request 2 and so on. The lift does not move anywhere after serving the final request. Find the total number of floors the lift needs to travel to fulfill all the requests.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfFloors,noOfRequests;

        // cout<<"Enter the no. of floors : ";
        cin>>noOfFloors;
        // cout<<"Enter the no. of requests : ";
        cin>>noOfRequests;
        
        long long floor = 0;
        int curr = 0;
        for(int i = 0;i < noOfRequests;i++){
            int first,second;

            // cout<<"Enter the request : ";
            cin>>first;
            // cout<<"Enter the request : ";
            cin>>second;
            
            floor += abs(curr - first) + abs(second - first);
            curr = second;
        }

        cout<<floor<<endl;
    }
}