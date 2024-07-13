// Chef Chick loves to jump a lot. Once, it realised that it was on an infinitely long road, and decided to travel along this road by jumping. Let's view the road as the x-axis in a 1D coordinate system. Initially, Chef Chick is at the coordinate x = 0, and it wants to move only in the positive x-direction. Moreover, Chef Chick has N favourite integers a1,a2,…,aN, and it wants to jump on the coordinates that are multiples of these favourite numbers — when its current position is x, it jumps to the smallest coordinate y > x such that y is an integer multiple of at least one of the values a1,a2,…,a N; the length of such a jump is y - x. This way, Chef Chick keeps jumping along the road forever in the positive x-direction. You need to find the length of the longest jump it will make, i.e. the largest integer d such that Chef Chick makes at least one jump with length d and never makes any jump with a greater length. It can be proved that such an integer always exists.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of array : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++) cin>>arr[i];
        
        int mini = *min_element(arr,arr + len);
        cout<<mini<<endl;
    }
}