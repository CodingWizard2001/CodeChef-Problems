// Every great chef knows that lucky numbers are positive integers whose decimal representations contain only the lucky digits 4 and 7. Our chef has recently returned from the Lucky country. He observed that every restaurant in the Lucky country had a lucky number as its name. He believes that having a lucky number as a restaurant name can indeed turn out to be very lucky. Our chef believes that it is possible to make a lucky number having N digits even luckier. Any number following the rules below is called Lucky lucky number -

// 1.  The number contains only digits 4 and 7.

// 2.  Count of digit 4 in the number should be divisible by 7.

// 3.  Count of digit 7 in the number should be divisible by 4.

// Help our chef to compute the count of digit 4 in the smallest Lucky lucky number having N digits.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        // cout<<"Enter a number : ";
        cin>>n;
        
        int i;
        for(i = n;i >= 0; i-= 4){
            if((i % 7) == 0){
                cout<<i<<endl;
                break;
            }
        }
        if(i < 0) cout<<-1<<endl;
    }
}