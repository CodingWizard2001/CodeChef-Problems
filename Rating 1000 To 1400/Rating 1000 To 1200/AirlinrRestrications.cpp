// Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her. The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int weightOfBag1,weightOfBag2,weightOfBag3,maximumWeight1,maximumWeight2;
        // cout<<"Enter the weight of the bag : ";
        cin>>weightOfBag1;

        // cout<<"Enter the weight of the bag : ";
        cin>>weightOfBag2;

        // cout<<"Enter the weight of the bag : ";
        cin>>weightOfBag3;

        // cout<<"Enter the maximum weight of the bag : ";
        cin>>maximumWeight1;
        
        // cout<<"Enter the maximum weight of the bag : ";
        cin>>maximumWeight2;
        int sum1 = (weightOfBag1 + weightOfBag2);
        int sum2 = (weightOfBag3 + weightOfBag2);
        int sum3 = (weightOfBag1 + weightOfBag3);
        
        if((sum1 <= maximumWeight1 && weightOfBag3 <= maximumWeight2) || (sum2 <= maximumWeight1 && weightOfBag1 <= maximumWeight2) || (sum3 <= maximumWeight1 && weightOfBag2 <= maximumWeight2)) cout<<"Yes"<<endl;

        else cout<<"No"<<endl;
    }
}