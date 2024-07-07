// Rachel has a date and tells everyone she is not mad at Ross but doesn't have any feelings for him anymore either. Seeing her date for the first time, everyone notices that he looks exactly like Ross. However, Rachel refuses to believe so. Rachel makes a list of N characteristics and assigns a score to both Ross and Russ for each of the characteristics. Ross' ith characteristic has a score equal to Ai and Russ' ith characteristic has a score equal to Bi. Rachel decides that Russ looks exactly like Ross if the following condition is satisfied for at least X distinct values of j, 1 ≤ j ≤ N : |Aj - Bj| <= k. Help Rachel in finding if both are alike.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCharacteristics,minNumberCharacteristics,maxPossibleScoreDiff;
        
        cin>>noOfCharacteristics>>minNumberCharacteristics>>maxPossibleScoreDiff;
        
        int ross[noOfCharacteristics];
        for(int i = 0;i < noOfCharacteristics;i++) cin>>ross[i];
        
        int russ[noOfCharacteristics];
        for(int i = 0;i < noOfCharacteristics;i++) cin>>russ[i];
        
        int count = 0;
        for(int i = 0;i < noOfCharacteristics;i++){
            if(abs(ross[i] - russ[i]) <= maxPossibleScoreDiff) count++;
            
        }
        
        if(count >= minNumberCharacteristics) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}