// Chef and his girlfriend are going to have a promenade. They are walking along the straight road which consists of segments placed one by one. Before walking Chef and his girlfriend stay at the beginning of the first segment, they want to achieve the end of the last segment. There are few problems:

// 1.  At the beginning Chef should choose constant integer - the velocity of mooving. It can't be changed inside one segment.

// 2.  The velocity should be decreased by at least 1 after achieving the end of some segment.

// 3.  There is exactly one shop on each segment. Each shop has an attractiveness. If it's attractiveness is W and Chef and his girlfriend move with velocity V then if V < W girlfriend will run away into the shop and the promenade will become ruined.

// 4.  Chef doesn't want to lose her girl in such a way, but he is an old one, so you should find the minimal possible velocity at the first segment to satisfy all conditions.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int ans = 0;
        for(int i = 0;i < len;i++){
            if(ans < (i + arr[i])) ans = (i + arr[i]);
        }
        
        cout<<ans<<endl;
    }
}