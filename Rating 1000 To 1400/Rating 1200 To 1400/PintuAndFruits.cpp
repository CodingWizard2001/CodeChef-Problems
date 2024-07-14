// Chef went to Australia and saw the destruction caused by bushfires, which made him sad, so he decided to help the animals by feeding them fruits. First, he went to purchase fruits from Pintu. Pintu sells M different types of fruits (numbered 1 through M). He sells them in N baskets (numbered 1 through N), where for each valid i, the i-th basket costs Pi and it contains fruits of type Fi. Chef does not have too much money, so he cannot afford to buy everything; instead, he wants to choose one of the M available types and purchase all the baskets containing fruits of that type. Help Chef choose the type of fruit to buy such that he buys at least one basket and the total cost of the baskets he buys is the smallest possible.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        
        int arr[n];
        int brr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        for(int i = 0;i < n;i++) cin>>brr[i];
        
        map<int,int>ma;
        for(int i = 0;i < n;i++){
            ma[arr[i]] += brr[i];
        }
        
        int mini = INT_MAX;
        for(auto p : ma){
            if(p.second < mini) mini = p.second; 
        }
        cout<<mini<<endl;
    }
}