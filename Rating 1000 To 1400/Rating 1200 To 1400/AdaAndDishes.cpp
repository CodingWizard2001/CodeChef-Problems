// Chef Ada is preparing N dishes (numbered 1 through N). For each valid i, it takes Ci minutes to prepare the i-th dish. The dishes can be prepared in any order. Ada has a kitchen with two identical burners. For each valid i, to prepare the i-th dish, she puts it on one of the burners and after Ci minutes, removes it from this burner; the dish may not be removed from the burner before those Ci minutes pass, because otherwise it cools down and gets spoiled. Any two dishes may be prepared simultaneously, however, no two dishes may be on the same burner at the same time. Ada may remove a dish from a burner and put another dish on the same burner at the same time. What is the minimum time needed to prepare all dishes, i.e. reach the state where all dishes are prepared?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long int len,sum1 = 0,sum2 = 0;
        // cout<<"Enter the length of the array : ";
        cin>>len;

        vector<long long int>arr(len);
        for(long long int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end(),greater<long long int>());

        for(long long int i = 0;i < len;i++){
            if(sum1 < sum2) sum1 += arr[i];
            else sum2 += arr[i];
        }

        cout<<max(sum1,sum2)<<endl;
    }
}